#include <stdio.h>

//~ void set_digit_counters(char *str_number, int digit_counters[10])
//~ {
    //~ for (int i = 0; i < 10; i++) {
        //~ digit_counters[i] = 0;
    //~ }

    //~ for (int i = 0; str_number[i] != '\0'; i++) {
        //~ if (str_number[i] >= '0' && str_number[i] <= '9')
			//~ digit_counters[str_number[i] - '0']++;
    //~ }
//~ }

void set_digit_counters(char *str_number, int *digit_counters)
{
    for (int *d = digit_counters; d < digit_counters + 10; d++) {
        *d = 0;
    }

    for (char *p = str_number; *p != '\0'; p++) {
        if (*p >= '0' && *p <= '9') digit_counters[*p - '0']++;
    }
} 

//~ void print_digit_counters(int digit_counters[10])
//~ {
    //~ for (int i = 0; i < 10; i++) {
        //~ if (digit_counters[i] != 0)
			//~ printf("%d %d\n", i, digit_counters[i]);
    //~ }
//~ }

void print_digit_counters(int *digit_counters)
{
    int index = 0;
    for (int *d = digit_counters; d < digit_counters + 10; d++, index++) {
        if (*d != 0) printf("%d %d\n", index, *d);
    }
} 

int main(void)
{
    char str_number[1005];
    scanf("%1000s", str_number);

    int digit_counters[10];
    set_digit_counters(str_number, digit_counters);

    print_digit_counters(digit_counters);

    return 0;
}
