
#include <iostream>
#include <string>
#include "Message.h"
using namespace std;


string Message::getMessage(){
    return this->_text;
};

Message::Message(const string & message){
            this->_text = message;
        };
        
    int main() {
    
    Message msg(string ("abc"));

    // set line length
    // Message.setLength(6.0); 
    cout << "Length of line : " << endl;
    
    return 0;
    };

 