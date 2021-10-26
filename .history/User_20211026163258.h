#define USER_H
  
class User
{
   int _id;

public:
    virtual void display();
    int getId();
    void setId(int id);
    User();
    ~User();
    long getId();
    string getName();
};
