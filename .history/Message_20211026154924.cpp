
#include "Message.h"
#include <iostream>
#include <string>
using namespace std;

Message::Message(const string & message){
            this->_text = message;
            cout << "Object is being created" << endl;
        };
        
string Message::getMessage(){
    return this->_text;
}
    int main() {
    
    Message msg = new Message(new string ("abc"));

    // set line length
    // Message.setLength(6.0); 
    cout << "Length of line : " << endl;
    
    return 0;
    };

 