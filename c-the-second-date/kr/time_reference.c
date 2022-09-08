#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int current_time(void);
int create_time(void);
int time_to_string(void);

int current_time(void) {
    // Get current time as time_t which is an integer, usually long. This is Unix Time.
    // If an error occurs, it returns -1.
    time_t now = time(NULL);

    if (now == -1){
        printf("an error occurred!\n");
        return EXIT_FAILURE;
    }

    // Get tm structs from time_t. tm has members for seconds, minutes, hours, day, month, year etc.
    struct tm *tm_gmt = gmtime(&now);
    struct tm *tm_local = localtime(&now);

    if (tm_local == NULL || tm_gmt == NULL) {
        puts("The localtime() ot gmtime() functions failed\n");
        return EXIT_FAILURE;
    }

    printf("Current GMT time is:\n%s\n", asctime(tm_gmt));
    printf("Current local time is:\n%s\n", asctime(tm_local));

    // Print the members of the local tm struct. Note these are all of type int.
    puts("The members of the local tm struct are:");
    /*
     struct tm {
        int tm_sec;         // seconds
        int tm_min;         // minutes
        int tm_hour;        // hours
        int tm_mday;        // day of the month
        int tm_mon;         // month
        int tm_year;        // year
        int tm_wday;        // day of the week
        int tm_yday;        // day in the year
        int tm_isdst;       // daylight saving time
    };
     * */
    printf("tm_sec: #seconds   %d\n", tm_local->tm_sec);
    printf("tm_min: #minutes   %d\n", tm_local->tm_min);
    printf("tm_hour: #hours  %d\n", tm_local->tm_hour);
    printf("tm_mday  %d\n", tm_local->tm_mday);
    printf("tm_mon   %d\t0-based\n", tm_local->tm_mon);
    printf("tm_year  %d\tfrom 1900\n", tm_local->tm_year);
    printf("tm_wday  %d\t0-based from Sunday\n", tm_local->tm_wday);
    printf("tm_yday  %d\t0-based\n", tm_local->tm_yday);
    printf("tm_isdst %d\t-1 = not known, 0 = no, 1 = yes\n", tm_local->tm_isdst);
    return EXIT_SUCCESS;
}

int create_time(void) {
    // Create and initialize a tm struct.
    struct tm st = {
        .tm_sec = 12,
        .tm_min = 3,
        .tm_hour = 13,
        .tm_mday = 7,
        .tm_mon = 8,
        .tm_year = 122,
        .tm_isdst = 1
    };

    // Create a time_t from a tm struct. This also sets tm_wday and tm_yday.
    time_t raw_time = mktime(&st);

    if (raw_time == -1) {
        puts("The mktime() function failed");
        return EXIT_FAILURE;
    }
    printf("The value of the time_t variable is:\n%ld\n\n", raw_time);
    printf("which represents:\n%s\n", ctime(&raw_time));

    puts("The mkdir function set these members of the tm struct:");
    printf("tm_wday  %d\t0-based from Sunday\n", st.tm_wday);
    printf("tm_yday  %d\t0-based\n", st.tm_yday);
    return EXIT_SUCCESS;
}

int time_to_string(void) {
    char datestring[64];

    time_t t = time(NULL);
    struct tm *tm_local = localtime(&t);

    // YYYY-MM-DD
    strftime(datestring, 64, "%Y-%m-%d", tm_local); // can use the %F shorthand
    puts(datestring);

    // Day, day of month, month, year in full
    strftime(datestring, 64, "%A %d %B %Y", tm_local);
    puts(datestring);

    // HH:MM:SS
    strftime(datestring, 64, "%H:%M:%S", tm_local); // can use the %T shorthand
    puts(datestring);
    return EXIT_SUCCESS;
}

int main(int argc, char *argv[]) {
    printf("%ld\n", CLOCKS_PER_SEC);
    puts("-------------------");
    puts("| codedrome.com   |");
    puts("| Dates and Times |");
    puts("-------------------\n");

    current_time();
    printf(">>>>>>>>>>>>");
    create_time();
    printf(">>>>>>>>>>>>>");
    time_to_string();

    return EXIT_SUCCESS;
}
