#include <iostream>
#include <string>

int main(int var0, char *var1[]) {
	for (int i = 0; i < var0; i++) {
	std::string arg{ var1[i] };
	std::cout << "var1[" << i << "]: " << arg << std::endl;
	}
	if (var0 == 3)
	{
		std::string var2{var1[0]};
		auto var3{ * (var1[1])};
		auto var4{ var2.size() };
		auto var5{ std::atoi(var1[2]) };
		auto var6{ 0 };
		auto var7{ 0 };
		std::string var8{ var1[1] };

		std::cout << std::endl;
		while (true){
			var6 += var8[var7++];
			std::cout << "var6: " << var6 << std::endl;
			if (var7 >= static_cast<int>(var8.size())){ // var8 = 2do argumento
				break;
			}
		}
		std::cout << std::endl;
		
		
		std::cout << std::endl;
		std::cout << "var3: " << var3 << std::endl;
		std::cout << "var4: " << var4 << std::endl;
		std::cout << "var5: " << var5 << std::endl;
		std::cout << "var6: " << var6 << std::endl;
		std::cout << "var7: " << var7 << std::endl;
		std::cout << "var8: " << var8 << std::endl << std::endl;

		std::cout << std::endl;
		std::cout << "var3*3: " << (var3 * 3) << std::endl;
		std::cout << "var6 ^ var3 * 3: " << (var6 ^ var3 * 3) << std::endl << std::endl;

		if ((var6 ^ var3 * 3) << (var4 & 0x1f) == var5) {
			std::cout << "Correct!" << std::endl;
		} else {
			std::cout << "Wrong!" << std::endl;
		}
	}
}