#define MESSAGE_H
#include <iostream>
#include <string>

using namespace std;
class Message
{
   char* text;
public:
    virtual void play();
    int getId();
    void setId(int id);
    Message(string& message);
    void getText(int file); 
};
