#include<iostream> 
#include <iomanip>
#include <string>
#include <vector>
#include <cstring>
using namespace std;


class User
{
 private:
   string email, username, password;
 public:
   User();
   User(string newEmail, string newUsername, string newPassword);
   void setEmail(string newEmail);
   void setUsername(string newUsername);
   void setPassword(string newPassword);
   string getEmail();
   string getUsername();
   string getPassword();
   
};

User::User() {
  email = "";
  username = "";
  password = "";
  
}

User::User(string newEmail, string newUsername, string newPassword){
  email = newEmail;
  username = newUsername;
  password = newPassword;
}

void User::setEmail(string newEmail){
  email = newEmail;
}

void User::setUsername(string newUsername){
  username = newUsername;
}

void User::setPassword(string newPassword){
  password = newPassword;
}

string User::getEmail(){
  return email;
}

string User::getUsername(){
  return username;
}

string User::getPassword(){
  return password;
}







void viewMenu(){
    cout << "\n----Menu----" << endl
    << "[1] $5 Cheeseburger" << endl
    << "[2] $2 Hot Dog" << endl
    << "[3] $4 Pizza Slice" << endl
    << "[4] $2 Popcorn" << endl
    << "[5] $2 French Fries" << endl
    << "[6] $1 Bottle of Water" << endl
    << "[7] $2 Coca-Cola" << endl;
}

/*int placeOrder(){
    std::string Order[100];
    int itemNumber = 0;
    int cost = 0;
    int i = 0;
    while(itemNumber != 8){
    cout << "Enter an item number to add to your order." << endl
    << "[1] $5 Cheeseburger" << endl
    << "[2] $2 Hot Dog" << endl
    << "[3] $4 Pizza Slice" << endl
    << "[4] $2 Popcorn" << endl
    << "[5] $2 French Fries" << endl
    << "[6] $1 Bottle of Water" << endl
    << "[7] $2 Coca-Cola" << endl
    << "Press \"8\" to complete your order" << endl;
    cin >> itemNumber;
    while(itemNumber < 1 || itemNumber > 8){
      cout << "Please enter a valid menu item number. ";
      cin >> itemNumber;
    }
    Order[i++];
    switch(itemNumber) {
        case 1: 
            cout << "Cheeseburger added to order." << endl;      
            cost = cost + 5;
            Order[i] = "Cheeseburger";
            break;
        case 2:
            cout << "Hot Dog added to order." << endl;
            cost = cost + 2;
            Order[i] = "Hot Dog";
            break;
        case 3:
            cout << "Pizza slice added to order." << endl;
            cost = cost + 4;
            Order[i] = "Pizza";
            break;
        case 4:
            cout << "Popcorn added to order." << endl;
            cost = cost + 2;
            Order[i] = "Popcorn";
            break;
        case 5:
            cout << "French Fries added to order." << endl;
            cost = cost + 2;
            Order[i] = "French Fries";
            break;
        case 6:        
            cout << "Bottle of Water added to order." << endl;
            cost = cost + 1;
            Order[i] = "Bottle of Water";
            break;
        case 7:      
            cout << "Coca-Cola added to order." << endl;
            cost = cost + 2;
            Order[i] = "Coca-Cola";
            break;
        case 8:
            cout << "The total cost of your order is $" << cost << endl;
            Order[i] = "";
            return 0;  
    }
    }   
    
    return 0;
}
*/
//void viewOrders(){
//    cout << Order;
//}

/*void viewOrders(int numOrders, vector<Orders> orders)
{
  if (numOrders > 0) {
    cout << "\nOrders: " << endl;
    for (int i = 0; i < numOrders; i++) 
    {
      cout << orders[i].getOrder() << " " << orders[i].getCost() << endl; 
    }
  }
  else {
    cout << "\nNo orders have been placed.\n";
  }
}*/

void viewAccounts(int numUsers, vector<User> users)
{
  if (numUsers > 0) {
    cout << "\nAccounts: " << endl;
    for (int i = 0; i < numUsers; i++) 
    {
      cout << users[i].getUsername() << " " << users[i].getPassword() << " " << users[i].getEmail() << endl; 
    }
  } else {
    cout << "\nThere are no active accounts.\n";
  }
}

