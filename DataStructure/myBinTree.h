#ifndef _MYBINTREE_H__
#define _MYBINTREE_H__

template<typename T>
class BinNode
{
public:
	BinNode();
	BinNode(T t, BinNode<T>* p);
	virtual ~BinNode();

	BinNode<T>* m_parent;//父节点指针
	BinNode<T>* m_lChild;//左child指针
	BinNode<T>* m_rChild;//右child指针

	enum RBCOLOR color;//颜色 在红黑树中使用
	int size();
	BinNode<T>* insertAsLC(T const& t);
	BinNode<T>* insertAsRC(T const& t);
	BinNode<T>* succ();	//返回中序遍历时该结点的后继指针

	// 遍历算法
	template <typename VST> void travPre_R(VST &);	//先序遍历递归算法
	template <typename VST> void travPre_I(VST &);	//先序遍历基于栈的算法1
	template <typename VST> void travPre_II(VST &);	//先序遍历基于栈的算法2
	template <typename VST> void travIn_R(VST &);	//中序遍历递归算法
	template <typename VST> void travIn_I(VST &);	//中序遍历基于栈的算法
	template <typename VST> void travPost_R(VST &);	//后序遍历递归算法
	template <typename VST> void travPost_I(VST &);	//后序遍历基于栈的算法
	template <typename VST> void travLevel(VST &);	//层次遍历 基于队列

private:
	T m_data;
	int m_sheight;	//记录该结点高度
	int m_horizontalPosition;
	int m_distanceToRoot;
};

/************************************************************************/
/*myBinTree                                                             */
/************************************************************************/

template<typename T>
class myBinTree
{
public:
	myBinTree();
	myBinTree(BinNode<T>* root);
	virtual ~myBinTree();

	int size();

private:
	int m_size;	//记录该二叉树结点个数
	BinNode<T>* m_root;//二叉树树根节点指针
};

#endif