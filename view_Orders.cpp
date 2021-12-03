void vieworders(int numOrders, vector<Orders> orders)
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
}