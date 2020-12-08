#include <iostream>

using namespace std;

int main()
{
	/*int var = 123;
	int* ptrvar = &var+2002;
	cout << "&var = " << &var << endl;
	cout << "ptrvar = " << ptrvar << endl;
	cout << "var = " << var << endl;
	cout << "*ptrvar" << *ptrvar << endl;*/

	/*int var = 123;
	int* ptrvar = &var;
	int** prt_ptrvar = &ptrvar;
	int*** ptr_ptr_ptrvar = &prt_ptrvar;

	cout << "var = " << var << endl;
	cout << "*ptrvar = " << *ptrvar << endl;
	cout << "**prt_ptrvar = " << **prt_ptrvar << endl;
	cout << "***ptr_ptr_ptrvar" << ***ptr_ptr_ptrvar << endl;*/

	int value = 7;
	void* number = &value;
	int* intPtr = static_cast<int*>(number);
	cout << *intPtr;
}



