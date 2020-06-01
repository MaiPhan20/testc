#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int i;
void to_upper(char s[])
{
    for ( i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
}
int main()
{
    char s[50];
    int i;
    printf("\nEnter a string : ");
    gets(s);
    to_upper(s);
    printf("\nupper case = %s", s);
    return 0;
}
