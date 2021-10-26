// string constructor
#include <iostream>
#include <string>
using namespace std;

class Message{
    private:
        string msg;
    public:
       
    
    int main() {
    Message msg =  Message("");
    
    // set line length
    // Message.setLength(6.0); 
    cout << "Length of line : " << endl;
    
    return 0;
    };


 Message::Message ()       //constructor 1 with no arguments
        {
            this->msg="";
        };  
        Message::Message( string  msg){
            this->msg = msg;
            cout << "Object is being created" << endl;
        };

        };