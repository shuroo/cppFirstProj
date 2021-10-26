#define USER_H
  
class User
{
   int _id;

public:
    virtual void display();
    void setId(int id);
    User();
    ~User();
    unsigned long getId();
    string getName();
};
