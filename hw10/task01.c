#include <stdio.h>

int main(void)
{
    int x = 1;
char *b = (char*)&x;
if (b[0] == 1) printf("little-endian\n");
else           printf("big-endian\n");
    return 0;
}
