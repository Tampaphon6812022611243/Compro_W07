#include <stdio.h>

int main(void) {
    // ประกาศตัวแปรชนิดจำนวนเต็ม (integer) ชื่อ x และ y
    int x, y;

    // รับค่า x จากผู้ใช้
    printf("Enter4 x: ");
    scanf("%d", &x);

    // รับค่า y จากผู้ใช้
    printf("Enter y: ");
    scanf("%d", &y);

    // ใช้โครงสร้าง if-else if-else เพื่อเปรียบเทียบค่า
    if (x > y) {
        // ถ้า x มากกว่า y
        printf("result: %d > %d\n", x, y);
    }
    else if (x < y) {
        // ถ้า x น้อยกว่า y
        printf("result: %d < %d\n", x, y);
    }
    else {
        // กรณีอื่นๆ (x เท่ากับ y)
        printf("result: %d = %d\n", x, y);
    }

    // คืนค่า 0 เพื่อบอกว่าจบการทำงาน
    return 0;
}