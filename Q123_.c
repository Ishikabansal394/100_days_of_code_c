//Q123: Read a text file and count the total number of characters, words, and lines. 
//A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr=fopen("sample.txt","r");
    if(ptr == NULL)
    {
        printf("File do not exist");
        return 1;
    }
    char c;
    int ch=0;
    while((c = fgetc(ptr)) != EOF)
    {
        ch++;
    }
    rewind(ptr);
    printf("%d\n",ch);
    char w[20];
    int word=0;
    while((fscanf(ptr,"%s",w)) == 1)
    {
        word++;
    }
    
rewind(ptr);

    printf("%d\n",word);
    char str[100];
    int lines=0;
    while(fgets(str,100,ptr) != NULL)
    {
        lines++;
    }
    printf("%d",lines);
}
