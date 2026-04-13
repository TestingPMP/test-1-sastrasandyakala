#include <stdio.h>

int main() {
    int izin, suhu, radiasi, jam;
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);

    if (radiasi >= 6) {
        printf("TOLAK ");
    } else if (suhu >= 390) {
        printf("KARANTI");
    } else if (izin == 1 && (jam < 6 || jam > 20)) {
        printf("TOLA");
    } else if (izin == 1) {
        printf("MAS");
    } else if (izin == 2 && radiasi <= 2 && jam >= 8 && jam <= 18) {
        printf("MAS");
    } else if (izin == 2) {
        printf("PEMERIKSA");
    } else if (izin == 3 && radiasi == 0 && suhu < 380) {
        printf("MASUK\n");
    } else {
        printf("TOLA");
    }

    return 0;
}
// y
