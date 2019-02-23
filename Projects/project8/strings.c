//Cameron Cobb
//CS135 Project 8
//strings.c

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 21

char *strconcat(char *dest, const char *src){
    char *start = dest;

    while(*dest != '\0'){
        dest++;
    }

    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return start;
}

int strlength(const char *s){
    int count = 0;
    for (; *s != '\0'; s++){
        count++;

    }
    return count;
}

char *strcopy(char *dest, const char *src){
    char *start = dest;

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; // add '\0' at the end
    return start;
}

int strcomp(const char *string1,const char *string2){

    while((tolower(*string1) != '\0' && tolower(*string2) != '\0') && tolower(*string1) == tolower(*string2)){
        string1++;
        string2++;
    }

    if(tolower(*string1) == tolower(*string2)){
        return 0; // strings are identical
    }else if(tolower(*string1) < tolower(*string2)){
        return 1; // string 1 comes first
    }else{
        return -1; // string 2 comes first
    }
}

int main(){
    char string1[SIZE], string2[SIZE], tempstring[SIZE];
    int result;
    printf("Please enter the first string: ");
    scanf("%s", string1);
    printf("Please enter the second string: ");
    scanf("%s", string2);
    result = strcomp(string1, string2);

    if(result == 0){
       printf("The two strings are the same.\n");
    }

    printf("The length of string 1 is: %d", strlength(string1));
    printf("\nThe length of string 2 is: %d", strlength(string2));

    if(result == 1){
        printf("\nString 1 comes before string 2 alphabetically.");
    }else if(result == -1){
        printf("\nString 2 comes before string 1 alphabetically.");
    }

    printf("\nString 1 after concatenation: %s", strconcat(tempstring, string1));
    printf("\nString 2 after concatenation: %s", strconcat(string2, string1));
    printf("\nString 1 after copying: %s", strcopy(string2, string1));
    printf("\nString 2 after copying: %s", strcopy(tempstring, string2));

    return 0;
}
