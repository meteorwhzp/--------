#include "ListNode.h"

template<typename T> class DoubleList
{
	DoubleList() :head(new ListNode<T>())
	{
		head->pred = head;
		head->succ = head;
	}
	~DoubleList()
	{
		MakeEmpty();
		delete head;
	}

	void MakeEmpty();
	int Length();
	ListNode<T>* Find(int n = 0);
	ListNode<T> * FindData(Type item);   //find the data which is equal to item
	bool Insert(T item, int n = 0);     //insert item in the nth data
	T Remove(int n = 0);   //delete the nth data
	T Get(int n = 0);      //get the nth data
	void Print();           //print the list



private:
	ListNode<T> *head;
};

template<typename T> void DoubleList<T>::MakeEmpty()
{
	ListNode<T> *pmove = head->succ;
	ListNode<T> *pdel;
	while (pmove != head)
	{
		pdel = pmove;
		
	}
}