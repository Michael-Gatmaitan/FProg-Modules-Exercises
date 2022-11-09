#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define QUOTA_MAXINPUT 100

/* Function that checks every character in QUOTA value
   if it is includes letters or unwanted characters. */
float quotaChecker(char quota_str[QUOTA_MAXINPUT]) {

    int i, length = strlen(quota_str);
    for (i = 0; i < length; i++) {
        // This will run if we have detect some characters that is not a number.
        if(!isdigit(quota_str[i]))
            return -10101;
    }

    /* If we do not detect ant letters in quota variable
       'atoi(char[])' let us convert that string into number */
    return atoi(quota_str);
}

int main() {

    char name[30];
    char quotaperc_inp[QUOTA_MAXINPUT] = "";
    float quota;
    float target_quota = 100000.00;

    // float incPercent;

    int percent_to_target_quota;
    float incentive;

    // 'fgets(var, int, lib)' allow us to put spaces in user input.
    // 'strtok(var, char[])' avoids breakline that made by fgets.
    printf("Hi seller!\nEnter your Name: ");
    fgets(name, 30, stdin);
    strtok(name, "\n");

    // Input message passage.
    quotaLoop:
    printf("\nEnter your QUOTA PERCENTAGE: ");
    scanf("%s", quotaperc_inp);

    // This is check the quota value if it
    // has unwanted characters
    quota = quotaChecker(quotaperc_inp);

    if (quota <= 0) {
        if (quota == -10101) {
            printf("Invalid input.");
        } else {
            printf("Quota cannot be less than or equal to 0.");
        }

        // This will get us back to the input message.
        goto quotaLoop;
    }

    // Calculating percentage of quota in target quota.
    // incPercent = (quota / target_quota) * 100;

    if (quota > 99) percent_to_target_quota = 60;
    else if (quota > 80) percent_to_target_quota = 50;
    else if (quota >= 61) percent_to_target_quota = 40;
    else if (quota > 40) percent_to_target_quota = 30;
    else if (quota > 20) percent_to_target_quota = 20;
    else percent_to_target_quota = 10;

    // Calculating the incentive value based on quota percentage in target quota.
    incentive = (percent_to_target_quota * target_quota) / 100;

    printf("Hi, %s!\n", name);
    printf("Your quota percentage: %.2f\n", quota);
    printf("Percentage of incentive to quota: %d%c\n", percent_to_target_quota, 37);

    printf("\nYour incentive amount is %.2f\n", incentive);
    return 0;
}
