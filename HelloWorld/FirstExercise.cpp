#include <iostream>
#include <string>
using namespace std;  //this makes sure that you don't have to write std all the time


class UserAccount  //class Declaration
{
private:
    //variables
    int ID;
    string userName;
    string password;

public:
    //this is the contructor for the userAccount
    UserAccount(int id, const string& username, const string& pwd)
        : ID(id), userName(username), password(pwd) {}

};

int main()
{
    std::cout << "First c++ Exersice\n";
    return 0;


}
