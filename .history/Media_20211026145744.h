#ifndef MEDIA_H
#define MEDIA_H
  
class Media
{
   int _id;
   int mediaFile;
public:
    virtual void play();
    int getId();
    virtual Media(ofstream& mediaFile);
    void SetFile(int file); 
};
