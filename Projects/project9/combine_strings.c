//Cameron Cobb
//CS135
//combine_strings.c

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 30

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

int strlength(const char *s){
    int count = 0;
    for(; *s != '\0'; s++){
        count++;
    }
    return count;
}

char *intersperce(char *str1, char *str2){
    char *array = malloc(strlength(str1) + strlength(str2) + 1);
    int k=0,i;
    for(i=0;str1[i] !='\0' && str2[i] !='\0';i++) {
         array[k++] = str1[i];
         array[k++] = str2[i];
    }
    array[k]='\0';
    if (str1[i] != '\0') {
           strcopy(&array[k], &str1[i]);
    } else if (str2[i] != '\0') {
            strcopy(&array[k], &str2[i]);
    }
    return array;
    free(array);
}

char *widen_stars(char *str1, char *str2){
	


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

int main(int argc, char *argv[]){
    char string1[SIZE], string2[SIZE];
    int index = 0;
    for(index = 0; index < argc; ++index){
        if(strcomp(argv[index], "-i") == 0){
                printf("Please enter a string of maximum 30 characters: ");
                scanf("%s", string1);
                printf("Please enter a string of maximum 30 characters: ");
                scanf("%s", string2);
                printf("The combined string is: %s", intersperce(string1, string2));
        }
        else if(strcomp(argv[index], "-w") == 0){
                printf("Please enter a string of maximum 30 characters: ");
                scanf("%s", string1);
                printf("Please enter a string of maximum 30 characters: ");
                scanf("%s", string2);
                printf("The combined string is: %s", widen_stars(string1, string2));
        }
    return 0;
    }
}
