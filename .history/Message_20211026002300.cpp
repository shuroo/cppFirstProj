// string constructor
#include <iostream>
#include <string>
using namespace std;

class Message{

Message::Message(string msg) {
   cout << "Object is being created" << endl;
}
 
 int main() {
   Message line;
 
   // set line length
   Message.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}

}