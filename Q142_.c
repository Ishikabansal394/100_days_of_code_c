//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

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
    stud arr[5];
    for (int i=0; i<5; i++)
    { 
    
    printf("enter name : ");
    scanf(" %[^\n]",arr[i].name);
    printf("enter roll no.: ");
    scanf("%d",&arr[i].roll_no);
    printf("enter marks : ");
    scanf("%d",&arr[i].marks);
    }
    for(int i=0; i<5; i++)
    {
    printf("Name: %s | Roll: %d | Marks: %d\n",arr[i].name,arr[i].roll_no,arr[i].marks);
    }
    return 0;
}