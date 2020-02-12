#include <stdio.h>
#include <ctype.h>
void main()
{
//int c;
//while ((c = getchar()) !='\n')
//putchar(toupper(c));

//printf("\t%0.4d\n", 1);
//printf("\t%0.4d\n", 12345678);
//printf("%d\n", (int)1.23456);
//printf("%d\n", sizeof(1.95f));

char s1[] = "COM4521";
int module;
char buffer[32];
sscanf(s1, "COM%d", &module);
sprintf(buffer, "COM%d is awesome!", module);

}
