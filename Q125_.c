//Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
// Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr= fopen("data.txt","a");
    if(ptr == NULL)
    {
        printf("file do not exist");
        return 0;
    }
    fputs("\nThis is appended data",ptr);
    printf("File updated successfully");
    return 0;
}