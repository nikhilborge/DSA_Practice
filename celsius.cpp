#include<iostream>

using namespace std;

int main(){
    float n;
    cout<<"enter the Fahrenheit value"<<endl;
    cin>>n;

    cout<<"conversion of Fahrenheit to celsius"<<endl;

    float c = 0;
    c = (n - 32) * 5/9;

    cout<<n<<" Fahrenheit is equal to "<< c <<" celcius";

    
}