#define USER_H
  
class User
{
   int _id;
   int mediaFile;
public:
    virtual void display();
    int getId();
    void setId(int id);
    User();
    ~User();
};
