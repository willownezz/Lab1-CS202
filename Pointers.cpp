//This program stores the address of a variable in a pointer.
#include<iostream>
using  namespace std;

int main()
{
	int x = 25;		//int variable
	int *ptr = nullptr;	//Pointer variable, can point to an int

	ptr = &x;		//Store the address of x in ptr

	cout << endl << endl;
	cout << "The hex address of x is: " << ptr << endl;
	cout << "The dec address of x is: " << (long long) ptr << endl;
	cout << "The size of ptr is " << sizeof(ptr) << " bytes\n";

	cout << endl;

	cout << "The size of x is " << sizeof(x) << " bytes\n";
	cout << "The value in x is " << x << endl;
	cout << endl << endl;

	return 0;
}
