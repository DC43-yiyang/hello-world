// overloading operators example
#include <iostream>
#include <cstring>
//using namespace std;

int main(){
    int* num = NULL;
    int temp = 10;
    int abc = 1;
    num = &temp;
    std::cout << *num << std::endl;
    *num = abc;
    // memcpy(num, &abc, sizeof(int));
    std::cout << *num << std::endl;
    std::cout << "HELL" << std::endl;

    return 0;
}

