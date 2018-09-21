#include <iostream>

int main() {
    char c = 'g';
    int a =  250;
    std::cout<<c/a<<'\n';
    std::cout<<c/float(a)<<'\n';
    c = c/a;
    std::cout<<c<<'\n';
    c = c*a;
    std::cout<<c+a<<'\n';
    std::cout<<c-a<<'\n';
    std::cout<<c*a<<'\n';

    return 0;
}