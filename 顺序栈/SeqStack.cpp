#include <iostream>

#include "SeqStack.h"

using namespace std;

int main()
{
	SeqStack<int> stack(10);
	int init[10] = { 1, 2, 32, 3, 5, 3, 2, 4, 23, 9 };
	for (int i = 0; i < 10; i++)
	{
		stack.push(init[i]);
	}
	stack.Print();
	//stack.push(88);

	cout << stack.pop() << endl;
	stack.Print();


	system("pause");
	return 0;
}