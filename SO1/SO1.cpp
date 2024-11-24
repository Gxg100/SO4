#include <iostream>
#include <cmath>
#include <cstdlib>


bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    int limit = std::sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Utilizare incorecta. Sintaxa: SO1.exe <start> <end>" << std::endl;
        return 1;
    }

    int start = std::atoi(argv[1]);
    int end = std::atoi(argv[2]);

    std::cout << "Cautare numere prime in intervalul " << start << " - " << end << "..." << std::endl;

    
    for (int num = start; num <= end; ++num) {
        if (isPrime(num)) {
            std::cout << num << " ";
        }
    }

    std::cout << std::endl; 

    return 0;
}
