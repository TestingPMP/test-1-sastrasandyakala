#include <stdio.h>

int main() {
    int izin, suhu, radiasi, jam;
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);

    if (radiasi >= 6) {
        printf("TOLAK ");
    } else if (suhu >= 390) {
        printf("KARANTINA\n");
    } else if (izin == 1 && (jam < 6 || jam > 20)) {
        printf("TOLAK\n");
    } else if (izin == 1) {
        printf("MASUK\n");
    } else if (izin == 2 && radiasi <= 2 && jam >= 8 && jam <= 18) {
        printf("MASUK");
    } else if (izin == 2) {
        printf("PEMERIKSAAN");
    } else if (izin == 3 && radiasi == 0 && suhu < 380) {
        printf("MASUK");
    } else {
        printf("TOLAK");
    }

    return 0;
}