#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string q1;
    string username;
    string user;
    string password;
    string pass;
    string bageltype[]={"natural bagel","chese bagel","egg bagel"};
    double bagelcost[]={3.00,4.00,5.00};
cout<<"\nHello welcom to the APP"<<endl;
cout<<"\nPlease create a new user Account"<<endl;
cout<<"\nChoose a user name"<<endl;
getline(cin,username);
cout<<"\nCreate a password"<<endl;
getline(cin,password);
cout<<"\nPlease enter your information"<<endl;
cout<<"\nEnter Username :"<<endl;
getline(cin,user);
cout<<"\nPassword :"<<endl;
getline(cin,pass);
while(username!=user || password!=pass)
{
cout<<"\nWrong user name or password Please try again"<<endl;
cout<<"\nEnter Username :"<<endl;
getline(cin,user);
cout<<"\nPassword :"<<endl;
getline(cin,pass);
}
cout<<"\nWelcom to the odering app"<<endl;
double balance=5.00;
cout<<"\nCurrently in your account has balance"<<" "<<balance<<" "<<"Dollors"<<endl;
cout<<"\nWould you like to add balance in yor account"<<endl;
cout<<"\nIf yes then please type yes"<<endl;
string addmoney;
getline(cin,addmoney);
if(addmoney=="yes" || addmoney=="YES")
{
    cout<<"\nEnter how much money you want to add"<<endl;
    double add;
    cin>>add;
    balance=balance +add;
    cout<<"\nYour new balance is"<<" "<<balance<<" "<<"Dollors"<<endl;
}
else
{
    cout<<"\nAlright"<<endl;
}
cout<<"\nWould you like a bagel today ?"<<endl;
cin>>q1;
if(q1=="yes" || q1=="YES")
{
    cout<<"\nPlease select what type of bagel you want"<<endl;
    cout<<"1"<<" "<<bageltype[0]<<"--"<<bagelcost[0]<<"Dolars"<<endl;
    cout<<"2"<<" "<<bageltype[1]<<"--"<<bagelcost[1]<<"Dolars"<<endl;
    cout<<"3"<<" "<<bageltype[2]<<"--"<<bagelcost[2]<<"Dolars"<<endl;
}
else if(q1=="no" || q1=="NO")
{
cout<<"\nAlright have good day"<<endl;
}
int p;
cout<<"Your choice :"<<endl;
cin>>p;
while(p>3 || p<1)
{
    cout<<"\nYou have entered a wrong input please try again"<<endl;
    cin>>p;
}
switch(p)
{
    case 1:
    {
        cout<<"\nYou have order"<<" "<<bageltype[0]<<endl;
        cout<<"\nThe cost of your order is"<<" "<<bagelcost[0]<<" "<<"Dolars"<<endl;
        cout<<"\nThe amount left in your account "<<" "<<balance-bagelcost[0]<<endl;
        break;
    }
    case 2:
    {
         cout<<"\nYou have order"<<" "<<bageltype[1]<<endl;
        cout<<"\nThe cost of your order is"<<" "<<bagelcost[1]<<"Dolars"<<endl;
        cout<<"\nThe amount left in your account "<<" "<<balance-bagelcost[1]<<endl;
         break;
    }
    case 3:
    {
         cout<<"\nYou have order"<<" "<<bageltype[2]<<endl;
        cout<<"\nThe cost of your order is"<<" "<<bagelcost[2]<<"Dolars"<<endl;
        cout<<"\nThe amount left in your account "<<" "<<balance-bagelcost[2]<<endl;
         break;
    }
    default :
    cout<<"\nYou have entered a wrong choice"<<endl;
}
return 0;
}