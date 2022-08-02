// -------------------
// Description:
// Classes for user and account management
//
// TODO:
// - [ ] Admin module
// - [ ] borrow and return Status
// - [ ] 
// -------------------

#include <string>
#include <iostream>
#include <random>
#include <cstdlib>

class User {
private:
    std::string first_name{};
    std::string last_name{};
    std::string email{};
    std::string password{};
    int user_id{};
public:
    void set_UserID();
    std::string get_name(){ return first_name; }
    int get_userID(){ return user_id; }
    void set_name(std::string fname, std::string lname){ first_name = fname; last_name = lname; }
    void set_password(std::string pass){ password = pass }

};

void User::set_UserID(){
    std::mt19937 mt{ std::random_device{}() };
    user_id = mt();
}

int main(){
    User usr1;
    usr1.set_name("manga");
    usr1.set_UserID();
    std::cout << usr1.get_userID() << '\n';
    return 0;
}
