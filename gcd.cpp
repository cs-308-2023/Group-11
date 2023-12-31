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
int gcd_rec(int a, int b){
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a == 0) return b;
    return gcd_rec(a, b - a);
}