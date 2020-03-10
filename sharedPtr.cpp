#include <iostream>
#include <memory>


class toyExample {
    char* string;
    int a;

public:
    toyExample() {
        string = new char[600];
        a = 600;
    }

    ~toyExample() {
        std::cout << "toy example was FREED yeet" << std::endl;
        delete[] string;
    }

    void accString() {
        for(int i = 0; i < 600; i++) {
            this->string[i] = 'a';
        }
        this->string[599] = '\0';
    }
    
};

std::shared_ptr<toyExample> createToy() {
    auto smrtPtr = std::make_shared<toyExample>();
    return smrtPtr;
}

int main() {
    auto smrt = createToy();
    (*smrt).accString();
    std::cout << "after this the shared pointer goes out of scope and should delete the toyExample object" << std::endl;
}
