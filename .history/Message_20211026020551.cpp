// string constructor
#include <iostream>
#include <string>
using namespace std;

class Message{
    private:
        string * msg;
    public:
        Message ()       //constructor 1 with no arguments
        {
            
        };  
        Message(string msg){
            this->msg = msg;
            cout << "Object is being created" << endl;
        };

};  
    
    int main() {
    Message msg =  Message("");

    // set line length
    // Message.setLength(6.0); 
    cout << "Length of line : " << endl;
    
    return 0;
    };

 