#include "USocial.h"
#include "User.h"


 
  User * USocial::registerUser(string userId){

    USocial us;
    map<unsigned long,User *> users = us.getUsers();
    users.insert ( std::pair<char,int>('a',100) );
    //User* u3 = us.registerUser("Shachaf");
    // User* u4 = us.registerUser("Tsur", true);

    //  mymap.insert ( std::pair<char,int>('a',100) );
    // mymap.insert ( std::pair<char,int>('z',200) );



  }
