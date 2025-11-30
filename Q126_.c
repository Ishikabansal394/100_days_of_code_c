//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. 
//If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char file[50];
    printf("enter filename : ");
    scanf("%[^\n]",file);
    FILE* ptr= fopen(file,"r");
    if(ptr == NULL)
    {
        printf("file do not exist");
        return 0;
    }
    else
    {
        printf("File opened successfully\n");
        char line[90];
        while(fgets(line,90,ptr) != NULL)
        {
            printf("%s\n",line);
        }

    }
    return 0;
}
