#define MESSAGE_H
#include <iostream>
#include <string>

using namespace std;
class Message
{
private:    
   string _text;
public:
    Message(const string & message);
    string getMessage(); 
};

#include <iostream>
#include <string>
using namespace std;

Message::Message(const string & message){
            this->_text = message;
        };
        
string Message::getMessage(){
    return this->_text;
};
    int main() {
    
    Message msg(string ("abc"));

    // set line length
    // Message.setLength(6.0); 
    cout << "Length of line : " << endl;
    
    return 0;
    };

 