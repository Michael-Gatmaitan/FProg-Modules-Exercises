#include <stdio.h>
#define NAME_MAXLIMIT 50
#define DOB_MAXLIMIT 30

int main() {
    char name[NAME_MAXLIMIT];
    char dob[DOB_MAXLIMIT];
    char mobile[15];
    /*
        Note: The fget function allows the
        computer to accept spaces in inputs.
    */

    printf("Input your name: ");
    fgets(name, NAME_MAXLIMIT, stdin);

    printf("Input your Date of Birth: ");
    fgets(dob, DOB_MAXLIMIT, stdin);

    printf("Input your mobile number: ");
    scanf("%s", &mobile);

    printf("\n\nName: %s", name);
    printf("DOB: %s", dob);
    printf("Mobile: %s", mobile);

    return 0;
}
