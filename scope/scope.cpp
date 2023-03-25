#include <iostream>

int globalVariable = 10;

void printGlobalVariable() {
    std::cout << "Global variable value: " << globalVariable << std::endl;
}

int main() {
    int localVariable = 5;
    {
        int innerVariable = 3;
        std::cout << "Inner variable value: " << innerVariable << std::endl;
    }
    std::cout << "Local variable value: " << localVariable << std::endl;
    printGlobalVariable();
    return 0;
}
