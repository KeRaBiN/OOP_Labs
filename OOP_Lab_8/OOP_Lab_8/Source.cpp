
#include <iostream>
#include "OneDimentionalArray.h"
#include "complex.h"

using namespace std;

template<typename T>
ostream& operator<<(ostream& out, OneDimentionalArray<T>& arr)
{
	T* temp = arr.getArrayPointer();
	out << "Your array with the size - " << arr.getCurrentSize() << " and the max size - " << arr.getMaxSize() << ":" << endl;
	for (int i = 0; i < arr.getCurrentSize(); i++)
		out << temp[i] << "   ";
	out << endl;
	return out;
}

ostream& operator<<(ostream& out, complex& comp)
{
	out << "(" << comp.getVariable_re() << ", " << comp.getVariable_im() << ")";
	return out;
}

void main()
{
	OneDimentionalArray<int> int_arr_1;
	OneDimentionalArray<int> int_arr_2;
	int_arr_1.push_back(8);
	int_arr_1.push_back(4);
	int_arr_1.push_back(1);
	int_arr_1.push_back(2);
	int_arr_1.push_back(8);
	int_arr_1.push_back(15);
	int_arr_2.push_back(16);
	int_arr_2.push_back(4);
	int_arr_2.push_back(7);
	cout << int_arr_1 << endl;
	cout << int_arr_2 << endl;
	OneDimentionalArray<int> int_arr_3;
	int_arr_3 = int_arr_1 + int_arr_2;
	cout << int_arr_3 << endl;



	OneDimentionalArray<complex> complex_arr_1;
	OneDimentionalArray<complex> complex_arr_2;
	complex_arr_1.push_back(complex(9, 15));
	complex_arr_1.push_back(complex(1, 0));
	complex_arr_1.push_back(complex(78, 23));
	complex_arr_1.push_back(complex(45, 16));
	complex_arr_1.push_back(complex(6, 6));
	complex_arr_1.push_back(complex(14, 7));
	complex_arr_2.push_back(complex(8, 0));
	complex_arr_2.push_back(complex(0, 4));
	complex_arr_2.push_back(complex(15, 2));
	cout << complex_arr_1 << endl;
	cout << complex_arr_2 << endl;
	OneDimentionalArray<complex> complex_arr_3;
	complex_arr_3 = complex_arr_1 + complex_arr_2;
	cout << complex_arr_3 << endl;
}