#define USER_H
#include <iostream>
#include <string> 

using namespace std;

class User
{
   int _id;

public:
    virtual void display();
    void setId(int id);
    User();
    ~User();
    unsigned long getId();
    string getName();
    void addFriend(User* usr);

};
