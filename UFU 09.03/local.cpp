#include <iostream>
#include <string>

int main(){
    std::string pedras;
    std::cin >> pedras;

    int len = pedras.lenght() - 1;

    for(int i = 0, i < (pedras.lenght()/2) - 1, ++i){
        std::swap(pedras[i], pedras[len]);
        len -= 1;
    }

    std::cout << pedras << std::endl;
}