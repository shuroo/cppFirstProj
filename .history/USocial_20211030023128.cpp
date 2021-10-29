#include "USocial.h"
#include "User.h"
#include <bits/stdc++.h>
using namespace std;


  USocial us; 
    
  User * USocial::registerUser(string userName){

    static map<unsigned long,User *> users = us.users;
    User * usr = new User(userName);
    unsigned long numericId = users.size();
    users.insert ( {numericId,usr} );
    std::cout << "Added user:" << users.size() << 'of id:\n' << numericId;

    //User* u3 = us.registerUser("Shachaf");
    // User* u4 = us.registerUser("Tsur", true);

    //  mymap.insert ( std::pair<char,int>('a',100) );
    // mymap.insert ( std::pair<char,int>('z',200) );



  }


  void  USocial::removeUser(User * usr){
    map<unsigned long,User *> usersMap = us.users;
    map<unsigned long,User *>::iterator itr = usersMap.begin();
    while (itr != myMap.end()) {
        if (ShouldDelete(*itr)) {
        itr = myMap.erase(itr);
        } else {
        ++itr;
        }
}
    User * usr = new User(userName);
    unsigned long numericId = users.size();
    users.insert ( {numericId,usr} );
    std::cout << "Added user:" << users.size() << 'of id:\n' << numericId;


  }
        User * getUserById(unsigned long id);

