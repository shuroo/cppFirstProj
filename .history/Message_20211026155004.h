#define MESSAGE_H
#include <iostream>
#include <string>

using namespace std;
class Message
{
private:    
   string * _text;
public:
    Message(const string & message);
    char * getMessage(); 
};