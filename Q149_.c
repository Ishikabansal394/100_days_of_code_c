//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    typedef struct student {
        char name[50];
        int roll_no;
        int marks;
    } stud;
    
    stud *a = (stud *)malloc(sizeof(stud));
    
    printf("enter name : ");
    scanf(" %[^\n]",a->name);
    printf("enter roll no.: ");
    scanf("%d",&a->roll_no);
    printf("enter marks : ");
    scanf("%d",&a->marks);
    
    printf("Name: %s | Roll: %d | Marks: %d",a->name,a->roll_no,a->marks);
    
    free(a);
    return 0;
}