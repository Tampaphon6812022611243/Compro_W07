#include <stdio.h>  

int main() {
    int level;  // ประกาศตัวแปร level สำหรับเก็บค่าที่ผู้ใช้ป้อนเข้ามา

    printf("Enter level: ");  // แสดงข้อความให้ผู้ใช้ป้อนระดับ
    scanf("%d", &level);      // รับค่าจำนวนเต็มจากผู้ใช้แล้วเก็บไว้ในตัวแปร level

    // ตรวจสอบว่า level น้อยกว่าหรือเท่ากับ 0 หรือไม่
    if (level <= 0) {
        printf("The level below 1 is not allowed.\n");  // แจ้งเตือนว่า level ต่ำกว่า 1 ไม่อนุญาต
    }
    // ตรวจสอบว่า level มากกว่า 4 หรือไม่
    else if (level > 4) {
        printf("The level above 4 is not allowed.\n");  // แจ้งเตือนว่า level มากกว่า 4 ไม่อนุญาต
    }
    // ถ้า level อยู่ในช่วง 1 ถึง 4 ให้เข้าสู่การตรวจสอบแบบ switch
    else {
        switch (level) {
            case 1:  // ถ้า level เท่ากับ 1
                printf("Beginner\n");  // แสดงว่าเป็น Beginner
                break;

            case 2:  // ถ้า level เท่ากับ 2
                printf("Intermediate\n");  // แสดงว่าเป็น Intermediate
                break;

            case 3:  // ถ้า level เท่ากับ 3
                printf("Advanced\n");  // แสดงว่าเป็น Advanced
                break;

            case 4:  // ถ้า level เท่ากับ 4
                printf("Expert\n");  // แสดงว่าเป็น Expert
                break;
        }
    }

    return 0;  // ส่งค่ากลับ 0 เพื่อบอกว่าโปรแกรมทำงานสำเร็จ
}
