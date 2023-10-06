#include <iostream>
#include <string>
#include <typeinfo>

int main(int contadorArgumentos, char *Argumentos[])
{
	for (int i = 0; i < contadorArgumentos; i++)
	{
		std::string arg{Argumentos[i]};
		std::cout << "Argumentos[" << i << "]: " << arg << std::endl; // Impresion
	}
	if (contadorArgumentos == 3)
	{
		std::string nombrePrograma{Argumentos[0]};
		auto primerCaracterSegundoArgumento{*(Argumentos[1])};
		auto longitudNombrePrograma{nombrePrograma.size()};
		auto tercerArgumentoANumero{std::atoi(Argumentos[2])};
		auto sumadorCaracteres{0};
		auto contador{0};
		std::string segundoArgumentoACadena{Argumentos[1]};

		std::cout << std::endl; // Impresion
		while (true)
		{
			sumadorCaracteres += segundoArgumentoACadena[contador++];
			std::cout << "sumadorCaracteres: " << sumadorCaracteres << std::endl; // Impresion
			if (contador >= static_cast<int>(segundoArgumentoACadena.size()))
			{
				break;
			}
		}
		std::cout << std::endl; // Impresion

		std::cout << std::endl; // Impresion
		std::cout << "primerCaracterSegundoArgumento: " << primerCaracterSegundoArgumento << " (Tipo: " << typeid(primerCaracterSegundoArgumento).name() << ")" << std::endl; // Impresion
		std::cout << "longitudNombrePrograma: " << longitudNombrePrograma << " (Tipo: " << typeid(longitudNombrePrograma).name() << ")" << std::endl; // Impresion
		std::cout << "tercerArgumentoANumero: " << tercerArgumentoANumero << " (Tipo: " << typeid(tercerArgumentoANumero).name() << ")" << std::endl; // Impresion
		std::cout << "sumadorCaracteres: " << sumadorCaracteres << " (Tipo: " << typeid(sumadorCaracteres).name() << ")" << std::endl; // Impresion
		std::cout << "contador: " << contador << " (Tipo: " << typeid(contador).name() << ")" << std::endl; // Impresion
		std::cout << "segundoArgumentoACadena: " << segundoArgumentoACadena << " (Tipo: " << typeid(segundoArgumentoACadena).name() << ")" << std::endl; // Impresion
		std::cout << std::endl; // Impresion

		std::cout << std::endl; // Impresion
		std::cout << "primerCaracterSegundoArgumento*3: " << (primerCaracterSegundoArgumento * 3) << " (Tipo: " << typeid(primerCaracterSegundoArgumento * 3).name() << ")" << std::endl; // Impresion
		std::cout << "sumadorCaracteres ^ primerCaracterSegundoArgumento * 3: " << (sumadorCaracteres ^ primerCaracterSegundoArgumento * 3) << " (Tipo: " << typeid(sumadorCaracteres ^ primerCaracterSegundoArgumento * 3).name() << ")" <<  std::endl; // Impresion
		std::cout << "longitudNombrePrograma & 0x1f: " << (longitudNombrePrograma & 0x1f) << " (Tipo: " << typeid(longitudNombrePrograma & 0x1f).name() << ")" <<  std::endl; // Impresion
		std::cout << std::endl; // Impresion

		// Condicion final
		if ((sumadorCaracteres ^ primerCaracterSegundoArgumento * 3) << (longitudNombrePrograma & 0x1f) == tercerArgumentoANumero)
		{
			std::cout << "Correct!" << std::endl;
		}
		else
		{
			std::cout << "Wrong!" << std::endl;
		}
	}
}