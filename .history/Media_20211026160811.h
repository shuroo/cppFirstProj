#define MEDIA_H
  
class Media
{
   int _id;
   int mediaFile;
public:
    virtual void display();
    int getId();
    void setId(int id);
    Media(ofstream& mediaFile);
    void SetFile(int file); 
};
