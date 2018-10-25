#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXC 50

int main()
{
    printf("Enter text: ");

    char msg[MAXC]; //= "hello world!\n\n";
    gets(msg);

    //int i;

    //for (i = 0; i < 13; i++)
    //{
    //  printf("%c",msg[i]);
    //}


    if ( islower(msg[0])  )
    {
        msg[0] = toupper(msg[0]);
        printf("Auto-correct: \n %s", msg);
    }
    else
    {
        printf("No auto-correct needed.");
    }

    //printf("Hello world!\n");
    return 0;
}
