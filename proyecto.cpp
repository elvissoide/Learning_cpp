#include <iostream>
#include <string>

int main(int var0, char *var1[]) {
	std::cout << "var0:" << var0 << std::endl;
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
		while (true){
			var6 += var8[var7++];
			if (var7 >= static_cast<int>(var8.size())){
				break;
			}
		}
		if ((var6 ^ var3 * 3) << (var4 & 0x1f)) {
			std::cout << "Correct!" << std::endl;
		} else {
			std::cout << "Wrong!" << std::endl;
		}
	}
	system("pause");
}