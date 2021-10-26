#define MESSAGE_H
#include <iostream>
#include <string>

using namespace std;
class Message
{
private:    
   string* text;
public:
    Message(string& message);
    void getMessage(); 
};
