#include <iostream>
#include "../src/Converter.h"

int main() {
    std::setlocale(LC_ALL, "Russian");
    std::cout << "义耱 1: 2024.01.02 = " << CalculateWeekNumber(2024, 1, 2) << std::endl;
    std::cout << "义耱 2: 2025.01.04 = " << CalculateWeekNumber(2025, 1, 4) << std::endl;
    std::cout << "义耱 3: 2024.01.08 = " << CalculateWeekNumber(2024, 1, 8) << std::endl;
    std::cout << "义耱 4: 2023.05.15 = " << CalculateWeekNumber(2023, 5, 15) << std::endl;
    std::cout << "义耱 5: 2025.02.29 = " << CalculateWeekNumber(2025, 2, 29) << std::endl;
    std::cout << "义耱 6: 2023.12.31 = " << CalculateWeekNumber(2023, 12, 31) << std::endl;
    std::cout << "义耱 7: 2024.12.31 = " << CalculateWeekNumber(2024, 12, 31) << std::endl;

    return 0;
}