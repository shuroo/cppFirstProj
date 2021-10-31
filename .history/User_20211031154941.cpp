
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
   
};

void User::post(string post){
    Post * postPtr = new Post(post);
    posts.push_back(postPtr);
    std::cout << "Added post:" <<post <<" To users posts" << endl ;

}

void User::post(string post, Media * media){
    Post * postPtr = new Post(post,media);
    posts.push_back(postPtr);
    std::cout << "Added post:" <<post <<" To users posts" << endl ;
}

void User::getPosts(){
    
    list<Post*>::iterator iterator = posts.begin();
    while (iterator != posts.end()) {
        // double pointer: pointer to a list of pointers. now, call post.publish().
        (**iterator).publish();
        iterator++;
    }
}

void User::viewFriendsPosts(){
    
    list<Post*>::iterator iterator = posts.begin();
    while (iterator != posts.end()) {
        // double pointer: pointer to a list of pointers. now, call post.publish().
        (**iterator).publish();
        iterator++;
    }
}

void User::receiveMessage(Message* msg){

}

void User::sendMessage(User * usr, Message* msg){
    
}

void User::viewReceivedMessages(){
   
}

