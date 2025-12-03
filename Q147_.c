//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, r;
    FILE *fp;

    scanf("%s %d %f", e.name, &e.id, &e.salary);

    fp = fopen("emp.bin", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("Employee details entered and stored in file.\n");

    fp = fopen("emp.bin", "rb");
    fread(&r, sizeof(r), 1, fp);
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f", r.name, r.id, r.salary);

    return 0;
}
