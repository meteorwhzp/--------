#ifndef _SEQSTACK_H
#define _SEQSTACK_H
#include <stack>
template<typename T> class SeqStack
{
public:
	SeqStack(int sz) :m_ntop(-1), m_nMaxSize(sz){
		m_pelements = new T[sz];
		if (m_pelements == NULL)
		{
			cout << "application Error!!!" << endl;
			exit(1);
		}
	}
	~SeqStack()
	{
		delete[] m_pelements;
	}

public:
	void push(const T item);
	T pop();
	T GetTop() const;
	void Print();
	void MakeEmpty()
	{
		m_ntop = -1;
	}

	bool IsEmpty() const
	{
		return m_ntop == -1;
	}

	bool IsFull() const
	{
		return m_ntop == m_nMaxSize - 1;
	}
private:
	int m_ntop;
	T *m_pelements;
	int m_nMaxSize;
};

template<typename T> void SeqStack<T>::push(const T item)
{
	if (IsFull())
	{
		cout << "The stack is full!!" << endl;
		return;
	}
	m_pelements[++m_ntop] = item;

}

template<typename T> T SeqStack<T>::pop()
{
	if (IsEmpty())
	{
		cout << "The stack is empty!!" << endl;
		exit(1);
	}
	return m_pelements[m_ntop--];
}

template<typename T>T SeqStack<T>::GetTop() const
{
	if (IsEmpty())
	{
		cout << "There is no element!!" << endl;
	}
	return m_pelements[m_ntop];
}

template<typename T> void SeqStack<T>::Print()
{
	cout << "Bottom";
	for (int i = 0; i <= m_ntop; i++)
	{
		cout << "-->" << m_pelements[i];
	}
	cout << "-->top" << endl << endl;
}

#endif