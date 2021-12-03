#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void login(){

    string Username, Password;
	
    if (numUsernames > 0) {
        cout << "\nUsername:";
        cin >> Username;

        cout << "Password:";
        cin >> Password;
    
        for (int i = 0; i < numUsernames; i++) {
            if (usernames[i].getUsername() == username && passwords[i].getPassword() == password)
            {
                cout << "login successful.\n";
            }
            else {
                cout << "Username or password is incorrect.\n";
            }
        }
    }
    else {
    cout << "\nThere are no active accounts.\n";
    }
}