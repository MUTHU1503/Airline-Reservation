#include<iostream>
#include<bits/stdc++.h>

#include"Details.cpp"

using namespace std;
class Customers{
    private:
    vector<Details>data;
    public:
    void addCustomer(Details& details){
        data.push_back(details);
    }
    vector<Details> getDetails(){
        return data;
    }
};