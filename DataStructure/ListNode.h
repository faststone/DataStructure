#pragma once

template <typename T>
class ListNode
{
public:
	ListNode();

	ListNode<T>* insertPred(T t);
	ListNode<T>* insertNext(T t);
	T data;
	ListNode<T>* m_pred;
	ListNode<T>* m_next;
};
