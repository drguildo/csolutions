#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 6
#define TRUE 1
#define FALSE 0

typedef int Bool;

int top = 0;
char contents[STACK_SIZE];

Bool is_empty(void);
Bool is_full(void);
void push(char ch);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);
void not_nested(void);

int main(void) {
	char ch;

	printf("Enter parentheses and/or braces: ");

	while((ch = getchar()) != '\n') {
		switch(ch) {
			case '(':
			case '{':
				push(ch);
				break;
			case ')':
				if(pop() == '(')
					;
				else
					not_nested();
				break;
			case '}':
				if(pop() == '{')
					;
				else
					not_nested();
				break;
			default:
				not_nested();
		}
	}

	if(is_empty()) {
		printf("Parentheses/braces are nested properly\n");
		return 0;
	}	else {
		printf("Parentheses/braces are not nested properly\n");
		return -1;
	}
}

Bool is_empty(void) {
	return top == 0;
}

Bool is_full(void) {
	return top == STACK_SIZE;
}

void push(char ch) {
	if (is_full()) {
		stack_overflow();
		return;
	}
	contents[top++] = ch;
}

char pop(void) {
	if (is_empty()) {
		stack_underflow();
	}
	return contents[--top];
}

void stack_overflow(void) {
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

void stack_underflow(void) {
	printf("Stack underflow\n");
	exit(EXIT_FAILURE);
}

void not_nested(void) {
	printf("Parentheses/braces are not nested properly\n");
	exit(EXIT_FAILURE);
}

