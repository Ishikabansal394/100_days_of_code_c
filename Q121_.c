//Q121: Write a C program that creates a text file named info.txt in write mode. 
// The program should take the user’s name and age as input, and write them to the file using fprintf(). 
// After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr= fopen("info.txt","w");
    printf("enter user name :");
    char n[50];
    scanf("%[^\n]",n);
    printf("enter age :");
    int a;
    scanf("%d",&a);
    fprintf(ptr, "Name = %s, Age = %d", n,a);
    printf("File created successfully! Data written to info.txt")
    fclose(ptr);



}