#include<bits/stdc++.h>
using namespace std;
int main(){
   int *arr;
   int size;

   cout<<"Enter the size of the integer array: ";
   cin>>size;
   
   cout<<"Creating an array of size "<<size<<". .";
   arr = new int[size];

   cout<<"\nDynamic allocation of memory for array arr is succesfull.";
   delete arr;
   
}