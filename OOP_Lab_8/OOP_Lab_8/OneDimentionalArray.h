#pragma once

#include <iostream>

using namespace std;

template<typename T>
class OneDimentionalArray
{
private:

    T* Starting_Point;
    int Current_Size;
    int Max_Size;

    void changeSize(int new_size);

public:

    void push_back(T new_element);
    void pop_back();

    void setMaxSize(int max_size);

    int getCurrentSize();
    int getMaxSize();
    T* getArrayPointer();

    void operator = (const OneDimentionalArray& oda);
    OneDimentionalArray operator + (const OneDimentionalArray& oda);

    OneDimentionalArray();
    OneDimentionalArray(int amount_of_elements);
    OneDimentionalArray(const OneDimentionalArray& oda);
    ~OneDimentionalArray();
};


template<typename T>
inline void OneDimentionalArray<T>::changeSize(int new_size)
{
    T* temp;
    temp = new T[new_size];
    for (int i = 0; i < Current_Size; i++)
        temp[i] = Starting_Point[i];
    Max_Size = new_size;
    delete[] Starting_Point;
    Starting_Point = temp;
}


template<typename T>
inline void OneDimentionalArray<T>::push_back(T new_element)
{
    if (Current_Size + 1 > Max_Size)
    {
        changeSize(Max_Size + 5);
        Starting_Point[Current_Size] = new_element;
        Current_Size++;
    }
    else
    {
        Starting_Point[Current_Size] = new_element;
        Current_Size++;
    }
}

template<typename T>
inline void OneDimentionalArray<T>::pop_back()
{
    Current_Size--;
}

template<typename T>
inline void OneDimentionalArray<T>::setMaxSize(int max_size)
{
    if (max_size < Max_Size)
    {
        Current_Size = max_size;
        changeSize(max_size);
    }
    else if (max_size > Max_Size)
    {
        changeSize(max_size);
    }
}


template<typename T>
inline int OneDimentionalArray<T>::getCurrentSize()
{
    return Current_Size;
}

template<typename T>
inline int OneDimentionalArray<T>::getMaxSize()
{
    return Max_Size;
}

template<typename T>
inline T* OneDimentionalArray<T>::getArrayPointer()
{
    return Starting_Point;
}


template<typename T>
void OneDimentionalArray<T>::operator=(const OneDimentionalArray& oda)
{
    Current_Size = oda.Current_Size;
    Max_Size = oda.Max_Size;
    Starting_Point = new T[Max_Size];
    for (int i = 0; i < Current_Size; i++)
        Starting_Point[i] = oda.Starting_Point[i];
}

template<typename T>
inline OneDimentionalArray<T> OneDimentionalArray<T>::operator+(const OneDimentionalArray& oda)
{
    OneDimentionalArray<T> temp(this->Max_Size + oda.Max_Size);
    for (int i = 0; i < this->Current_Size; i++)
        temp.push_back(this->Starting_Point[i]);
    for (int i = 0; i < oda.Current_Size; i++)
        temp.push_back(oda.Starting_Point[i]);
    return temp;
}


template<typename T>
inline OneDimentionalArray<T>::OneDimentionalArray()
{
    Current_Size = 0;
    Max_Size = 0;
    Starting_Point = new T[Max_Size];
}


template<typename T>
inline OneDimentionalArray<T>::OneDimentionalArray(int amount_of_elements)
{
    Current_Size = 0;
    Max_Size = amount_of_elements;
    Starting_Point = new T[Max_Size];
}

template<typename T>
inline OneDimentionalArray<T>::OneDimentionalArray(const OneDimentionalArray& oda)
{
    Current_Size = oda.Current_Size;
    Max_Size = oda.Max_Size;
    Starting_Point = new T[Max_Size];
    for (int i = 0; i < Current_Size; i++)
        Starting_Point[i] = oda.Starting_Point[i];
}

template<typename T>
inline OneDimentionalArray<T>::~OneDimentionalArray()
{
    delete[] Starting_Point;
}
