#include <iostream>

void modifyValue(int *ptr)
{
    (*ptr)++; // Increment the value pointed to by ptr
}

int main()
{
    int num = 5;

    // Emulating a reference with a pointer
    int *ptr_to_num = &num;

    std::cout << "Original value of num: " << num << std::endl;

    modifyValue(ptr_to_num); // Pass the pointer to the function

    std::cout << "Modified value of num: " << num << std::endl;

    return 0;
}
