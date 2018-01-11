#pragma once


template <typename T,int maxSize>
class myStack
{
public:
	myStack();
	~myStack();
	void push(const T& t);
	void pop();
	T& top(const T& t); //Õ»¶¥
	bool empty(const T& t);
	bool full(const T& t);
	void print();
private:
	int m_numElems;
	T m_element[maxSize];
};

