#pragma once
#include <iostream>
using namespace std;

class TextDefaultValue
{
public:
	TextDefaultValue(int value);
	~TextDefaultValue();
	void printDefaultValue(int a = defaultValue);
private:
	static int defaultValue;
};

