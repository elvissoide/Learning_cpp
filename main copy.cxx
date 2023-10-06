#include <iostream>
#include <string>

int main(int var0, char *var1[]) { // var1[0] var1[1] var1[2]
	if (var0 == 3)
	{
		std::string var2{var1[0]}; // var2 que es tu nombre del programa.
		auto var3{ * (var1[1])};
		auto var4{ var2.size() }; // var 4 es igual a la longitud del nombre del programa, en este caso 6
		auto var5{ std::atoi(var1[2]) };
		auto var6{ 0 };
		auto var7{ 0 };
		std::string var8{ var1[1] };

		while (true){
			var6 += var8[var7++];
			if (var7 >= static_cast<int>(var8.size())){
				break;
			}
		}
		if ((var6 ^ var3 * 3) << (var4 & 0x1f) == var5) {
			std::cout << "Correct!" << std::endl;
		} else {
			std::cout << "Wrong!" << std::endl;
		}
	}
}