#define MESSAGE_H
#include <iostream>
#include <string>

using namespace std;
class Message
{
private:    
   char * _text;
public:
    Message(const char& message);
    char * getMessage(); 
};
