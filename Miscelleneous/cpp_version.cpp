#include <iostream>

int main() {
if (__cplusplus == 202302L)
std::cout << "C++23" << std::endl;
else if (__cplusplus == 202002L)
std::cout << "C++20" << std::endl;
else if (__cplusplus == 201703L)
std::cout << "C++17" << std::endl;
else if (__cplusplus == 201402L)
std::cout << "C++14" << std::endl;
else if (__cplusplus == 201103L)
std::cout << "C++11" << std::endl;
else if (__cplusplus == 199711L)
std::cout << "C++98" << std::endl;
else
std::cout << "Pre-standard C++: " << __cplusplus << std::endl;


#if cplusplus == 201103L
    std::cout << "C++11 is enabled.\n";
#elif cplusplus == 201402L
    std::cout << "C++14 is enabled.\n";
#elif cplusplus == 201703L
    std::cout << "C++17 is enabled.\n";
#elif cplusplus == 202002L
    std::cout << "C++20 is enabled.\n";
#elif __cplusplus > 202002L
    std::cout << "C++23 or newer is enabled.\n";
#else
    std::cout << "Pre-C++11 or unknown version.\n";
#endif


return 0;
}