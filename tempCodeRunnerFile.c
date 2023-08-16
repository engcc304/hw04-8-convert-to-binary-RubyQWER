#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex[10];
    
    printf("ป้อนเลขฐาน 16: ");
    scanf("%s", hex);
    
    // แปลงเลขฐาน 16 เป็นเลขฐาน 10
    int decimal = strtol(hex, NULL, 16);
    
    printf("เลขฐาน 10: %d\n", decimal);
    
    // แปลงเลขฐาน 10 เป็นเลขฐาน 2
    printf("เลขฐาน 2: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (decimal >> i) & 1);
    }
    printf("\n");

    return 0;
}
