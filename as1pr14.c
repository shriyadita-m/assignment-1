#include<stdio.h>
int main(){
    int character;
    char letter;

    printf("Enter the character:    "); scanf("%c", &letter);
    printf("The ASCII value of the character is = %d\n", letter);

    if (character = letter>='A' && letter<='Z') {
    printf("given character is UPPERCASE\n"); }
    else if (character= letter>='a' && letter<='z'){
        printf("Given character is LOWERCASE\n");
    }
    else if(character = letter>='0' && letter<='9'){
        printf("Given character is a NUMBER\n");
    }
    else {
        printf("Given character is a SPECIAL SYMBOL\n");
        }
        return 0;

    }