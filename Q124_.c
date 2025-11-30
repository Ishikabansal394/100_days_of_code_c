//Q124: Take two filenames from the user – a source file and a destination file. 
//Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include<stdio.h>
#include<string.h>
int main()
{
     FILE* source_ptr=fopen("sample.txt","r");
    if(source_ptr == NULL)
    {
        printf("no source file exist");
        return 0;
    } 
    FILE* destination_ptr=fopen("destination.txt","w");
    if(destination_ptr == NULL)
    {
        printf("no source file exist");
        return 0;
    } 

    char str;
   
    while((str=fgetc(source_ptr)) != EOF)
    {
        fputc(str,destination_ptr);
    }
    return 0;
}
