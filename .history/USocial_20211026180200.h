#define USOCIAL_H
#include <iostream>
#include "User.h"
class USocial{
    private:
        map<unsigned long,User *> users;
    public:
        User * registerUser(string ??, bool ??);
        void removeUser(User * usr);
        
}