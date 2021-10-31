#include <iostream>
#include <list>
#include "User.h"

//User::User(string userNm){userName = userNm;};
   
    // string getName();
    // void addFriend(User* usr);

unsigned long User::getId() { return _id;}

unsigned long User::getName() { return _name;}


void User::addFriend(User * fr){
    friends.push_back((*fr).getId());
}
