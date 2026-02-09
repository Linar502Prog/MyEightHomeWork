#include <iostream>
void counting_function();

int main(int argc, char** argv) {
    setlocale(LC_ALL, "RUS");
    for (int i = 0; i < 15; i++) {
        counting_function();
    }
}
void counting_function() {
    static int i;
    std::cout << "Количество вызовов функции " << FUNCSIG <<": " << i + 1 << std::endl;
    i++;
}

