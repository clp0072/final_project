#include<iostream>
#include<string>
#include<cstring>

void adminLogin(){
	
	char AdminUsername[30]="Admin123",AdminPassword[30]="Admin123",adminUsername[30], adminPassword[30];

	cout << "Enter admin username: ";
	cin >> adminUsername;
	cout << "\nEnter admin password: ";
	cin >> adminPassword;

	if(adminUsername == AdminUsername && adminPassword == AdminPassword)
	{
	    cout<<"\nLogin Successful!";
        int options = 0;
        while(options != 2){
            cout << "\nEnter \"1\" to create an account." << endl
            << "Enter \"2\" to login." << endl;
            cin >> options;
            while(options < 1 || options > 2){
                cout << "Please enter a valid number. ";
                cin >> options;
            }
            switch(options) {
                case 1: 
                    viewAccounts();= 
                    break;
                case 2:
                    viewOrders();=
                    return 0;
            }      
        }
    }
}