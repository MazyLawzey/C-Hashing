#include <stdio.h>
#include <time.h>

int main(void) {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    printf("Текущее время: %02d:%02d:%02d\n", t->tm_hour, t->tm_min, t->tm_sec);
    printf("Текущая дата: %02d.%02d.%04d\n", t->tm_mday, t->tm_mon + 1, t->tm_year + 1900);

    return 0;
}
