#include "hello.h"

void Hello::greet() {
    std::cout << "Hello, World!" << std::endl;
}

void Hello::getNameAndGreet() {
    // comments are always good  
    // more comments are better
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    // comments in main function
    Hello hello;
    hello.greet();
    hello.getNameAndGreet();

    return 0;
}
