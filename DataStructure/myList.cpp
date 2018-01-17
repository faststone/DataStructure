#include "myList.h"



template <typename T>
myList<T>::myList()
	:m_size(0)
{
	m_head = new ListNode<T>;
	m_tail = new ListNode<T>;
	m_head->m_next = m_tail;
	m_tail->m_pred = m_head;

	m_head->m_pred = NULL;
	m_tail->m_next = NULL;
}

template <typename T>
myList<T>::~myList()
{

}

template <typename T>
int myList<T>::size()
{
	return m_size;
}

template <typename T>
bool myList<T>::empty()
{
	if (m_size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <typename T>
ListNode<T>* myList<T>::first()
{
	return m_head->m_next;
}

template <typename T>
ListNode<T>* myList<T>::last()
{
	return m_tail->m_pred;
}

template <typename T>
ListNode<T>* myList<T>::insertAsFirst(T t)
{
	ListNode<T>*  x = new ListNode<T>(t, m_head, m_head->m_next);
	m_head->m_next->m_pred = x;
	m_head->m_next = x;
	++m_size;
	return x;
}

template <typename T>
ListNode<T>* myList<T>::insertAsLast(T t)
{
	ListNode<T>*  x = new ListNode<T>(t, m_tail->m_pred, m_tail);
	m_tail->m_pred->m_next = x;
	m_tail->m_pred = x;
	++m_size;
	return x;
}

template <typename T>
template <typename Vst>
void myList<T>::travser(Vst &t)
{
	ListNode<T>* x = m_head->m_next;
	while (x != m_tail)
	{
		t(x->data);
		x = x->m_next;
	}
}

template <typename T>
T myList<T>::remove(ListNode<T>* p)
{
	T temp = p->data;
	p->m_pred->m_next = p->m_next;
	p->m_next->m_pred = p->m_pred;
	delete p;
	--m_size;
	return temp;
}

template <typename T>
ListNode<T>* myList<T>::find(T t)
{
	ListNode<T>* x = m_head->m_next;
	while (x != m_tail)
	{
		if (x->data = t)
		{
			return x;
		}
		x = x->m_next;
	}
	return 0;
}

template <typename T>
ListNode<T>* myList<T>::search(T t)
{

}