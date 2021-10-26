#include<iostream>
#include "Media.h"

using namespace std;
  
class Media
{
   int _id;
public:
    virtual void play() = 0;
    int getId() { return _id; }
};


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