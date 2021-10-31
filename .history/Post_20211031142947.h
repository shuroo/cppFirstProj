#include <iostream>
#include <string>
#include "Media.h"
using namespace std;
class Post{
    
    private:

    string _post;
    Media  _media;
    public:

    Post(const string& input, const Media & media)
    {
        _post = input;
        _media = media;
    };
    Post(const string& input)
    {
        _post = input;
    };
    ~Post(){};

    void printPost(){
        cout << _post << endl;
    }
 
};