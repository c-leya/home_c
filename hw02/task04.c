#include <stdio.h>
#include <string.h>

void print_end(char *end, int is_end)
{
	if (is_end == 1) {
		printf(end);
		printf("\n");
	}
}

void print_cell_border(char *content, int is_end)
{
	char *line = "-";
	char *corner = "+";
	const int content_length = strlen(content);
	
	printf(corner);
	
	printf(line);
	for (int i = 1; i <= content_length; i++) {
		printf(line);
	}
	printf(line);
	
	print_end(corner, is_end);
}

void print_cell(void (*print_cell_content)(char*, char*), int is_end) {
	char *line = "|";
	char *space = " ";
	
	printf(line);
	printf(space);
	
	print_cell_content(space, line);
	
	printf(space);
	
	print_end(line, is_end);
}

void print_head_cell(char *content, int is_end)
{
	void print_cell_content(char *space, char *line) { printf(content); }
	print_cell(print_cell_content, is_end);
}

void print_body_cell(char *expression, int content, int is_end)
{
	void print_cell_content(char *space, char *line) { 
		const int space_length = strlen(expression) - 1;
		
		printf("%d", content);
		for (int i = 1; i <= space_length; i++) {
			printf(space);
		} 
	}
	print_cell(print_cell_content, is_end);
}

void print_border(char *a, char *b, char *left_expression, char *right_expression)
{
	print_cell_border(a, 0);
    print_cell_border(b, 0);
	print_cell_border(left_expression, 0);
	print_cell_border(right_expression, 1);
}

void print_head_content(char *a, char *b, char *left_expression, char *right_expression)
{
	print_head_cell(a, 0);
    print_head_cell(b, 0);
	print_head_cell(left_expression, 0);
	print_head_cell(right_expression, 1);
}

void print_body_content(char *a, char *b, int a_bool, int b_bool, char *left_expression, char *right_expression, int left_result, int right_result)
{
	print_body_cell(a, a_bool, 0);
    print_body_cell(b, b_bool, 0);
	print_body_cell(left_expression, left_result, 0);
	print_body_cell(right_expression, right_result, 1);
}

void print_head(char *a, char *b, char *left_expression, char *right_expression)
{
	print_border(a, b, left_expression, right_expression);
	print_head_content(a, b, left_expression, right_expression);
	print_border(a, b, left_expression, right_expression);
}

int print_body(char *a, char *b, char *left_expression, char *right_expression, int (*left_check)(int, int), int (*right_check)(int, int))
{
	int is_true = 1;
	
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {
			int left_result = left_check(i, j);
			int right_result = right_check(i, j);
			
			if (is_true == 1 && left_result != right_result) {
					is_true = 0;
			}
			
			print_body_content(a, b, i, j, left_expression, right_expression, left_result, right_result);
			print_border(a, b, left_expression, right_expression);
		}
	}
	
	return is_true;
}

void print_ab_table(char *a, char *b, char *left_expression, char *right_expression, int (*left_check)(int, int), int (*right_check)(int, int))
{	
    print_head(a, b, left_expression, right_expression);
    const int table_result = print_body(a, b, left_expression, right_expression, left_check, right_check);
    
    if (table_result == 1) {
		printf("true\n");
	} else {
		printf("false\n");
	}
}

int main()
{
	int left_check1(int a, int b) { return !(a == 1 && b == 0); }
	int right_check1(int a, int b){ return a == 0 || b == 1; }
	
    print_ab_table("A", "B", "A -> B", "!A || B", left_check1, right_check1);
    
    printf("\n");
    
    int left_check2(int a, int b) { return a == b; }
	int right_check2(int a, int b){ return (a == 1 && b == 1) || (a == 0 && b == 0); }
	
    print_ab_table("A", "B", "A <-> B", "(A && B) || (!A && !B)", left_check2, right_check2);
    
    return 0;
}
