//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;      
    struct Student *ptr;  

    ptr = &s;              

    scanf(" %[^ ] %d %d", ptr->name, &ptr->roll_no, &ptr->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d", 
           ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}
