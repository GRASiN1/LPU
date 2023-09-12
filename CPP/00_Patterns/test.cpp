#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    str.erase(0, 5);
    std::cout << str;
    return 0;
}