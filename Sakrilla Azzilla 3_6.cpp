#include <stdio.h>

int main() {
    int i;
    int deret[12] = {1, 2, 4, 6, 8, 16, 32, 64, 128, 256, 512, 1024};
    
    // Menampilkan deret
    for (i = 0; i < 12; i++) {
        printf("%d", deret[i]);
        if (i != 11) {
            printf(", ");
        }
    }
    
    return 0;
}
