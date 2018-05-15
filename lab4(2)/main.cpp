#include <iostream>

struct Student {
    char name[17];
    uint16_t year;
    float sred_ball;
    uint8_t sex:1;
    int classes;
    Student* starosta;
}

int
main() {

    std::cout << "Hello, World!" << std::endl;
    return 0;
}