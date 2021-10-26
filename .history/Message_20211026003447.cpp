// string constructor
#include <iostream>
#include <string>
using namespace std;

class Message{

    public: 
        Message(string str);
};


Message::Message(string msg) {
        cout << "Object is being created" << endl;
        }

    
    int main() {
    Message msg = new Message("Hello!");
    
    // set line length
    // Message.setLength(6.0); 
    cout << "Length of line : " << endl;
    
    return 0;
    };

}