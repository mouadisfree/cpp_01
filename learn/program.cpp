// this program about how to use constructor and destructor to store
// an object in the stack or in the heap (using heap and delete).

#include <iostream>
#include <string>

class person {
    private : 
        std::string name;
    public :
        person(std::string name);
        ~person();
};

person::person(std::string name) {
    this->name = name;
    std::cout << name << " tzaad f memory." << std::endl;
}

person::~person() {
    std::cout << name << " t7ayed mn memory." << std::endl;
}

person*    newperson(std::string name) {
    return new person(name);
}

int main() {
    {person p1("mouad");}
    std::cout << std::endl;

    person* p2 = newperson("katfi");
    std::cout << "test\n";
    delete p2;
}