#define MESSAGE_H
  
class Message
{
   char* text;
public:
    virtual void play();
    int getId();
    void setId(int id);
    Media(ofstream& mediaFile);
    void getText(int file); 
};
