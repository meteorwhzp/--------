#ifndef _LISTNODE_H
#define _LISTNODE_H

#include <iostream>
using namespace std;
template<typename T> class SingleList;

template<typename T> class ListNode
{
private:
	T m_data;
	ListNode<T>* m_pnext;


	friend class SingleList<T>;
	ListNode():m_pnext(NULL){}
	ListNode(const T item, ListNode<T> *next = NULL) :m_data(item), m_pnext(next){}
	~ListNode(){ m_pnext = NULL; }

public:
	T getdata();
	friend ostream &operator<< <T>(ostream &, ListNode<T> &);
};

template<typename T> T ListNode<T>::getdata()
{
	return this->m_data;
}

template<typename T> ostream &operator<<(ostream  &os, ListNode<T> &out)
{
	os << out.m_data;
	return os;
}

#endif