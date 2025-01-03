#pragma once
#include<vector>

class Span {
	private:
		unsigned int	N;
		std::vector<int> list;		
	public:
		Span(unsigned int N);
		~Span();
		void addNumber(int n);

};  