#include <stdio.h>

int str_len(char str[]){
    int i =0;
    int count = 0;
    while (str[i] != '\0'){
        i++;
        count++;
    }
    printf ("Length of string = %d\n", count);
    return count;
}

int main (){
    char str[50];

    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    printf("%s\n", str);
    str_len(str);
}