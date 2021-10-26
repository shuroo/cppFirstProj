#define MESSAGE_H
#include <iostream>
#include <string>

using namespace std;
class Message
{
private:    
   char* text;
public:
    Message(string& message);
    void getMessage(); 
};
