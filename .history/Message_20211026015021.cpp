// string constructor
#include <iostream>
#include <string>

class Message{
    private:
        std::string msg;
    public:
        Message ()       //constructor 1 with no arguments
        {
            this->msg="";
        };  
        Message(string  msg){
            this->msg = msg;
            cout << "Object is being created" << endl;
        };
    
    int main() {
    Message msg("Hello!");
    
    // set line length
    // Message.setLength(6.0); 
    cout << "Length of line : " << endl;
    
    return 0;
    };
};