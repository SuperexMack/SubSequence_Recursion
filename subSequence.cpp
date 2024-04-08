#include<bits/stdc++.h>
using namespace std;

void SubSquence(int i , vector<int>&mack , int n , vector<int>&storage){
    // base case
    if(i==n){
        for(int i = 0 ; i <storage.size(); i++){
            cout<<storage[i]<<" ";
        } 
        cout<<endl;
        return ;
    }
        // from the below line we are going to add the data to the storage vector
        storage.push_back(mack[i]);
        SubSquence(i+1 , mack , n , storage);

        // now we are going back so we are going to make the last element empty
        storage.pop_back();
        SubSquence(i+1 , mack , n , storage);
}


int main(){
    vector<int>mack = {1,2,4};
    vector<int>storage;
    SubSquence(0 , mack , 3 , storage);
}