#include <iostream>
#include <vector>
#include <sstream>

int main() {
    int N = 3;

    std::vector<int> numeros;

    std::cout << "Ingrese " << N << " numeros enteros separados por espacios:" << std::endl;
    std::string input;
    std::getline(std::cin, input);

    std::istringstream entrada(input);
    int num;

    while (entrada >> num) {
        numeros.push_back(num);
    }

    // Imprimir los números uno por uno
    std::cout << "Los numeros ingresados son:" << std::endl;
    for (int i = 0; i < numeros.size(); ++i) {
        std::cout << numeros[i] << std::endl;
    }

    // Calcular y mostrar la suma de los números
    int suma = 0;
    for (int i = 0; i < numeros.size(); ++i) {
        suma += numeros[i];
    }
    std::cout << "La suma de los numeros es: " << suma << std::endl;

    return 0;
}