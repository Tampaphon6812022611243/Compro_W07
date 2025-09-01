#include <stdio.h>

int main() {
    int age, vipLevel;
    float amount, discount = 0;

    // รับข้อมูลจากผู้ใช้
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vipLevel);

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    // ตรวจสอบเงื่อนไขเพื่อคำนวณส่วนลด
    if (age > 60 || (vipLevel == 3 || vipLevel == 4)) {
        discount = 20;
    } else if (age >= 30 && age <= 40 && amount > 2000) {
        discount = 15;
    } else if (age >= 18 && age <= 25 && amount > 1000) {
        discount = 10;
    } else if (vipLevel == 5 || amount >= 50000) {
        discount = 25;
    }

    // แสดงผล
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vipLevel, amount);

    if (discount > 0) {
        printf("Discount received: %.0f%%\n", discount);
    } else {
        printf("No discount applied\n");
    }

    printf("Thank you for shopping with us!\n");

    return 0;
}