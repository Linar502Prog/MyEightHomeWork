#include <iostream>

namespace N1 {
	int calc(int x, int y) {
		return x + y;
	}
}
namespace N2 {
	int calc(int x, int y) {
		return x - y;
	}
}
namespace N3 {
	int calc(int x, int y) {
		return x * y;
	}
}
namespace N4 {
	int calc(int x, int y) {
		return x / y;
	}
}
int main() {
	setlocale(LC_ALL, "RUS");
	int x{ 6 }, y{ 9 };
	std::cout << "x = " << x << " y = " << y << std::endl;
	std::cout << "Сложение: " << N1::calc(x,y) << std::endl;
	std::cout << "Вычитание: " << N2::calc(x, y) <<std::endl;
	std::cout << "Умножение: " << N3::calc(x, y) <<std::endl;
	std::cout << "Деление: " << N4::calc(x, y) << std::endl;
}