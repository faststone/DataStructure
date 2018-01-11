#include "ListNode.h"

template <typename T>
ListNode<T>* ListNode<T>::insertPred(T t)
{
	ListNode<T>* x = new ListNode(t, this->pred, this);
	this->pred->next = x;
	this->pred = x;
	return x;
}

template <typename T>
ListNode<T>* ListNode<T>::insertNext(T t)
{
	ListNode<T>* x = new ListNode(t, this, this->next);
	this->next->pred = x;
	this->next = x;
	return x;
}