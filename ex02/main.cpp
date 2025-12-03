#include <iostream>
#include <string.h>

int main() {
    std::string stringVAR = "HI THIS IS BRAIN";
    std::string* stringPTR = &stringVAR;
    std::string& stringREF = stringVAR;

    std::cout << "memory address of stringVAR:      " << &stringVAR << std::endl;
    std::cout << "memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "value of stringVAR:            " << stringVAR << std::endl;
    std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF: " << stringREF << std::endl;

}