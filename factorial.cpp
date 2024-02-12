//Implement a simple function to calculate the factorial of a number

#include <iostream>

int factorial(int n)
{
    if(n == 1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int example = 5;
    std::cout << "Factorial of " << example << " = " << factorial(example) << std::endl;
    return 0;
}
