#include<stdio.h>
int main(){
    int alph;
    char letter;
    
    printf("Enter the value: "); scanf("%c", &letter);
    printf("The ASCII value of the letter is : %d \n", letter);

    alph = (letter>='a' && letter<='z')? printf("given alphabet is LOWERCASE\n") 
    : printf("given alphabet is UPPERCASE");
//cv == '6'
    return 0;

}