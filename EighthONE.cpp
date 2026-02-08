#include <iostream>
void counting_function(int a);

int main(int argc, char** argv) {
    setlocale(LC_ALL, "RUS");
    for (static int i = 0; i < 15; i++) {
        counting_function(i);
    }
}
void counting_function(int a) {
    std::cout << "Êîëè÷åñòâî âûçîâîâ ôóíêöèè " << __FUNCSIG__ <<": " << a + 1 << std::endl;

}
