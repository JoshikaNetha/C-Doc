#include <iostream>
#include <memory>
using namespace std;

// Dependency Inversion Principle
/* High Level Modules should not depend on low level modules , both should depend on abstraction
*/
class Message{
    public:
    virtual void message() = 0;
};
class  EMail : public Message{
    public:
    void message() override{
     cout <<"Email Message\n";
    }
};
class  SMS : public Message{
    public:
    void message() override{
     cout <<"SMS Message\n";
    }
};
class Notification{
    shared_ptr<Message> msg;
    public:
    Notification(shared_ptr<Message> message): msg(message){
           msg->message();
    }
};

int main(){
    shared_ptr<EMail> email = make_shared<EMail>();
    shared_ptr<SMS>   sms  = make_shared<SMS>();

    Notification notify(email);
    Notification notify1(sms);

    return 0;
}