#ifndef USER_H
#define USER_H
#include <iostream>
#include <list>
#include <string> 
#include "Post.h"
#include "Message.h"
#include "USocial.h"

using namespace std;

class User
{
   unsigned long _id;
   string _name;
   USocial us;
   static list<unsigned long> friends;
   static list<Post*> posts;
   list<Message*> receivedMessages;
public:
    User();
    User(unsigned long userId,string userName);
    ~User();
    unsigned long getId();
    string getName();
    void addFriend(User* usr);
    void removeFriend(User* usr);
    void post(string msg);
    void post(string msg,Media *media);
    void getPosts();
    void viewFriendsPosts();
    void receiveMessage(Message * msg);
    void sendMessage(User * usr, Message * msg);
    void viewReceivedMessages();
    
};

#endif