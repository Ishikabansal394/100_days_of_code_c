//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
//Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    typedef struct details{
        char name[40]; int roll; int marks;
    } det;
    det student1;
    printf("enter student1 name : ");
    scanf("%[^\n]",student1.name);
    printf("enter roll number : ");
    scanf("%d",&student1.roll);
    printf("enter marks : ");
    scanf("%d",&student1.marks);
    det student2;
    getchar();
    printf("enter student2 name : ");
    scanf("%[^\n]",student2.name);
    printf("enter roll number : ");
    scanf("%d",&student2.roll);
    printf("enter marks : ");
    scanf("%d",&student2.marks);
    FILE* ptr=fopen("det.txt","w+");
    if(ptr == NULL)
    {
        printf("program ended without result");
        return 0;
    }
    fprintf(ptr,"%s %d %d\n",student1.name,student1.roll,student1.marks);
    fprintf(ptr,"%s %d %d\n",student2.name,student2.roll,student2.marks);
    rewind(ptr);
    det st1;
    det st2;
    getchar();
    fscanf(ptr, "%s %d %d", st1.name, &st1.roll, &st1.marks);
    fscanf(ptr, "%s %d %d", st2.name, &st2.roll, &st2.marks);
    fclose(ptr);
     printf("Name : %s | Roll : %d | Marks : %d",st1.name,st1.roll,st1.marks);
    printf("Name : %s | Roll : %d | Marks : %d",st2.name,st2.roll,st2.marks);
    return 0;




}