#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

int main() {
    int numero;
    std::cin >> numero;

    std::vector<int> listras(numero);
    for (int i = 0; i < numero; ++i) {
        std::cin >> listras[i];
    }

    for (int i = 0; i < numero; ++i) {
        if (listras[i] == -1){  
            int distancia = INT_MAX;
            for (int j = 0; j < numero; ++j){
                if (listras[j] == 0){
                    int dist = std::abs(i - j);
                    distancia = std::min(distancia, dist);
                }
            }

            if (distancia >= 9){
                listras[i] = 9;
            }
            else{
                listras[i] = distancia;
            }
        }
    }

    for (int i = 0; i < numero; ++i) {
        std::cout << listras[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
