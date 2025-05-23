#include <iostream>
// Это нужно для ввода и вывода

int main() {
    std::string name;
    // Запрашиваем имя пользователя
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Выводим персонализированное сообщение
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}