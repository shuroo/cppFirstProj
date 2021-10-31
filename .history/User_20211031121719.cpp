#include <iostream>
#include <list>
#include "User.h"

//User::User(string userNm){userName = userNm;};
    unsigned long User::getId() { return userId;}
    // string getName();
    // void addFriend(User* usr);


void User::addFriend(User * fr){
    friends.push_back((*fr).getId());
}
