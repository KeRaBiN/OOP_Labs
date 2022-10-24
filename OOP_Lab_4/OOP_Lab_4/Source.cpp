#include<iostream>

using namespace std;

class dynamic_Array
{
public:

	int getSize();
	int getElementByIndex(int index);

	dynamic_Array(int size);
	~dynamic_Array();

private:
	int* arr;
	int Size = 0;
};

int dynamic_Array::getSize()
{
	return Size;
}

int dynamic_Array::getElementByIndex(int index)
{
	return arr[index];
}

dynamic_Array::dynamic_Array(int size)
{
	Size = size;
	arr = new int[Size];
	for (int i = 0; i < Size; i++)
		if (i % 2)
			arr[i] = i + 3;
		else
			arr[i] = i - 7;
}

dynamic_Array::~dynamic_Array()
{
	delete[] arr;
}

int sumEach3Number(dynamic_Array& arr)
{
	int sum = 0;
	for (int i = 2; i < arr.getSize(); i += 3)
		sum += arr.getElementByIndex(i);
	return sum;
}

int main()
{
	dynamic_Array MyArr(11);

	cout << sumEach3Number(MyArr);

	return 0;
}