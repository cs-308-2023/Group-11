#include <iostream>
#include "functions.h"
using namespace std;
int factorial(int n){
    if(n==0) return 1;
    if(n<0) {
        while(n<0){
        printf("Please enter a positive number : /n");
        cin>>n;
      
        }
    }
    
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
