
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Registration{
    public:
        int countryChoice;
        int charges;
        string country;
        int flightChoice;

        void booking(){
            vector<string>country={"India","Dubai","Sri Lanka","USA"};
            for(int i=0;i<country.size();i++){
                cout<<i+1<<".Flight to "<<country[i]<<endl;
            }
            cout<<"Enter the Country you want to go:"<<endl;
            cin>>countryChoice;
            
            if(countryChoice==1){
                    this->country="India";
                    cout<<"Welcome to Indian Airways"<<endl;
                    cout<<"1.IND-998"<<endl;
                    cout<<"08.08.24 08.00AM 10hrs Rs.40,000"<<endl;
                    cout<<"2.IND-968"<<endl;
                    cout<<"08.08.24 10.00AM 9hrs Rs.45,000"<<endl;
                    cout<<"3.IND-998"<<endl;
                    cout<<"08.08.24 11.30AM 11hrs Rs.30,000"<<endl;
                    cout<<"Enter your choice:"<<endl;
                    cin>>flightChoice;
                    if(flightChoice==1){
                        charges=40000;
                    }
                    else if(flightChoice==2){
                        charges=45000;
                    }
                    else {
                        charges=35000;
                    }
                    cout<<"Your ticket bookded successfully."<<endl;
                }
            else if(countryChoice==2){
                    this->country="Dubai";
                    cout<<"Welcome to Dubai Airways"<<endl;
                    cout<<"1.DUB-998"<<endl;
                    cout<<"08.08.24 08.00AM 10hrs Rs.50,000"<<endl;
                    cout<<"2.DUB-968"<<endl;
                    cout<<"08.08.24 10.00AM 9hrs Rs.55,000"<<endl;
                    cout<<"3.DUB-998"<<endl;
                    cout<<"08.08.24 11.30AM 11hrs Rs.60,000"<<endl;
                    cout<<"Enter your choice:"<<endl;
                    cin>>flightChoice;
                    if(flightChoice==1){
                        charges=50000;
                    }
                    else if(flightChoice==2){
                        charges=55000;
                    }
                    else {
                        charges=60000;
                    }
                    cout<<"Your ticket bookded successfully."<<endl;
                    
                }
            else if(countryChoice==3){
                    this->country="Sri Lanka";
                    cout<<"Welcome to SriLankan Airways"<<endl;
                    cout<<"1.SRL-998"<<endl;
                    cout<<"08.08.24 08.00AM 10hrs Rs.80,000"<<endl;
                    cout<<"2.SRL-968"<<endl;
                    cout<<"08.08.24 10.00AM 9hrs Rs.75,000"<<endl;
                    cout<<"3.SRL-998"<<endl;
                    cout<<"08.08.24 11.30AM 11hrs Rs.90,000"<<endl;
                    cout<<"Enter your choice:"<<endl;
                    cin>>flightChoice;
                    if(flightChoice==1){
                        charges=80000;
                    }
                    else if(flightChoice==2){
                        charges=75000;
                    }
                    else {
                        charges=90000;
                    }
                    cout<<"Your ticket bookded successfully."<<endl;
                    
                }
            else if(countryChoice==4){
                    this->country="USA";
                    cout<<"Welcome to USA Airways"<<endl;
                    cout<<"1.USA-998"<<endl;
                    cout<<"08.08.24 08.00AM 10hrs $.30,000"<<endl;
                    cout<<"2.USA-968"<<endl;
                    cout<<"08.08.24 10.00AM 9hrs $.35,000"<<endl;
                    cout<<"3.USA-998"<<endl;
                    cout<<"08.08.24 11.30AM 11hrs $.40,000"<<endl;
                    cout<<"Enter your choice:"<<endl;
                    cin>>flightChoice;
                    if(flightChoice==1){
                        charges=30000;
                    }
                    else if(flightChoice==2){
                        charges=35000;
                    }
                    else {
                        charges=40000;
                    }
                    cout<<"Your ticket bookded successfully."<<endl;
                    
                }
            else{
                    cout<<"Invalid input"<<endl;
                
            }
        }
};