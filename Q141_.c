//Q141: Define a structure Student with name, roll_no, and marks, 
// then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct student {
        char name[50];
        int roll_no;
        int marks;
    } stud;
    stud a;
    printf("enter name : ");
    scanf("%[^\n]",a.name);
    printf("enter roll no.: ");
    scanf("%d",&a.roll_no);
    printf("enter marks : ");
    scanf("%d",&a.marks);
    printf("Name: %s | Roll: %d | Marks: %d",a.name,a.roll_no,a.marks);
    return 0;
}