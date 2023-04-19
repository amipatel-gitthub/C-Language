#include<iostream>
using namespace std;

void display() // display() identifier
{
    static int k =10; // variable initialization with declaration 
    // k is identifier
    cout<<k<<"  ";
    k++;
}


int main(){
   // int m=10;
    for(int i=0;i<5;i++){
        display();
    }
    return 0;
    
}

/**
 * 10  11  12  13  14 
 
 */