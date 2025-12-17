#include "Converter.h"

int CalculateWeekNumber(int year, int month, int day) {

    int m = month;
    int y = year;

    if (m < 3) {
        m += 12;
        y -= 1;
    }

    int K = y % 100;
    int J = y / 100;
    int h = (day + (13 * (m + 1)) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;

    // день недели (1=пн, 7=вс)
    int dw = ((h + 5) % 7) + 1;

    // День года
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        days[1] = 29;
    }

    int doy = day;
    for (int i = 0; i < month - 1; ++i) {
        doy += days[i];
    }

    // Номер недели
    int week = (doy - dw + 10) / 7;

    if (week < 1) {
        week = 52; // Последняя неделя предыдущего года
    }

    return week;
}