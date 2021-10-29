
#define USOCIAL_H
#include <algorithm>
#include <iostream>
#include <list>
#include <map>
using namespace std;
class USocial{
    private:
        map<unsigned long,User *> users;
    public:
        User * registerUser(string userId);
        void removeUser(User * usr);
        User * getUserById(unsigned long id);
}; 