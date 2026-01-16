#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h> // unique standard (sleep function)
#include <windows.h> // Sleep function (in milliseconds)

struct tm{
    int tm_sec; //seconds after the minute [0-60]
    int tm_min; //minutess after the hour [0-9]
    int tm_hour; //hours since midnight [0-23]
    int tm_mday; //day of the month [1-31]
    int tm_mon; //months since January [0-11]
    int tm_year; // years since 1900
    int tm_wday; //days since Sunday [0-6]
    int tm_yday; //days since January 1st [0-365]
    int tm_isdst; //daylight saving time flag
};

int main(){
    //  DIGITAL CLOCK

    time_t rawtime = 0; // Jan 1 1970 (Epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK!\n");

    while (isRunning){
        time(&rawtime);
        pTime = localtime(&rawtime);
        // printf("%d %d %d %d\n", pTime->tm_wday, pTime->tm_yday, pTime->tm_mon, pTime->tm_year);
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        Sleep(1000); 
    }


    return 0;
}

