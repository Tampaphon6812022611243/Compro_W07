#include <stdio.h>

int main(){
    
    int Memberlevel;

    printf("Enter membership level (1-4): ");
    scanf("%d" ,&Memberlevel);

    if (Memberlevel == 1){
    printf("Silver Member → 5%% discount");
    } else if (Memberlevel == 2){
    printf("Gold Member → 10%% discount + Reward points");
    } else if (Memberlevel == 3){
    printf("Platinum Member → 15%% discount + Reward points + Birthday gift");
    } else if (Memberlevel == 4){
        printf("Diamond Member → ได้ทุกอย่าง + VIP events");
    } else {
        printf("Invalid membership level");
    }

    return 0;

    // สำหรับผม 2 วิธีนี้ทำงานได้ค่อนข้างคล้ายกันมากวิธีเขียนคล้ายๆกัน แต่ Switch case ใช้ง่ายกว่าและเขียนน้อยกว่าสำหรับโจทย์ที่ให้มา if else ควรใช้ในกรณีที่ซับซ้อนหลายเงื่อนไข ใช้กับโค้ดที่มีหลายๆอย่างมารวมกันหลายๆตัวแปร if else จะตอบโจทย์มากกว่า
    // ส่วน Switch case ควรใช้กับสิ่งที่เรียบง่ายเรียงกันไม่ซับซ้อนมากเป็นลำดับจะตอบโจทย์กับผู้ใช้มากกว่า ขึ้นอยู่กับดุลพินิจของผู้ใช้ด้วย 
    //สรุปง่ายๆ ถ้าเงื่อนไขมี มากกว่า/น้อยกว่า หรือซับซ้อน ให้ใช้ if ครับ แต่ถ้าเป็นการเช็คว่า "ตัวแปรนี้เท่ากับค่าไหนในลิสต์" ให้ใช้ switch จะอ่านง่ายและสะดวกกว่าครับ




}