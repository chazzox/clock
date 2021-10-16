#include <stdio.h>
#include <time.h>

int main() {
    while (1) {
        time_t last = time(NULL);
        while (time(NULL) == last);
        struct tm tm = *localtime(&last);
        printf("\r%02d-%02d-%02d", tm.tm_hour, tm.tm_min, tm.tm_sec);
        fflush(stdout);
    }
}
