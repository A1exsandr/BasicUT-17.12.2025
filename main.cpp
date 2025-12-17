#include <iostream>
#include "Converter.h"

int main() {
    std::setlocale(LC_ALL, "Russian");
    int year, month, day;
    char dot1, dot2;

    std::cout << "Âגוהטעו האעף ג פמנלאעו דדדד.לל.הה: ";
    std::cin >> year >> dot1 >> month >> dot2 >> day;

    int week = CalculateWeekNumber(year, month, day);
    std::cout << "Íמלונ םוהוכט: " << week << std::endl;

    return 0;
}