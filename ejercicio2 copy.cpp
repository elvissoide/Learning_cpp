#include <iostream>
#include <string>

std::string convertirAMinusculas(const std::string& str) {
    std::string resultado = str;
    for (size_t i = 0; i < resultado.length(); ++i) {
        resultado[i] = std::tolower(resultado[i]);
    }
    return resultado;
}

bool estaEnElGrupo(const std::string& nombre, const std::string nombresGrupo[], int numNombres) {
    std::string nombreMinusculas = convertirAMinusculas(nombre);
    for (int i = 0; i < numNombres; ++i) {
        if (nombreMinusculas == convertirAMinusculas(nombresGrupo[i])) {
            return true;
        }
    }
    return false;
}

int main() {
    std::string nombresGrupo[] = { "elvis", "juan", "sol", "ana" };
    int numNombres = sizeof(nombresGrupo) / sizeof(nombresGrupo[0]);

    std::cout << "Ingrese su primer nombre: ";
    std::string nombreUsuario;
    std::cin >> nombreUsuario;

    bool encontrado = estaEnElGrupo(nombreUsuario, nombresGrupo, numNombres);

    if (encontrado) {
        std::cout << "Hola, " << nombreUsuario << std::endl;
        std::cout << "Bienvenido al grupo!" << std::endl;
    }
    else {
        std::cout << "Usuario desconocido." << std::endl;
    }

    return 0;
}
