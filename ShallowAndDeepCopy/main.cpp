#include <iostream>

class CopyExample
 {
private:
    int* data;
public:
    // Constructor
    CopyExample(const int val) {
        data = new int;
        *data = val;
    }
    // Copy constructor (shallow copy)
    CopyExample(const CopyExample& other) {
        // Deep copying
        data = new int;
        *data = *other.data;
        // Shallow copying
        data = other.data;
    }
    // Destructor
    ~CopyExample() {
        delete data; // Remember to deallocate memory
    }
    // Getter
    [[nodiscard]] int getValue() const {
        return *data;
    }
    // Setter
    void setValue(const int val) {
        *data = val;
    }
};

int main() {
    const CopyExample original(5);
    CopyExample copy = original; // Shallow copy
    std::cout << "Original value: " << original.getValue() << std::endl;
    std::cout << "Copied value: " << copy.getValue() << std::endl;

    // Modifying the copied object
    copy.setValue(10);

    std::cout << "Original value after modification: " << original.getValue() << std::endl;
    std::cout << "Copied value after modification: " << copy.getValue() << std::endl;

    return 0;
}
