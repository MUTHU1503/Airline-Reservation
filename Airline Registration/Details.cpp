#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Details{
    public:
        string name;
        string gender;
        int age;
        int cId;
        double phoneNo;

        void setDetails(){
            cout<<"Enter the name:"<<endl;
            cin>>name;
            cout<<"Enter the gender:"<<endl;
            cin>>gender;
            cout<<"Enter the age:"<<endl;
            cin>>age;
            cout<<"Enter the ID:"<<endl;
            cin>>cId;
            cout<<"Enter your PhoneNo:"<<endl;
            cin>>phoneNo;
            cout<<"Your details added succesfully."<<endl;
        }
};