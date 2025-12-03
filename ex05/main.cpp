#include "Harl.hpp"

int main() {
    Harl harl;

    // Test each level
    std::cout << "Testing DEBUG:" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "Testing INFO:" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "Testing WARNING:" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "Testing ERROR:" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    // Test invalid level
    std::cout << "Testing UNKNOWN:" << std::endl;
    harl.complain("SILLY");
    std::cout << std::endl;

    return 0;
}
