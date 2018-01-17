#ifndef _MYBINTREE_H__
#define _MYBINTREE_H__

template<typename T>
class BinNode
{
public:
	BinNode();
	BinNode(T t, BinNode<T>* p);
	virtual ~BinNode();

	BinNode<T>* m_parent;//���ڵ�ָ��
	BinNode<T>* m_lChild;//��childָ��
	BinNode<T>* m_rChild;//��childָ��

	enum RBCOLOR color;//��ɫ �ں������ʹ��
	int size();
	BinNode<T>* insertAsLC(T const& t);
	BinNode<T>* insertAsRC(T const& t);
	BinNode<T>* succ();	//�����������ʱ�ý��ĺ��ָ��

	// �����㷨
	template <typename VST> void travPre_R(VST &);	//��������ݹ��㷨
	template <typename VST> void travPre_I(VST &);	//�����������ջ���㷨1
	template <typename VST> void travPre_II(VST &);	//�����������ջ���㷨2
	template <typename VST> void travIn_R(VST &);	//��������ݹ��㷨
	template <typename VST> void travIn_I(VST &);	//�����������ջ���㷨
	template <typename VST> void travPost_R(VST &);	//��������ݹ��㷨
	template <typename VST> void travPost_I(VST &);	//�����������ջ���㷨
	template <typename VST> void travLevel(VST &);	//��α��� ���ڶ���

private:
	T m_data;
	int m_sheight;	//��¼�ý��߶�
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
	int m_size;	//��¼�ö�����������
	BinNode<T>* m_root;//�����������ڵ�ָ��
};

#endif