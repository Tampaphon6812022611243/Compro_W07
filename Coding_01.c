#include <stdio.h>  

int main(){                     

    float score;                                       // ประกาศตัวแปรเก็บคะแนน
        printf("Enter your score is ");                // แสดงผลข้อความ
        scanf("%f", &score);                           // รับค่าคะแนนจากผู้ใช้

    if (score >= 50) {                                 // ตรวจสอบเงื่อนไขว่าคะแนนมากกว่าหรือเท่ากับ 50 หรือไม่
        score = score + (score * 0.05);                // ถ้าเงื่อนไขเป็นจริง เพิ่มคะแนน 5%
        printf("Your total score is %.2f\n", score);   // แสดงผลคะแนนรวม
   
    } else {  
        printf("You failed\n");                        // ถ้าเงื่อนไขเป็นเท็จ แสดงผลข้อความว่าคุณสอบตก
    }
        printf("End of evaluation\n");                 // แสดงผลข้อความสิ้นสุดการประเมินผล
 
    
        return 0;                                      // คืนค่า 0 เพื่อบอกว่าจบการทำงาน
}
