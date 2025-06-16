#include "../inc/span.hpp"

Span::Span(unsigned int size) : _n(size) {
	if (size == 0)
		throw std::invalid_argument("Size must be greater than 0");
}

Span::~Span() {
	// Destructor does not need to do anything special
}

Span::Span(const Span &other) : _n(other._n), _nbrs(other._nbrs) {
	// Copy constructor
}

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		_n = other._n;
		_nbrs = other._nbrs;
	}
	return *this;
}

void Span::addNumber(int nbr) {
	if (_n == 0)
		throw SpanFullException();
	_n--;
	_nbrs.push_back(nbr);
}

int Span::shortestSpan() {
	if (_nbrs.size() < 2)
		throw NoSpanFoundException();
	std::sort(_nbrs.begin(), _nbrs.end());
	int shortestSpan = std::numeric_limits<int>::max();
	for (unsigned int i = 1; i < _nbrs.size(); i++) {
		shortestSpan = std::min(shortestSpan, _nbrs[i] - _nbrs[i - 1]);
	}
	return (shortestSpan);
}

int Span::longestSpan() {
	if (_nbrs.size() < 2)
		throw NoSpanFoundException();
	std::sort(_nbrs.begin(), _nbrs.end());
	int longestSpan = _nbrs.back() - _nbrs.front();
	return (longestSpan);
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (std::distance(begin, end) < 0 || std::distance(begin, end) > _n)
		throw SpanFullException();
	while (begin != end) {
		addNumber(*begin);
		begin++;
	}
}

const char *Span::SpanFullException::what() const throw()
{
	return ("Span is already full!");
}

const char *Span::NoSpanFoundException::what() const throw()
{
	return ("There is no span, not enough values!");
}