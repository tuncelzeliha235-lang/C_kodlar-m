/*

AD SOYAD : ZELİHA TUNCEL 
ÖĞRENCİ NO : 2420171055
BTK AKADEMİ SERTİFİKA BAĞLANTISI : https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=VP1cgxeBLd

*/



#include <stdio.h>

// kucukten buyuge insertion sort

void yazdir(int dizi[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%3d ", dizi[i]);
    }
    printf("\n");
}

void insertion_sort(int dizi[], int n) {
    int i, j;
    int anahtar;

    for (i = 1; i < n; i++) {
        anahtar = dizi[i];
        j = i - 1;

        while (j >= 0 && dizi[j] > anahtar) {
            dizi[j + 1] = dizi[j];
            j--;
        }

        dizi[j + 1] = anahtar;

        printf("iterasyon %d : ", i);
        yazdir(dizi, n);
    }
}

int main() {
    int A[] = {20, 3, 48, 8, 13};
    int N = sizeof(A) / sizeof(A[0]);

    printf("Baslangıctaki hali   : ");
    yazdir(A, N);

    insertion_sort(A, N);

    printf("Son hali   : ");
    yazdir(A, N);

    return 0;
}
