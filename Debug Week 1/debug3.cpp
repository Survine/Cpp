/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=0;
    while(i<n){
        int k = 0,gaps=(n-i-1);
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 0,ch = 2*i+1;
        while(m<ch){
            cout<<"*";
            m = m + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}