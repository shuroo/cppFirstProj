
#include<iostream>
#include "Media.h"
#include <fstream>

using namespace std;
  
void Media::display() {

    
    cout << "Generic Media display() method was called!!" << endl; 
 
 };

Media::Media(ofstream& mediaFile) { };   
int Media::getId(){ 
    return _id; 
};

  