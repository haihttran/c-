#include <iostream>

int fib(int n){
    int f[n+2];
    int i;

    f[0] = 0;
    f[1] = 1;

    for(i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main(){
    int number;
    std::cout << "Please input the order of the desired Fibonacci number:" 
                << std::endl;
    std::cin >> number;
    std::cout << fib(number) << std::endl;
    return 0;
}