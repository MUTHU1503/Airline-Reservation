#include<iostream>
#include<bits/stdc++.h>

#include"Registration.cpp"

using namespace std;

class BookingDetails{
    public:
    vector<Registration>data2;
    void addDetails(Registration &d){
        data2.push_back(d);
    }
    vector<Registration> getInfo(){
        return data2;
    }
};