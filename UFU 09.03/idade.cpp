#include <iostream>

int main(){
    int idade, ingresso;
    std::cin >> idade >> ingresso;

    if(idade >= 2000 || ingresso >= 2019){
        std::cout << "Sim" << std::endl;
    }
    else{
        std::cout << "Nao" << std::endl;
    }
}