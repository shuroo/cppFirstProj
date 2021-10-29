#define USER_H
#include <iostream>
#include <string> 
#include "Media.h"
#include "Message.h"
#include "Post.h"
#include "USocial.h"
using namespace std;

class User
{
   int _id;
   USocial us;
   list<unsigned long> friends;
   list<Post*> posts;
   list<Message*> receivedMessages;
public:
    virtual void display();
    void setId(int id);
    User();
    User(string userId);
    ~User();
    unsigned long getId();
    string getName();
    void addFriend(User* usr);
    void removeFriend(User* usr);
    void post(string msg);
    void post(string msg,Media *media);
    void getPosts();
    void viewFriendsPosts(string msg);
    void receiveMessage(Message * msg);
    void sendMessage(User * usr, Message * msg);
    void viewReceivedMessages();
    
};
