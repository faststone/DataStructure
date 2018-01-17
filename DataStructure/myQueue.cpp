#include "myQueue.h"

template<typename T>
void myQueue<T>::enQueue(T const& t)
{
	this->insertAsLast(t);
}

template<typename T>
T myQueue<T>::rear()
{
	return this->last()->data();
}

template<typename T>
T myQueue<T>::font()
{
	return this->first()->data;
}

template<typename T>
T myQueue<T>::dequeue()
{
	return this->remove(this->first());
}