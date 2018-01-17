#include "myBinTree.h"

/************************************************************************/
/*BinNode                                                               */
/************************************************************************/

template<typename T>
BinNode<T>::BinNode()
: m_data(NULL)
, m_parent(NULL)
, m_sheight(0)
, m_horizontalPosition(0)
, m_distanceToRoot(0)
, m_lChild(NULL)
, m_rChild(NULL)
{

}

template<typename T>
BinNode<T>::BinNode(T t, BinNode<T>* p)

{
	m_data = t;
	m_parent = p;
	m_horizontalPosition = 0;
	m_distanceToRoot = 0;
	m_lChild = NULL;
	m_rChild = NULL;
}

/*
返回该结点为根的子树的结点个数
递归求解 return lc->size() + rc->size() + 1
叶子节点 return 1
*/
template<typename T>
int BinNode<T>::size()
{
	int s = 1;
	if (m_lChild) {
		s += m_lChild->size();
	}
	if (m_rChild) {
		s += m_rChild->size();
	}
	return s;
}

template<typename T>
BinNode<T>* BinNode<T>::insertAsLC(T const& t)
{
	return m_lChild = new BinNode(t, this);
}

template<typename T>
BinNode<T>* BinNode<T>::insertAsRC(T const& t)
{
	return m_rChild = new BinNode(t, this);
}


/************************************************************************/
/*myBinTree                                                             */
/************************************************************************/

template<typename T>
myBinTree<T>::myBinTree()
	: m_size(0)
	, m_root(NULL)
{

}
template <typename T>
myBinTree<T>::~myBinTree()
{

}

template<typename T>
myBinTree<T>::myBinTree(BinNode<T>* root)
{
	m_root = root;
	m_size = m_root->size();
	root->m_parent = NULL;
}

template<typename T>
int myBinTree<T>::size() 
{
	return m_size;
}