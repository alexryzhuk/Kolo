// Kolo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
    Circle radius1;
    cin >> radius1;
    Circle radius2;
    cin >> radius2;
    bool ans = radius1 == radius2;
    cout << ans << endl;

}


