#include <iostream>

int Policz(int a,int b) {
    return a*b; //mnożenie
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W drugim branchu: 2*3="<<Policz(2,3) << std::endl;
    return 0;
}
