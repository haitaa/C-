#include <stdio.h>

int main() {
    int n, hane=0, toplam=0;

    printf("Sayıyı giriniz: ");
    scanf("%d", &n);

    do {
        toplam += (n % 10);
        hane++;
        n = n / 10;
    }
    while(n > 0);

    printf("Rakamları toplamı %d %d Haneli", toplam, hane);

    return 0;
}