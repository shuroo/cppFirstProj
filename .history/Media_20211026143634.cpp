
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

// Date member function
void Media::SetDate(int year, int month, int day)
{
    m_month = month;
    m_day = day;
    m_year = year;
}
 
  
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