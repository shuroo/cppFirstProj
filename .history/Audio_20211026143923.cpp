
#include<iostream>
#include "Media.h"

using namespace std;


// This class inherits from Base and implements fun()
class Audio: public Media
{
    int y;
public:
    void fun() { cout << "fun() called"; }
};