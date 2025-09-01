#include <stdio.h>  

int main(){  // ฟังก์ชันหลัก เป็นจุดเริ่มต้นของการทำงานของโปรแกรม

    int Memberlevel;  // ประกาศตัวแปร Memberlevel ชนิดจำนวนเต็ม สำหรับเก็บระดับสมาชิกที่ผู้ใช้กรอก

    printf("Memberlevel (1-4): ");  // แสดงข้อความให้ผู้ใช้ป้อนระดับสมาชิก (1-4)
    scanf("%d",&Memberlevel);       // รับค่าระดับสมาชิกจากผู้ใช้ และเก็บไว้ในตัวแปร Memberlevel

    // ใช้ switch เพื่อตรวจสอบค่าของ Memberlevel และแสดงสิทธิประโยชน์ที่เกี่ยวข้อง
    switch (Memberlevel)
    {
    case 1:  // ถ้า Memberlevel เท่ากับ 1
        printf("Silver Member → 5%% discount");  // แสดงสิทธิของ Silver Member
        break;  // หยุดการทำงานใน switch ที่ case นี้

    case 2:  // ถ้า Memberlevel เท่ากับ 2
        printf("Gold Member → 10%% discount + Reward points");  // แสดงสิทธิของ Gold Member
        break;

    case 3:  // ถ้า Memberlevel เท่ากับ 3
        printf("Platinum Member → 15%% discount + Reward points + Birthday gift");  // แสดงสิทธิของ Platinum Member
        break;

    case 4:  // ถ้า Memberlevel เท่ากับ 4
        printf("Diamond Member → ได้ทุกอย่าง + VIP events");  // แสดงสิทธิของ Diamond Member
        break;

    default:  // ถ้าไม่ตรงกับกรณีใดเลย (เช่น กรอก 0, 5, -1 ฯลฯ)
        printf("Invalid membership level");  // แจ้งว่าระดับสมาชิกไม่ถูกต้อง
        break;
    }

    return 0;  // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานเสร็จสมบูรณ์
}
