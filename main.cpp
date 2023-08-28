#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    print_hello();

    int n;
    cin >> n;
    cout<<"The factorial of %d is %d\n"<<n<<factorial(n)<<endl;

    int x = 56, y = 98;
    cout<<"The gcd by non recursive function of %d and %d is %d"<<x<<y<<gcd_nonrec(x, y)<<endl;
    cout<<"The gcd by recursive function of %d and %d is %d"<<x<<y<<gcd_rec(x, y)<<endl;

    return 0;
}
