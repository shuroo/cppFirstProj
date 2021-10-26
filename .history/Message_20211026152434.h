#define MESSAGE_H
#include <iostream>
#include <string>

using namespace std;
class Message
{
   char* text;
public:
    Message(string& message);
    void getText(int file); 
};
