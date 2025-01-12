#include "app.h"
#include <format>
#include <sstream>
using namespace vsite::oop::v1;

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
    int n;
    std::cout << "Unesite broj: ";
    std::cin >> n;
    std::cout << "\n";
    std::cout << std::format("Broj {} u hexadecimalnom obliku: {}\n\n", n, to_hex(n));
    std::cout << std::format("Tablica mnozenja za broj {}:\n", n);

    mult_table(n, std::cout);
}
