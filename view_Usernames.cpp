void viewAccounts(int numUsernames, vector<Usernames> usernames)
{
  if (numUsernames > 0) {
    cout << "\nUsernames: " << endl;
    for (int i = 0; i < numUsernames; i++) 
    {
      cout << usernames[i].getUsername() << " " << usernames[i].getPassword() << " " << usernames[i].getEmail() << endl; 
    }
  }
  else {
    cout << "\nThere are no active usernames.\n";
  }
}