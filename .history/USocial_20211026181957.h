#define USOCIAL_H
#include "User.h"


using namespace std;
class USocial{
    private:
        map<unsigned long,User *> users;
    public:
        User * registerUser(string ??, bool ??);
        void removeUser(User * usr);
        User * getUserById(unsigned long id);
}