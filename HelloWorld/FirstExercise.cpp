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

    // The Login method   / Functions:
    bool Login(const string& enteredUserName, const string& enteredPassword)
        const
    {
        return (enteredUserName == userName && enteredPassword == password);
    }
    
    //this is the Getter for ID
    int getID() const {
        return ID;
    }

};

int main()
{
    cout << "Welcome, This First c++ Exersice\n";
    return 0;


}
