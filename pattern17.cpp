#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

   
    int i=1;
    while(i<=n){

    //Print space
    int space = n-i;
    while(space){
        cout<<" ";
        space --;
    }

    //Print second triangle
    int j=1;
    while(j<=i){
        cout<<j;
        j = j+1;
    }

    //Print 3rd triangle

    int start = i -1;
    while(start){
        cout<<start;
        start --;
    }
    cout<<endl;
    i++;

    }
}