#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
#define TRUE 1
#define FALSE 0

typedef int Bool;

void make_empty(void);
Bool is_empty(void);
Bool is_full(void);
void push(int i);
int pop(void);

int contents[STACK_SIZE];
int *top_ptr = contents;

int main() {
	return 0;
}

void make_empty(void)
{
  top_ptr = contents;
}

Bool is_empty(void)
{
  return top_ptr == contents;
}

Bool is_full(void)
{
  return top_ptr == &contents[STACK_SIZE];
}

void push(int i)
{
  if (is_full()) {
    printf("Error in push: stack is full.\n");
    exit(EXIT_FAILURE);
  }
  *top_ptr++ = i;
}

int pop(void)
{
  if (is_empty()) {
    printf("Error in pop: stack is empty.\n");
    exit(EXIT_FAILURE);
  }
  return *--top_ptr;
}

