#include <iostream>
#include <list>
#include "User.h"

//User::User(string userNm){userName = userNm;};
   
    // string getName();
    // void addFriend(User* usr);

unsigned long User::getId() { return _id;}

string User::getName() { return _name;}

void User::addFriend(User * fr){
    friends.push_back((*fr).getId());
}

void User::removeFriend(User * fr){
     list<unsigned long>::iterator frItr = friends.begin();
    while (frItr != friends.end()) {
        if ( (*frItr).second->getId() == (*fr).getId()) {  
            /// should we also destruct the User? delete usersMap[itr]) 
            
            std::cout << "Removing user of id:" <<(*fr).getId() <<" from friends' list" << endl ;
            return (*frItr).second;
                    } else {
                    ++frItr;
                    }

        }
        std::cout << "Failed to find user of id:" <<userId << endl ;
    
};

void User::post(string post){
    // TBD friends.push_back((*fr).getId());
}

void User::post(string post, Media * media){
    // TBD friends.push_back((*fr).getId());
}

void User::getPosts(){
    // TBD friends.push_back((*fr).getId());
}

