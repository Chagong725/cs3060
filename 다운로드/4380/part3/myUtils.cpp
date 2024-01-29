#include "myUtils.h"

std::string convTen2Two(unsigned int baseTenValue) {
    if (baseTenValue == 0) {
        return "0";
    }

    std::string binary;
    while (baseTenValue > 0) {
        binary = std::to_string(baseTenValue % 2) + binary;
        baseTenValue /= 2;
    }
    return binary;
}
