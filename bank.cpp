// This program is a simple bank management system that allows users to input their details,
// deposit or withdraw funds, and display their updated account information.
// It uses a C++ class called 'bank' that contains various methods to handle the input,
// processing, and output of user data.

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>

class bank
{
// private member variables
long int bankid,userid,flag,amt;
long int amount;
char fullname[10],lastname[10];

public:
// public member functions

// Method to input user details
void input()
{
cout<<"Kindly enter the following details\n";
cout<<"\nFirst Name : ";
cin>>fullname;
cout<<"\nlast Name : ";
cin>>lastname;
cout<<"\nBank id :";
cin>>bankid;
cout<<"\nUser id :";
cin>>userid;
cout<<"\nAmount :";
cin>>amount;
}

// Method to deposit or withdraw funds based on user input
void withanddepo()
{
cout<<"\nKindly enter (1) for deposit and (2) for withdraw or (3) for Exit :\n";
cin>>flag;

c
Copy code
if(flag==1) // If user wants to deposit funds
{
  cout<<"\nkindly enter the amount to deposit :";
  cin>>amt;
  amount = amt+amount; // Add deposited amount to current balance
}
else if(flag==2) // If user wants to withdraw funds
{
  cout<<"\nKindly enter the amount to withdraw :";
  cin>>amt;
  amount =amount-amt; // Subtract withdrawn amount from current balance
}
else if(flag==3) // If user wants to exit the program
{
  cout<<"Successfully exited the program\n\n";
}
}

// Method to display user account information
void output()
{
cout<<"\n\nFirst Name :"<<fullname;
cout<<"\n\nlast Name :"<<lastname;
cout<<"\n\nBank id :"<<bankid;
cout<<"\n\nUser id :"<<userid;
cout<<"\n\nAmount :"<<amount;
}
};

void main()
{
bank function; // Create a bank object

clrscr(); // Clear the screen
function.input(); // Call input method to get user details
function.withanddepo(); // Call withanddepo method to deposit/withdraw funds
cout<<"Here are the following details :\n";
function.output(); // Call output method to display updated user account information

getch(); // Wait for user input to close the program
}