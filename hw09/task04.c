#include <stdio.h>

//~ void print_digit(char s[])
//~ {
    //~ int digit_counters[10] = {0};

    //~ for (int i = 0; s[i] != '\0'; i++) {
        //~ if (s[i] >= '0' && s[i] <= '9') digit_counters[s[i] - '0']++;
    //~ }

    //~ for (int i = 0; i < 10; i++) {
        //~ if (digit_counters[i] != 0) printf("%d %d\n", i, digit_counters[i]);
    //~ }
//~ }

void print_digit(char *s)
{
    int digit_counters[10] = {0};

    for (char *p = s; *p != '\0'; p++) {
        if (*p >= '0' && *p <= '9') digit_counters[*p - '0']++;
    }

    int index = 0;
    for (int *d = digit_counters; d < digit_counters + 10; d++, index++) {
        if (*d != 0) printf("%d %d\n", index, *d);
    }
} 

int main(void)
{
    char str[1005];
    scanf("%1000[^\n]", str);

    print_digit(str);

    return 0;
}
