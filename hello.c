#include <stdio.h> 
#include <string.h> 

int main() { 

    char word[] = "infrastructure"; 

    printf("Hello!\n"); 

    for (int i = strlen(word) - 1; i >= 0; i--) putchar(word[i]); 

    printf("\n"); 

    return 0; 

} 