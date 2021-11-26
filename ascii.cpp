#include <iostream>

using namespace std;

int main(){

    char n;
    cout<<"Enter a number of character"<<endl;
    cin>>n;

    // check upper case 
    if (n>=65 && n<=90){
        cout<< "n is a Uppercase";
    }
    else if (n<=122 && n>=97){
        cout<< "n is a lower case";
    }
    else{
        cout<< "n is a number";
    }
}