#include <stdio.h>

int main() {
    int maxfiy = 7;
    int taxmin;
    int topildi = 0;

    for (int i = 1; i <= 5; i++) {
        printf("%d-urinish. Sonni kiriting: ", i);
        scanf("%d", &taxmin);

        if (taxmin == maxfiy) {
            printf("Tabriklaymiz, topdingiz!\n");
            topildi = 1;
            break;
        }
        printf("Noto'g'ri, qayta urinib ko'ring\n");
    }

    if (!topildi) {
        printf("Urinishlar tugadi. Maxfiy son: %d\n", maxfiy);
    }
    return 0;
}
