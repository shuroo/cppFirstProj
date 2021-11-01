#include "BusinessUser.h"

void BusinessUser::sendMessage(User * usr, Message* msg){
    // todo: make sure the user is in its friends list, send error when its not!
    (*usr).receiveMessage(msg);
};