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