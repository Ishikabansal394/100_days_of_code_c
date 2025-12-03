//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

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
    stud arr[3];
    for (int i=0; i<3; i++)
    { 
    
    printf("enter name : ");
    scanf(" %[^\n]",arr[i].name);
    printf("enter roll no.: ");
    scanf("%d",&arr[i].roll_no);
    printf("enter marks : ");
    scanf("%d",&arr[i].marks);
    }
    int max=-1;
    int ind;
    for(int i=0; i<5; i++)
    {
      if(arr[i].marks>max)
      {
        max=arr[i].marks;
        ind=i;
      }
    }

    
    printf("Name: %s | Roll: %d | Marks: %d\n",arr[ind].name,arr[ind].roll_no,arr[ind].marks);
    
    return 0;
}