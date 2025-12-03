//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include<stdio.h>
struct student {
        char name[50];
        int roll_no;
        int marks;
    };
void getdet(struct student arr[])
{
   for (int i=0; i<3; i++)
    { 
    
    printf("enter name : ");
    scanf(" %[^\n]",arr[i].name);
    printf("enter roll no.: ");
    scanf("%d",&arr[i].roll_no);
    printf("enter marks : ");
    scanf("%d",&arr[i].marks);
    }
    

}
int main()
{
    
    struct student arr[5];
    getdet(arr);
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

    printf("Top Student: ");
    printf("Name: %s | Roll: %d | Marks: %d\n",arr[ind].name,arr[ind].roll_no,arr[ind].marks);
    
    
    return 0;
}
