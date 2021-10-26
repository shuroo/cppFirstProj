
#include<iostream>
#include "Media.h"

using namespace std;
// This class inherits from Base and implements fun()
class Photo: public Media
{

public:
    virtual void display() { cout << "Photo display() method was called!!" << endl; }
};
