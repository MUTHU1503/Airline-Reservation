#include<iostream>
#include<bits/stdc++.h>


#include"CustomersDetails.cpp"

#include"BookingDetails.cpp"
#include "TicketDetails.cpp"

using namespace std;

void showMenu(){
    cout<<"1.Add customer details."<<endl;
    cout<<"2.Flight booking."<<endl;
    cout<<"3.Ticket details."<<endl;
    cout<<"4.Exit."<<endl;
}
int main(){
    
    int choice;
    Customers c;
    BookingDetails b;
    vector<Details>cutomerDetails;
    vector<Registration>bookingDetails;
    do{
        showMenu();
        cin>>choice;
        switch(choice){
            case 1:{
                Details d;
                
                d.setDetails();
                c.addCustomer(d);
                break;
            }
            case 2:{
                Registration r;
                r.booking();
                b.addDetails(r);
                break;
            }
            case 3:{
                Ticket t;
                cutomerDetails=c.getDetails();
                bookingDetails=b.getInfo();
                t.printDetails(cutomerDetails,bookingDetails);
                break;
            }
            default:{
                cout<<"Invalid Input"<<endl;
                break;
            }
        }
    }
    while(choice!=4);
}