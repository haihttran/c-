#include <iostream>

int tiling(int n, int m){
    int f[n+1];
    
    f[0] = 0;    

    for(int i = 1; i <= n; i++){
        if(i < m)
            f[i] = 1;
        else if (i > m)
            f[i] = f[i-1] + f[i-m];
        else 
            f[i] = 2;        
    }    
    return f[n];
}

int main(){
    int n, m;
    std::cout << "Please input the order of the desired n and m numbers:" 
                << std::endl;
    std::cin >> n;
    std::cin >> m;
    std::cout << tiling(n, m) << std::endl;
    return 0;
}