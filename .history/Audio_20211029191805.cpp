
#include<iostream>
#include "Audio.h"

using namespace std;


// This class inherits from Base and implements fun()
class Audio: public Media
{
public:
    virtual void display() { cout << "Audio display() method was called!!" << endl; }
};