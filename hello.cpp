#include "hello.h"

void Hello::greet() {
    std::cout << "Hello, World!" << std::endl;
}

void Hello::getNameAndGreet() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    Hello hello;
    hello.greet();
    hello.getNameAndGreet();

    return 0;
}
