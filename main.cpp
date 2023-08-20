#include <iostream>
#include "functions.h"

using namespace std;
int main(){
    print_hello();

    int n ;
    cin >> n;
    cout<<endl; 
    cout<<"The factorial of "<<n<<" is "<< factorial(n)<< endl;
    return 0;
}
