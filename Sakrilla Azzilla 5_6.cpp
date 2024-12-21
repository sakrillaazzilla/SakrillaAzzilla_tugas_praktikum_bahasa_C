#include <stdio.h>

int main() {
    double saldo = 1000000; 
    double bunga = 0.02;     
    int bulan;
    
 
    printf("Saldo awal: %.2f\n", saldo);
    
    
    for (bulan = 1; bulan <= 10; bulan++) {
        saldo += saldo * bunga;  
        printf("Saldo setelah bulan %d: %.2f\n", bulan, saldo);
    }

    return 0;
}


