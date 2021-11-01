#include "USocial.h"
#include "User.h"
#include <bits/stdc++.h>
using namespace std;

USocial::USocial(){};
USocial::~USocial(){};
 
  User * USocial::registerUser(string userName){

    unsigned long usrId = this->users.size();
    User * usr = new User(usrId,userName);
    users.insert ( {usrId,usr} );
    std::cout << "Added user:" << users.size() << " of id:\n " << usrId;
    return usr;
  };


  void  USocial::removeUser(User * usr){
    map<unsigned long,User *> usersMap = this->users;
    map<unsigned long,User *>::iterator itr = usersMap.begin();
    while (itr != usersMap.end()) {
      // compare map's value (user) of its name to the given.
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
    
    User * usr = NULL;
    static map<unsigned long,User *> usersMap = this->users;
    map<unsigned long,User *>::iterator itr = usersMap.begin();
    while (itr != usersMap.end()) {
        if ((*itr).second->getId() == userId) {  
            /// should we also destruct the User? delete usersMap[itr]) 
            
            std::cout << "Found user of id:" <<userId << endl ;
            usr = (*itr).second;
            return usr;
                    } else {
                    ++itr;
                    }

        }
        std::cout << "Failed to find user of id:" <<userId << endl ;
        return usr;
  };

