
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
        if ((*frItr) == (*fr).getId()) {  
            /// should we also destruct the User? delete usersMap[itr]) 
            
            std::cout << "Removing user of id:" <<(*fr).getId() <<" from friends' list" << endl ;
            friends.erase(frItr++); 
            return ;
                    } else {
                    ++frItr;
                    }

        }
        std::cout << "Failed to remove user of id:" <<(*fr).getId() <<" From users friends list." << endl ;
    
};

void User::post(string post){
    Post post = new Post(post);
    posts.push_back(post);
}

void User::post(string post, Media * media){
    // TBD friends.push_back((*fr).getId());
}

void User::getPosts(){
    // TBD friends.push_back((*fr).getId());
}

