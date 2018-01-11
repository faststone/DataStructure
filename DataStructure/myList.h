#pragma once

#include "ListNode.h"

template <typename T>
class myList
{
public:
	myList();
	~myList();
	int size();
	bool empty();
	ListNode<T>* first();
	ListNode<T>* last();
	ListNode<T>* insertAsFirst(T t);
	ListNode<T>* insertAsLast(T t);
	template <typename Vst> void travser(Vst &t);
	ListNode<T>* insertAfter(ListNode<T>* p,T t);
	ListNode<T>* insertBefore(ListNode<T>*p,T t);
	T remove(ListNode<T>* p);
	bool disordered();
	void sort();
	ListNode<T>* find(T t);
	ListNode<T>* search(T t);
protected:

private:
	int m_size;
	ListNode<T>* m_head;
	ListNode<T>* m_tail;
};

