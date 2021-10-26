#define USER_H
#include <string>  
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
