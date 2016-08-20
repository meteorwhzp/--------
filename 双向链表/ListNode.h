#ifndef _LISTNODE_H
#define _LISTNODE_H

template<typename T> class DoubleList;

template<typename T> class ListNode
{
public:
	friend class DoubleList<T>;
	ListNode() :pred(NULL), succ(NULL){}
	ListNode(const T item,ListNode<T> *pred = NULL,ListNode<T> *succ = NULL)
		:m_data(item), pred(p), succ(s){}
	~ListNode()
	{
		pred = NULL;
		succ = NULL;
	}

	T GetData();

private:
	T m_data;
	ListNode *pred;
	ListNode *succ;

};

template<typename T> T ListNode<T>::GetData()
{
	return this->m_data;
}















#endif