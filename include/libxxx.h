#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define LIBXXX_EXPORT __declspec(dllexport)
#else
  #define LIBXXX_EXPORT
#endif

LIBXXX_EXPORT const char* read_data();
