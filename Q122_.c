//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
// The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE* ptr=fopen("info.txt","r");
    if(ptr == NULL)
    {
        printf("error creating file");
        //return 0;
        exit(-1);
    } 
    char str[70];
    /*if (fgets(str,70,ptr) != NULL)
    {
        printf("%s",str);
    }*/
    while(fgets(str,70,ptr) != NULL)
    {
        printf("%s",str);
    }
    return 0;
}