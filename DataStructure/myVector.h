#pragma once


template <typename T>
class myVector
{
public:
	enum SortMethod{
		BUBBLE,
		INSERT,
		QUICK,
		MERGE,
	}SortMethod;
	myVector();
	~myVector();
	template <typename Vst> void travser(Vst &visit);
	int size();
	T get(int r) const;
	void put(int r, T t);
	bool push_back(T t);
	bool insert(int r, const T& t);
	T remove(T t);
	bool disordered () const;
	void sort(enum SortMethod method = QUICK);
	T find(T t);
	int deduplicate();
	int uniquify();
	void traverser();
	bool empty();
	void print();
	T operator [] (const int& t);

protected:
	void expand(); // ����2��
	void bubbleSort();
	void quicksort(int lo, int hi);
	void mergesort(int lo, int hi);
private:
	int m_size; // ��ģ
	int m_capacity; // ����
	T*	m_element; // ������  
};