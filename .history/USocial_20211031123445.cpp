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

  };


  void  USocial::removeUser(User * usr){
    map<unsigned long,User *> usersMap = us.users;
    map<unsigned long,User *>::iterator itr = usersMap.begin();
    while (itr != usersMap.end()) {
        if ((*itr).second->getName() == usr->getName()) {  
            /// should we also destruct the User? delete usersMap[itr]) 
            itr = usersMap.erase(itr);
            std::cout << "Removed user:" <<usr->getName() << endl ;
                    } else {
                    ++itr;
                    }

  }
  };

  User * USocial::getUserById(unsigned long userId){

    static map<unsigned long,User *> users = us.users;
    User * usr = new User(userName);
    unsigned long numericId = users.size();
    users.insert ( {numericId,usr} );
    std::cout << "Added user:" << users.size() << 'of id:\n' << numericId;

  };

      //todo:   User * getUserById(unsigned long id);

