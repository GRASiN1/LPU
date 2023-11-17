#include <iostream>

class Guitar {
public:
    void play() {
        std::cout << "Strumming the guitar";
    }
};

int main() {
    Guitar guitar;
    Guitar* ptr = &guitar;
    ptr->play();
    return 0;
}