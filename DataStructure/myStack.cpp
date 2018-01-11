#include "myStack.h"

template <typename T, int maxSize>
myStack<T, maxSize>::myStack()
	: m_numElems(0)
{

}

template <typename T, int maxSize>
myStack<T, maxSize>::~myStack()
{

}


//	void push(const T& t);
template <typename T, int maxSize>
void myStack<T, maxSize>::push(const T& t)
{
	if (m_numElems == maxSize)
	{
		cout << "element full" << endl;
	}
	m_element[m_numElems] = t;
	m_numElems++;
}

//void pop();
template <typename T, int maxSize>
void myStack<T, maxSize>::pop()
{
	m_numElems--;
}

//	T& top(); //Õ»¶¥

template <typename T, int maxSize>
T& myStack<T, maxSize>::top(const T& t)
{
	return m_element[maxSize];
}

//	bool empty(const T& t);
template <typename T, int maxSize>
bool myStack<T, maxSize>::empty(const T& t)
{
	if (m_numElems == 0)
		return true;
	else
		return false;
}


//	full(const T& t);
template <typename T, int maxSize>
bool myStack<T, maxSize>::full(const T& t)
{
	if (m_numElems == m_maxNum)
		return true;
	else
		return false;
}

template <typename T, int maxSize>
void myStack<T, maxSize>::print()
{
	for (int i = 0; i < m_numElems; i++){
		cout << m_element[i] << endl;
	}
}