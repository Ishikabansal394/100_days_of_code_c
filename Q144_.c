//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include<stdio.h>
struct student {
        char name[50];
        int roll_no;
        int marks;
    };
void getdet(struct student *s)
{

    printf("enter name : ");
    scanf(" %[^\n]",s->name);
    printf("enter roll no.: ");
    scanf("%d",&s->roll_no);
    printf("enter marks : ");
    scanf("%d",&s->marks);
    
}
int main()
{
    
    struct student s;
    getdet(&s);
    printf("Name: %s | Roll: %d | Marks: %d",s.name,s.roll_no,s.marks);
    return 0;
}
