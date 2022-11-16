#pragma once

#include <iostream>

using namespace std;

class complex
{
private:

	int re;
	int im;

public:

	void setVariable_re(int value);
    void setVariable_im(int value);

	int getVariable_re();
    int getVariable_im();

	//ostream& operator << (ostream& out);

	complex();
	complex(int value_1, int value_2);
};

