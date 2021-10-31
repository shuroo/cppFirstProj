
#include<iostream>
#include "Media.h"

class Photo: public Media
{
public:
    Photo(){};
    ~Photo(){};
    virtual void display();
};