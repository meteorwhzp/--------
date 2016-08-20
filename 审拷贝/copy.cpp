#include <iostream>

using namespace std;

class Stu{
public:
	int *a;
	Stu()
	{
		a = new int[2];
		a[0] = 11;
		a[1] = 12;
		cout << "constructor" << endl;
	}
	~Stu()
	{
		delete[] a;
		cout << "destructor" << endl;
	}
};

Stu& fun(Stu& a)
{
	return a;
}
int main()
{
	{
		Stu at;
		cout << at.a[0] << " " << at.a[1] << endl;
		//Stu st = fun(at);
		//Stu st = at;
	}
	return 0;
}