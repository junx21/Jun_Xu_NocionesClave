#include "matematicas.h"
#include <iostream>

namespace matematicas {
    int multiplicacion(int a, int b) {
        return a * b;
    }

    int division(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "No valida" << std::endl;
            return 0;
        }
    }
}
