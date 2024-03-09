#include <iostream>
#include <algorithm>

int main(){
    int X1, Y1, X2, Y2, distX, distY;

    std::cin >> X1 >> Y1 >> X2 >> Y2;

    distX = abs(X1 - X2);
    distY = abs (Y1 - Y2);

    std::cout << distX + distY << std::endl;

    return 0;
}