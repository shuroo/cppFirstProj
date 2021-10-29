#include "USocial.h"
#include "User.h"
#include <bits/stdc++.h>
using namespace std;

 
  User * USocial::registerUser(string userId){

    USocial us;
    map<unsigned long,User *> users = us.getUsers();
    User * usr = new User(userId);
    unsigned long numericId = users.size();
    users.insert ( {numericId,usr} );
    //User* u3 = us.registerUser("Shachaf");
    // User* u4 = us.registerUser("Tsur", true);

    //  mymap.insert ( std::pair<char,int>('a',100) );
    // mymap.insert ( std::pair<char,int>('z',200) );



  }
