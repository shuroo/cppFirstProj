#ifndef MEDIA_H
#define MEDIA_H

#include<iostream>
#include "Media.h"

using namespace std;
  
class Media
{
   int _id;
public:
    virtual void play();
    int getId(); 
};
