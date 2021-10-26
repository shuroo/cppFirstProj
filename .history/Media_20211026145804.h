#ifndef MEDIA_H
#define MEDIA_H
  
class Media
{
   int _id;
   int mediaFile;
public:
    virtual void play();
    int getId();
    void setId();
    virtual Media(ofstream& mediaFile);
    void SetFile(int file); 
};
