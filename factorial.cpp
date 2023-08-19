#include <iostream>
#include "functions.h"
using namespace std;
int factorial(int n){
    if(n==0) return 1;
    
    if(n<0) {
        while(n<0){
        cout<<"Please enter a positive number : ";
        cin>>n;
        cout<<endl;
        }
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
