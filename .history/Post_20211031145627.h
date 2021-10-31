#include <iostream>
#include <string>
#include "Media.h"
using namespace std;
class Post{
    
    private:

    string _post;
    Media  *_media;

    public:

    Post( string input, Media * media);
    Post( string & input);
    ~Post(){};

    void publish();
 
};