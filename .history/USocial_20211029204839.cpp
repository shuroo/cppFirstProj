#include "USocial.h"
#include "User.h"
#include <bits/stdc++.h>
using namespace std;

 
  User * USocial::registerUser(string userName){

    USocial us;
    map<unsigned long,User *> users = us.getUsers();
    User * usr = new User(userName);
    unsigned long numericId = users.size();
    users.insert ( {numericId,usr} );
    std::cout << "Added user:" << users.size() << 'of id:\n' << numericId;

    //User* u3 = us.registerUser("Shachaf");
    // User* u4 = us.registerUser("Tsur", true);

    //  mymap.insert ( std::pair<char,int>('a',100) );
    // mymap.insert ( std::pair<char,int>('z',200) );



  }
