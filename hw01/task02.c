#include <stdio.h>
#include <string.h>

int is_exception(char *word_start, int word_length)
{
	const char *exceptions[] = {"to", "a", "an", "the"}; 
	const int exceptions_length = sizeof(exceptions) / sizeof(exceptions[0]);
	
	for  (int i = 0; i < exceptions_length; i++) {
		if (strncasecmp(word_start, exceptions[i], word_length) == 0) {
			return 1;
		}
	}
	
	return 0;
}

void print_stairs(char *text)
{
	int c = 0;
	int row_index = 0;
	int word_length = 0;
	char *word_start = &text[c];
	int same_row = 0;
	
	while (text[c] != '\0') {
		while (text[c] != ' ') {
			if (word_length == 0) {
				word_start = &text[c];
			}
			c++;
			word_length++;
					
			if (text[c] == '\0') break;
		}
		
		if (word_length != 0) {
			if (row_index != 0 && same_row == 0) {
				printf("\n");
				for (int i = 0; i < row_index; i++) {
					printf("  ");
				}
			}
			
			printf("%.*s ", word_length, word_start);
			
			if (is_exception(word_start, word_length)) {
				same_row = 1;
			} else {
				row_index++;
				same_row = 0;
			}
			word_length = 0;
			
		}
		
		c++;
	}
	
	printf("\n");
}

int main()
{
	print_stairs("Let's go to walk");
	return 0;
}
