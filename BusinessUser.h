#ifndef BUSINESS_USER_H
#define BUSINESS_USER_H
#include "User.h"

class BusinessUser : User{

    public:

        void sendMessage(User * usr, Message* msg);
};

#endif