
#ifndef USOCIAL_H
#define USOCIAL_H

#include <algorithm>
#include <iostream>
#include <list>
#include <map>
using namespace std;
class User;
class USocial{
    private:
        map<unsigned long,User *> users;
    public:
        USocial();
        ~USocial();
        User * registerUser(string userId);// todo: need to add boolean param to. purpose?
        User * registerUser(string userId, bool succeded);
        void removeUser(User * usr);
        User * getUserById(unsigned long id);

       // map<unsigned long,User *> getUsers(){ return users; };
}; 

#endif