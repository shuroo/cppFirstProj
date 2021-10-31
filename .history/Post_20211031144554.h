#include <iostream>
#include <string>
#include "Media.h"
using namespace std;
class Post{
    
    private:

    string _post;
    Media  *_media;
    public:

    Post( string& input, Media * media)
    {
        _post = input;
         this->_media = media;
    };
    Post(const string& input)
    {
        _post = input;
    };
    ~Post(){};

    void publish(){
        cout  << "Publishing post:" <<  endl;
        cout  << _post <<  endl;
    }
 
};