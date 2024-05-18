#include<iostream>
#include<bits/stdc++.h>



using namespace std;
class Ticket{
    
    public:

    void printDetails(vector<Details>&data1,vector<Registration>&data2){
        int arrow=0;
        for(int i=0;i<data1.size();i++){
            Details it=data1[i];
            cout << "Name: " << it.name << endl;
            cout << "Gender: " << it.gender << endl;
            cout << "Age: " << it.age << endl;
            cout << "ID: " << it.cId << endl;
            cout << "Phone Number: " << it.phoneNo << endl;

            for(int j=i;j<data2.size();j++){
                Registration it=data2[i];
                cout<<"Flight charges:"<<it.charges<<endl;
                cout<<endl;
                break;
            }
        }
        
        

    }

};