#include <stdio.h>
#include <math.h>

int print_tree_crown(int crown_rows)
{
	int spaces_length = crown_rows - 1;
	int row_chars = 1;
	
	while (spaces_length >= 0) {
		for (int i = 0; i < spaces_length; i++) {
			printf(" ");
		}
		for (int i = 1; i <= row_chars; i++) {
			printf("*");
		}
		printf("\n");
		
		spaces_length--;
		row_chars = row_chars + 2;
	}
	
	return row_chars;
}

void print_tree_stem(int crown_rows, int max_crown_chars)
{
	const int stem_rows = floor(crown_rows / 2);
	const int stem_chars = ceil(max_crown_chars / 2) + 1;
	const int center_index = ceil(stem_chars / 2);
	const int spaces_length = (max_crown_chars - stem_chars) / 2;
	
	int has_different_center = 1;
	
	char *stem_char = "H";
	
	for (int i = 1; i <= stem_rows; i++) {
		for (int i = 1; i < spaces_length; i++) {
			printf(" ");
		}
		if (i % 2 == 0) {
			stem_char = "Z";
			has_different_center = 0;
		} else {
			stem_char = "H";
			has_different_center = 1;
		}
		for (int j = 0; j < stem_chars; j++) {
			if (has_different_center == 1 && j == center_index) {
				printf("O");
			} else {
				printf(stem_char);
			}
		}
		printf("\n");
	}
}

void print_christmas_tree(int crown_rows)
{
	const int max_crown_chars = print_tree_crown(crown_rows);
	
	print_tree_stem(crown_rows, max_crown_chars);
}

int main()
{
	print_christmas_tree(4);
	return 0;
}
