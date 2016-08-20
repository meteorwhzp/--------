#include <iostream>

#include "ListNode.h"
#include "SingleList.h"

using namespace std;

int main()
{
	SingleList<int> list;
	for (int i = 0; i<20; i++){
		list.Insert(i * 3, i);
	}
	cout << "The Length of the list is :" << list.Length() << endl;
	list.Print();
	list.Remove(0);
	int x = list.Get(1);
	cout << "Get the element: " << x << endl;
	list.Print();
	system("pause");
	return 0;
}