
#include<iostream>
#include "Video.h"

using namespace std;

// This class inherits from Base and implements fun()
class Video: public Media
{
public:
    virtual void display() { cout << "Video display() method was called!!" << endl; }
};
  
int main(void)
{
    // Derived d;
    // d.fun();
    return 0;
}