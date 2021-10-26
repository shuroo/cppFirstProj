
#include<iostream>
#include "Media.h"

using namespace std;

// This class inherits from Base and implements fun()
class Video: public Media
{
    int y;
public:
    void fun() { cout << "fun() called"; }
};
  
int main(void)
{
    // Derived d;
    // d.fun();
    return 0;
}