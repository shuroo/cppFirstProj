
#include<iostream>
#include "Media.h"
#include <fstream>

using namespace std;
  
void Media::display() {

    cout << "Generic Media display() method was called!!" << endl; 
 };
 
int Media::getId(){ 
    return _id; 
};

  