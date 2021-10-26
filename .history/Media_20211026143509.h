#ifndef MEDIA_H
#define MEDIA_H
  
class Media
{
   int _id;
public:
    virtual void play();
    int getId();
    void SetDate(int year, int month, int day); 
};
