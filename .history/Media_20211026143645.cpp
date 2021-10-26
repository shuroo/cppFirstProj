
#include<iostream>
#include "Media.h"
  
class Media
{
   int _id;
public:
    virtual void play();
    int getId();
    void SetDate(int year, int month, int day); 
};

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