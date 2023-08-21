#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    print_hello();

    int n;
    cin >> n;
    printf("The factorial of %d is %d\n", n, factorial(n));

    return 0;
}
