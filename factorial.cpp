//Implement a simple function to calculate the factorial of a number

#include <iostream>

int factorial(int n)
{
    return (n == 1) ? (1) : (n*factorial(n-1));
}
int main(){
    int example = 5;
    std::cout   << "Factorial of " << example << " = "
                << factorial(example) << std::endl;
    return 0;
}
