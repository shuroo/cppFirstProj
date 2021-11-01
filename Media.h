
#ifndef MEDIA_H 
#define MEDIA_H
//#include "User.h"  
class Media
{
   int _id;
   int mediaFile;   
public:
    Media(){};
    ~Media(){};
    virtual void display();
    int getId();
    void setId(int id);
    void SetFile(int file); 
};

#endif