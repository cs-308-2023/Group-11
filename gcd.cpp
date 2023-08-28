#include<functions.h>

int gcd_nonrec(int a, int b){
    if(a > b) {
        int tmp = a;
        a = b;
        b = tmp; 
    }
    for (int i = a; i >= 1; i--) {
        if(a%i == 0 && b%i == 0) return i; 
    }
    return b;
}