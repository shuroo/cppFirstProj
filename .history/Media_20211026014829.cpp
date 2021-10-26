#include<iostream>
using namespace std;
  
class Media
{
   int x;
public:
    virtual void fun() = 0;
    int getX() { return x; }
};
  
// This class inherits from Base and implements fun()
class Photo: public Media
{
    int y;
public:
    void fun() { cout << "fun() called"; }
};

// This class inherits from Base and implements fun()
class Audio: public Media
{
    int y;
public:
    void fun() { cout << "fun() called"; }
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