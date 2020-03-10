#include <iostream>
#include <memory>
#include <vector>

template<typename T>
void inc(std::unique_ptr<T> &ptr) {
    (*ptr)[0] = (*ptr)[0] + 1;
}

int main() {
    std::unique_ptr<std::vector<int>> smrt_ptr(new std::vector<int>({0,0,0,0}));
    for (auto const& i : *smrt_ptr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    inc<std::vector<int>>(smrt_ptr);
    
    for (auto const& i : *smrt_ptr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
