#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char text[100];

    printf("Enter text: ");
    gets(text);

    int i;
    int n = strlen(text);

    for (i = n; i <= 0; i--)
    {
        printf("%c", text[i]);
        
    }

    return 0;
}
