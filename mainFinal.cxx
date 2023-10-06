#include <iostream>
#include <string>

void imprimirMensaje(const std::string &mensaje)
{
	std::cout << mensaje << std::endl;
}

int calcularClave(int sumadorCaracteres, char primerCaracterSegundoArgumento, int longitudNombrePrograma)
{
	int resultado = (sumadorCaracteres ^ (primerCaracterSegundoArgumento * 3)) << (longitudNombrePrograma & 0x1f);
	return resultado;
}

int main(int contadorArgumentos, char *Argumentos[])
{
	if (contadorArgumentos == 1){
		imprimirMensaje("ERROR. Faltan dos argumentos.");
		imprimirMensaje("Se debe ingresar 3 argumentos, de la forma: ./nombrePrograma ASHG45 73253");
	} else if (contadorArgumentos == 2){
		imprimirMensaje("ERROR. Falta un argumento.");
		imprimirMensaje("Se debe ingresar 3 argumentos, de la forma: ./nombrePrograma ASHG45 73253");
	} else if (contadorArgumentos == 3){
		std::string nombrePrograma{Argumentos[0]};
		auto primerCaracterSegundoArgumento{*(Argumentos[1])};
		auto longitudNombrePrograma{nombrePrograma.size()};
		auto tercerArgumentoANumero{std::atoi(Argumentos[2])};
		auto sumadorCaracteres{0};
		auto contador{0};
		std::string segundoArgumentoACadena{Argumentos[1]};

		while (true)
		{
			sumadorCaracteres += segundoArgumentoACadena[contador++];
			if (contador >= static_cast<int>(segundoArgumentoACadena.size()))
			{
				break;
			}
		}

		imprimirMensaje("El valor de sumadorCaracteres es: " + std::to_string(sumadorCaracteres));
		int claveCalculada = calcularClave(sumadorCaracteres, primerCaracterSegundoArgumento, longitudNombrePrograma);
		imprimirMensaje("El valor de la clave calculada es: " + std::to_string(claveCalculada));

		if (claveCalculada == tercerArgumentoANumero)
		{
			std::cout << "Correct!" << std::endl;
		}
		else
		{
			std::cout << "Wrong!" << std::endl;
		}
	} else {
		imprimirMensaje("ERROR. Exceso de argumentos.");
		imprimirMensaje("Se debe ingresar 3 argumentos, de la forma: ./nombrePrograma ASHG45 73253");
	}

	return 0;
}