int main() {
    int options = 0;
    int numUsers = 0;
    string AdminUsername="Admin123",AdminPassword="Admin123",adminUsername, adminPassword;
    string username, email, password;
    string Username, Password;
    vector<User> users;
    User user(email, username, password);
    std::string Order[100];
    int itemNumber = 0;
    int cost = 0;
    int x = 0;
    

    while(options != 6){
    cout << "\nEnter \"1\" to create an account." << endl
    << "Enter \"2\" to login." << endl
    << "Enter \"3\" to login as admin." << endl
    << "Enter \"4\" to view the menu." << endl
    << "Enter \"5\" to place an order." << endl
    << "Enter \"6\" to exit." << endl;
    cin >> options;
    while(options < 1 || options > 6){
      cout << "Please enter a valid number. ";
      cin >> options;
    }
    switch(options) {
        case 1: 
                  
          cout << "\n--Account Creation--" << endl;
          cout << "Enter a username: " << endl;
          cin >> username;
          cout << "Enter an email address: " << endl;
          cin >> email;
          cout << "Create a password: " << endl;
          cin >> password;         
          users.push_back(user);          
          numUsers++;
          cout << "Account has been created.";
          break;


        case 2:
            
              if (users.size() > 0) {
                  bool usernameFlag = false;
                  bool passwordFlag = false;
                  cout << "Username: ";
                  cin >> Username;
                  cout << "Password: ";
                  cin >> Password;
                  for(int i = 0; i < users.size(); i++){
                    if(users[i].getUsername() == Username && users[i].getPassword() == Password){
                      cout << "Login successful.\n";
                      usernameFlag = true;
                      passwordFlag = true;
                      
                    }
                  }
                  if (usernameFlag == false || passwordFlag == false){
                    cout << "Username or password is incorrect.\n" << endl;
                  }
                  cout << endl;
                  
              } else {
                  cout << "\nThere are no active accounts.\n";
              } 
                      break;

        case 3:
            

                cout << "Enter admin username: ";
                cin >> adminUsername;
                cout << "\nEnter admin password: ";
                cin >> adminPassword;

                if(adminUsername == AdminUsername && adminPassword == AdminPassword)
                {
                    cout<<"\nLogin Successful!";
                    int options = 0;
                    while(options != 3){
                        cout << "\nEnter \"1\" to view all accounts." << endl
                        << "Enter \"2\" to view all orders." << endl
                        << "Enter \"3\" to exit." << endl;
                        cin >> options;
                        while(options < 1 || options > 3){
                            cout << "Please enter a valid number. ";
                            cin >> options;
                        }
                        switch(options) {
                            case 1: 
                                cout << "Account view" << endl;
                                viewAccounts(numUsers, users);
                                break;
                            case 2:
                                cout << "Order view" << endl;
                                cout << Order[1];
                            case 3: 
                                break;
                                
                        }      
                    }
                } else {
                    cout << "Incorrect. " << endl;
                }
                        break;
        case 4:
            viewMenu();
            break;

        case 5:
            //placeOrder();
            
            while(itemNumber != 8){
            cout << "Enter an item number to add to your order." << endl
            << "[1] $5 Cheeseburger" << endl
            << "[2] $2 Hot Dog" << endl
            << "[3] $4 Pizza Slice" << endl
            << "[4] $2 Popcorn" << endl
            << "[5] $2 French Fries" << endl
            << "[6] $1 Bottle of Water" << endl
            << "[7] $2 Coca-Cola" << endl
            << "Press \"8\" to complete your order" << endl;
            cin >> itemNumber;
            while(itemNumber < 1 || itemNumber > 8){
                cout << "Please enter a valid menu item number. ";
                cin >> itemNumber;
            }
            Order[x++];
            switch(itemNumber) {
                case 1: 
                    cout << "Cheeseburger added to order." << endl;      
                    cost = cost + 5;
                    Order[x] = "Cheeseburger";
                    break;
                case 2:
                    cout << "Hot Dog added to order." << endl;
                    cost = cost + 2;
                    Order[x] = "Hot Dog";
                    break;
                case 3:
                    cout << "Pizza slice added to order." << endl;
                    cost = cost + 4;
                    Order[x] = "Pizza";
                    break;
                case 4:
                    cout << "Popcorn added to order." << endl;
                    cost = cost + 2;
                    Order[x] = "Popcorn";
                    break;
                case 5:
                    cout << "French Fries added to order." << endl;
                    cost = cost + 2;
                    Order[x] = "French Fries";
                    break;
                case 6:        
                    cout << "Bottle of Water added to order." << endl;
                    cost = cost + 1;
                    Order[x] = "Bottle of Water";
                    break;
                case 7:      
                    cout << "Coca-Cola added to order." << endl;
                    cost = cost + 2;
                    Order[x] = "Coca-Cola";
                    break;
                case 8:
                    cout << "The total cost of your order is $" << cost << endl;
                    Order[x] = "";
                    return 0;  
            }
            break;
        case 6:
            return 0;
        }
    }
}
}
