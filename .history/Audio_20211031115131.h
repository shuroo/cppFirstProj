
#include<iostream>
#include "Media.h"

class Audio:public Media
{
public:
    Audio(){};
    ~Audio(){};
    virtual void display();
};
