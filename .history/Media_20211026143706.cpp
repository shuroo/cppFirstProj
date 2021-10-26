
#include<iostream>
#include "Media.h"


using namespace std;
  

void Media::play() { };
    
int Media::getId(){ 
    return _id; 
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