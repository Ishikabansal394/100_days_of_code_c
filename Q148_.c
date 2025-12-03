//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

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
    stud b;
    printf("enter name : ");
    scanf(" %[^\n]",b.name);
    printf("enter roll no.: ");
    scanf("%d",&b.roll_no);
    printf("enter marks : ");
    scanf("%d",&b.marks);
    if(strcmp(a.name,b.name)==0 && a.roll_no==b.roll_no && a.marks==b.marks)
    {
        printf("Same");
    }
    else
    {
        printf("Not Same");
    }
    return 0;
}
