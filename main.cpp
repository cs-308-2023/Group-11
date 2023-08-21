#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    print_hello();

    int n;
    cin >> n;
    cout<<"The factorial of %d is %d\n"<<n<<factorial(n)<<endl;

    return 0;
}
