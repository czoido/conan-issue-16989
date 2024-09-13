#include <iostream>
#include "libxxx.h"
#include <fstream>
#include <sstream>

const char* read_data() {
    static std::string data;
    std::ifstream file("data.dat");
    if (!file.is_open()) {
        data = "Error: Cannot open data.dat";
    } else {
        std::ostringstream ss;
        ss << file.rdbuf();
        data = ss.str();
    }
    return data.c_str();
}