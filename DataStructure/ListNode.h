#pragma once

template <typename T>
class ListNode
{
public:
	ListNode() = default;
	ListNode(T t, ListNode<T>* p = NULL, ListNode<T>* n = NULL) : data(t), m_pred(p), m_next(n) 
	{

	}

	ListNode<T>* insertPred(T t);
	ListNode<T>* insertNext(T t);
	T data;
	ListNode<T>* m_pred;
	ListNode<T>* m_next;
};
