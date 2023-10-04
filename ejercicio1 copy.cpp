#include <iostream>
#include <vector>
#include <sstream>

std::vector<int> solicitarNumeros(int N) {
    std::vector<int> numeros;
    std::string input;
    
    std::cout << "Ingrese " << N << " numeros enteros separados por espacios:" << std::endl;
    std::getline(std::cin, input);

    std::istringstream entrada(input);
    int num;

    while (entrada >> num) {
        numeros.push_back(num);
    }

    return numeros;
}

void imprimirNumeros(const std::vector<int>& numeros) {
    std::cout << "Los numeros ingresados son:" << std::endl;
    for (int i = 0; i < numeros.size(); ++i) {
        std::cout << numeros[i] << std::endl;
    }
}

// Función para calcular y mostrar la suma de los números
int calcularSuma(const std::vector<int>& numeros) {
    int suma = 0;
    for (int i = 0; i < numeros.size(); ++i) {
        suma += numeros[i];
    }
    return suma;
}

int main() {
    int N = 3;

    // Funcion
    std::vector<int> numeros = solicitarNumeros(N);

    // Funcion
    imprimirNumeros(numeros);

    // Funcion
    int suma = calcularSuma(numeros);
    std::cout << "La suma de los numeros es: " << suma << std::endl;

    return 0;
}