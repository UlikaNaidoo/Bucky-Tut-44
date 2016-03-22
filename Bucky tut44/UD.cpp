#include "UD.h"
#include <iostream>

using namespace std;


UD::UD()
{
}

void UD::printShiz() {
	cout << "I am a regular function" << endl;
}

void UD::printshiz2() const {
	cout << "I am constant" << endl;
}

UD::~UD()
{
}
