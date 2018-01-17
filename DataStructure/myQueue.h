#ifndef _MYQUEUE_H__
#define _MYQUEUE_H__
#include "myList.h"

template<typename T>
class myQueue : public myList<T> 
{
public:
	myQueue(){}
	void enQueue(T const& t);
	T rear();
	T font();
	T dequeue();
};

#endif
