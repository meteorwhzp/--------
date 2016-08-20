#include "ListNode.h"

template<typename T> class SingleList
{
public:
	SingleList() :head(new ListNode<T>()){}
	~SingleList()
	{
		MakeEmpty();
		delete head;
	}

	void MakeEmpty();          //make the list empty
	int Length();              //get the Length
	ListNode<T> *Find(T value, int n);//find the nth data which is equal to value
	ListNode<T> *Find(int n);         //find the nth data
	bool Insert(T item, int n = 0);   //insert the data in the nth position
	T Remove(int n = 0);
	bool RemoveAll(T item);       //remove all th data which is equal to item
	T Get(int n);
	void Print();

private:
	ListNode<T> *head;
};

template<typename T> void SingleList<T>::MakeEmpty()
{
	ListNode<T> *pdel;
	while (head->m_pnext != NULL)
	{
		pdel = head->m_pnext;
		head->m_pnext = pdel->m_pnext;
		delete pdel;
	}
}

template<typename T> int SingleList<T>::Length()
{
	ListNode<T> *pmove = head->m_pnext;
	int count = 0;
	while (pmove!= NULL)
	{
		pmove = pmove->m_pnext;
		count++;
	}
	return count;
}

template<typename T> ListNode<T>* SingleList<T>::Find(int n)
{
	if (n < 0)
	{
		cout << "The n is out of boundary" << endl;
		return NULL:
	}
	ListNode<T> *pmove = head->m_pnext;
	for (int i = 0; i < n&&pmove; i++)
	{
		pmove = pmove->m_pnext;
	}
	if (pmove == NULL)
	{
		cout << "The n is out of boundary" << endl;
		return NULL:
	}
	return pmove;
}

template<typename T> ListNode<T>* SingleList<T>::Find(T value, int n)
{
	if (n < 1)
	{
		cout << "The n is illegal" << endl;
		return NULL;
	}
	ListNode<T> *pmove = head;
	int count = 0;
	while (count != n&&pmove)
	{
		pmove = pmove->m_pnext;
		if (pmove->m_data == value)
		{
			count++;
		}
	}
	if (pmove == NULL)
	{
		count << "can't find the element" << endl;
		return NULL;
	}
	return pmove;
}

template<typename T> bool SingleList<T>::Insert(T item, int n){
	if (n<0){
		cout << "The n is illegal" << endl;
		return 0;
	}
	ListNode<T> *pmove = head;
	ListNode<T> *pnode = new ListNode<T>(item);
	if (pnode == NULL){
		cout << "Application error!" << endl;
		return 0;
	}
	for (int i = 0; i<n&&pmove; i++){
		pmove = pmove->m_pnext;
	}
	if (pmove == NULL){
		cout << "the n is illegal" << endl;
		return 0;
	}
	pnode->m_pnext = pmove->m_pnext;
	pmove->m_pnext = pnode;
	return 1;
}

template<typename T> bool SingleList<T>::RemoveAll(T item)
{
	ListNode<T> *pmove = head;
	ListNode<T> *pdel = head->m_pnext;
	while (pdel != NULL)
	{
		if (pdel->m_data == item)
		{
			pmove->m_pnext = pdel->m_pnext;
			delete pdel;
			pdel = pmove->m_pnext;
			continue;
		}
		pmove = pmove->m_pnext;
		pdel = pdel->m_pnext;
	}
	return 1;
}

template<typename T> T SingleList<T>::Remove(int n)
{
	if (n < 0)
	{
		cout << "n<0" << endl;
		exit(1);
	}
	ListNode<T> *pmove = head;
	ListNode<T> *pdel = NULL;
	for (int i = 0; i < n && pmove->m_pnext; i++)
	{
		pmove = pmove->m_pnext;
	}
	if (pmove->m_pnext == NULL)
	{
		cout << "can't find the element" << endl;
		exit(1);
	}
	pdel = pmove->m_pnext;
	pmove->m_pnext = pdel->m_pnext;
	T temp = pdel->m_data;
	delete pdel;
	pdel = NULL;
	return temp;
}

template<typename T> T SingleList<T>::Get(int n){
	if (n<0){
		cout << "The n is out of boundary" << endl;
		exit(1);
	}
	ListNode<T> *pmove = head;
	for (int i = 0; i<n; i++){
		pmove = pmove->m_pnext;
		if (NULL == pmove){
			cout << "The n is out of boundary" << endl;
			exit(1);
		}
	}
	return pmove->m_data;
}


template<typename T> void SingleList<T>::Print()
{
	ListNode<T> *pmove = head->m_pnext;
	cout << "head";
	while (pmove){
		cout << "--->" << pmove->m_data;
		pmove = pmove->m_pnext;
	}
	cout << "--->over" << endl << endl << endl;
}
