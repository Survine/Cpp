#include<iostream>
using namespace std;

int main() {
	char c;
    cin>>c;
    if('a'<=c and c<= 'z'){
        cout<<0;
    }
	else if('A'<=c and c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}