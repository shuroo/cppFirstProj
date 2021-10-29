
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
        User * registerUser(string userId);// todo: need to add boolean param to. purpose?
      User * registerUser(string userId, bool succeded);
            User* u3 = us.registerUser("Shachaf");
    User* u4 = us.registerUser("Tsur", true);
        void removeUser(User * usr);
        User * getUserById(unsigned long id);
}; 