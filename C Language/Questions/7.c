//make a clock

#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *timeinfo;

    time(&t);                     // Get current time
    timeinfo = localtime(&t);     // Convert to local time format

    printf("Current Time: %02d:%02d:%02d\n",
           timeinfo->tm_hour,
           timeinfo->tm_min,
           timeinfo->tm_sec);

    return 0;
}
