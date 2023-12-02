//Written by: Naina Mogha
//Date: 2 Dec 2023
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int clumsy(int n){
    
    if(n<=2){
        return n;
    }
    else if(n<=4){
        return n + 3;
    }
    else
    {
        return n + 3 - ((n - 4)/2)* 2 * (n - 2);
    }
}
int main(){
     cout<<"Test Case-1 : "<<clumsy(5)<<endl;
     cout<<"Test Case-2 : "<<clumsy(10)<<endl;
     return 0;
}
