//Q128: Read a text file and count how many vowels and consonants are in the file. 
// Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr= fopen("sample.txt","r");
    if(ptr == NULL)
    {
        printf("file do not exist");
        return 0;
    }
    char c;
    int vow=0,cons=0;
    while ( (c=fgetc(ptr)) != EOF)
    {
        if(c >= 'a' && c<= 'z')
        {
            if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
            {
               vow++;
            }
            else
            {
                cons++;
            }
        }
         else if(c >= 'A' && c<= 'Z')
        {
            if(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U')
            {
               vow++;
            }
            else
            {
                cons++;
            }
        }
    }
    printf("vowels = %d\nconsonants = %d",vow,cons);

    fclose(ptr);
    return 0;
}