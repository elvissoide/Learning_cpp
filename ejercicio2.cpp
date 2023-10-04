#include <iostream>
#include <string>

int main() {
    // Listado de nombres
    std::string nombresGrupo[] = { "elvis", "juan", "sol", "ana" };

    // Ingreso de nombre
    std::cout << "Ingrese su primer nombre: ";
    std::string nombreUsuario;
    std::cin >> nombreUsuario;

    // Convertir a minusculas
    for (size_t i = 0; i < nombreUsuario.length(); ++i) {
        nombreUsuario[i] = std::tolower(nombreUsuario[i]);
    }

    bool encontrado = false;

    // Comprobar si el nombre esta en el grupo
    for (int i = 0; i < sizeof(nombresGrupo) / sizeof(nombresGrupo[0]); ++i) {
        if (nombreUsuario == nombresGrupo[i]) {
            encontrado = true;
            break;
        }
    }

    // Imprimir un saludo personalizado
    if (encontrado == true) {
        std::cout << "Hola, " << nombreUsuario << std::endl;
        std::cout << "Bienvenido al grupo!" << std::endl;
    }
    else {
        std::cout << "Usuario desconocido." << std::endl;
    }

    return 0;
}
