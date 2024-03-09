#include <iostream>
#include <algorithm>
#include <vector>

//abandonei a questao pois a logica estava errada
int main(){
    std::vector<int> pacientes;
    int berries, planos, cont=0, soma=0, plano_atual =;

    std::cin >> planos >> berries;
    
    for(int k = 0; k < planos; k++){
        std::cin >> pacientes_plano;
        pacientes.push_back(pacientes_plano);
    }

    std::sort(pacientes.rbegin(), pacientes.rend());

    while (cont < K) {
        for (int i = 0; i < N; ++i) {
            if (i != plano_atual) {
                // Atende um paciente do plano i
                ++cont;
                plano_atual = i;
                break;
            }
        }
    }

    std::cout << cont << std::endl;

    return 0;
}