 #include "myVector.h"

#define DEFAULT_CAPACITY 100

template <typename T>
myVector<T>::myVector() //容量为c、规模为s、所有元素初始为v 
	: m_size(0)
	, m_capacity(DEFAULT_CAPACITY)
{
	m_element = new T[m_capacity];
}

template <typename T>
myVector<T>::~myVector()
{
	delete[] m_element;
}

template <typename T>
template <typename Vst> 
void myVector<T>::travser(Vst &visit)
{
	for (int i = 0; i < m_size;i++)
	{
		visit(m_element[i]);
	}
}

template <typename T>
int myVector<T>::size()
{
	return m_size;
}

template <typename T>
T myVector<T>::get(int r) const
{
	if ( r >= 0 && r <= m_size)
	{
		return m_element[r];
	}
	else
	{
		return -1;
	}
}

template <typename T>
void myVector<T>::put(int r, T t)
{
	m_element[r] = t;
}

template <typename T>
bool myVector<T>::push_back(T t)
{
	return insert(m_size, t);
}

template <typename T>
bool myVector<T>::insert(int r, const T& t)
{
	if (r > m_size || r < 0)
		return false;
	if (m_size == m_capacity)
		expand();
	int i = m_size + 1;
	while (i > r)
	{
		m_element[i] = m_element[i - 1];
		--i;
	}
	m_element[i] = t;
	m_size++;
	return true;
}

template <typename T>
T myVector<T>::remove(T t)
{
	if (t > m_size || t < 0)
		return 0;
	T temp = m_element[t];
	for (int i = t; i < m_size - 1; ++i)
	{
		m_element[i] = m_element[i + 1];
	}
	--m_size;
	return temp;
}


template <typename T>
bool myVector<T>::disordered() const
{
	for (int i = 0; i < m_size - 1; i++)
	{
		if (m_element[i] > m_element[i + 1])
			return true;
	}
	return false;
}

template <typename T>
void myVector<T>::sort(enum SortMethod method)
{
	switch (method)
	{
	case BUBBLE:
		bubbleSort();
		break;
	case INSERT:
		break;
	case QUICK:
		quicksort(0, m_size);
		break;
	case MERGE:
		mergesort(0, m_size);
		break;
	default:
		break;
	}
}

template <typename T>
T myVector<T>::find(T t)
{
	for (int i = 0; i < m_size; i++)
	{
		if (m_element[i] == t){
			return m_element[i];
		}
	}
	return -1;
}

template <typename T>
bool myVector<T>::empty()
{
	if (m_size == 0)
		return true;
	else
		return false;
}

template <typename T>
void myVector<T>::expand()
{
	m_capacity *= 2;
	T *old = m_element;
	m_element = new T[m_capacity];
	for (int i = 0; i < m_size; i++)
	{
		m_element[i] = old[i];
	}
	delete[] old;
}

template <typename T>
void myVector<T>::print()
{
	for (int i = 0; i < m_size;i++)
	{
		cout << m_element[i] << endl;
	}
}

template <typename T>
void myVector<T>::quicksort(int lo, int hi)
{

}

template <typename T>
void myVector<T>::bubbleSort()
{
	T temp;
	for (int i = 0; i < m_size; ++i)
	{
		for (int j = 0; j < m_size - i - 1; ++j)
		{
			if (m_element[j] > m_element[j + 1])
			{
				temp = m_element[j];
				m_element[j] = m_element[j + 1];
				m_element[j + 1] = temp;
			}
		}
	}
}

template <typename T>
void myVector<T>::mergesort(int lo, int hi)
{

}

template <typename T>
T myVector<T>::operator[] (const int& t)
{
	return m_element[t];
}
