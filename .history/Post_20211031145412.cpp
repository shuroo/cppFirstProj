#include "Post.h"

 Post::Post( string input, Media * media)
    {
        this->_post = input;
         this->_media = media;
    };
    Post::Post(const string& input)
    {
        _post = input;
    };
 
    void Post::publish(){
        cout  << "Publishing post:" <<  endl;
        cout  << _post <<  endl;
    };