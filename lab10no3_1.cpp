#include <stdio.h> 
#include <stdlib.h> 

struct Books { 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook; 

void DisplayData(struct Books CBook); 

int main() { 
    printf("Enter Book ID :");      
    //เติม: &ComputerBook.BookID เพื่อรับค่าเลขเป็นจำนวนเต็ม
    scanf("%d", &ComputerBook.BookID); 
    
    printf("Enter Book Title :");   
    scanf("%s", ComputerBook.BookTitle); 
    
    DisplayData(ComputerBook); //ส่งข้อมูลไปยังฟังก์ชัน DisplayData 
    return 0; 
} 

void DisplayData(struct Books CBook) { 
 //เติม: CBook.BookID และ CBook.BookTitle เพื่อแสดงค่าจากพารามิเตอร์ที่รับมา
    printf("Book ID : %d \n", CBook.BookID); 
    printf("Book Title : %s \n", CBook.BookTitle); 
}
//void DisplayData(struct Books CBook) คือ ฟังก์ชันที่ใช้แสดงข้อมูลของหนังสือ โดยรับข้อมูลแบบโครงสร้าง struct Books เข้ามาเป็นพารามิเตอร์
//พารามิเตอร์ที่รับเข้ามา struct Books CBook


