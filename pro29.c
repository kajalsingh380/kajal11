#include <stdio.h>
#include <string.h>

struct Time {
    int hour, minute;
};

struct Train {
    int train_no;
    char start[20], end[20];
    struct Time dep, arr;
};

int main() {
    int n, i;
    printf("Enter number of trains: ");
    scanf("%d", &n);
    struct Train t[n];
    for(i=0;i<n;i++) {
        printf("Enter Train No: ");
        scanf("%d", &t[i].train_no);
        printf("Start station: ");
        scanf("%s", t[i].start);
        printf("End station: ");
        scanf("%s", t[i].end);
        printf("Departure time (hh mm): ");
        scanf("%d %d", &t[i].dep.hour, &t[i].dep.minute);
        printf("Arrival time (hh mm): ");
        scanf("%d %d", &t[i].arr.hour, &t[i].arr.minute);
    }
    printf("\nTrain Timetable:\n");
    for(i=0;i<n;i++) {
        printf("Train %d | %s -> %s | Departure: %02d:%02d | Arrival: %02d:%02d\n",
            t[i].train_no, t[i].start, t[i].end,
            t[i].dep.hour, t[i].dep.minute, t[i].arr.hour, t[i].arr.minute);
    }
    return 0;
}