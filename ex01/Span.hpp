#pragma once

#include<vector>
#include<iostream>
#include<algorithm>
#include<fstream>


class Span {
	private:
		unsigned int	N;
		std::vector<int> list;		
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& src);
		Span& operator=(const Span& src);
		~Span();
		void addNumber(int n);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
		void printList();
};
