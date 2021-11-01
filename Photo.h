
#ifndef PHOTO_H
#define PHOTO_H

#include<iostream>
#include "Media.h"
class Photo: public Media
{
public:
    Photo(){};
    ~Photo(){};
    virtual void display();
};

#endif