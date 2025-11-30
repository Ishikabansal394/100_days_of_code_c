//Q127: Write a program that reads text from input.txt, 
// converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE* input=fopen("input.txt","r");
    if(input == NULL)
    {
        printf("input file do not exist");
        return 0;
    }
    FILE* output=fopen("output.txt","r+");
    if(output == NULL)
    {
        printf("output file cant be created");
        return 0;
    }
    char c;
    while(((c=fgetc(input)) != EOF))
    {
        if(97<=c && 122>=c)
        {
            c = (int)c-32;

        }
        fputc(c,output);
            
    }
    fclose(input);
    fclose(output);
    return 0;
}