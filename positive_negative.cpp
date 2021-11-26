#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter a number"<<endl;
    cin>> n;

    if (n>0){
        cout<<"Positive number"<<endl;
    }
    else if (n<0){
        cout<<"Negative Number"<<endl;
    }
    else{
        cout<<"zero";
    }
}