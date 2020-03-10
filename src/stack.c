/*
 * stack.c
 *
 *  Created on: 10-Mar-2020
 *      Author: abhikhapre
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void createStack(_stack **stack, int size)
{
	*stack = (_stack*)malloc(sizeof(_stack));
	(*stack)->capacity = size;
	(*stack)->top = -1;
	(*stack)->element = (int*)malloc(sizeof(int)*(*stack)->capacity);
	printf("Stack created with capacity %d\n",(*stack)->capacity);
}

void push(_stack *stack, int element)
{
	if(isFull(stack))
	{
		printf("Stack is at capacity\n");
	}
	else
	{
		stack->top++;
		stack->element[stack->top] = element;
		printf("%d pushed to stack\n",stack->element[stack->top]);
	}
}

void pop(_stack *stack)
{
	if(isEmpty(stack))
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("%d popped from stack\n",stack->element[stack->top]);
		stack->top--;
	}
}

void peek(_stack *stack)
{
	if(isEmpty(stack))
	{
		printf("Stack is empty\n");
	}
	else if(isFull(stack))
	{
		printf("Stack is full\n");
	}
	else
	{
		printf("%d is at top\n",stack->element[stack->top]);
	}
}

int isFull(_stack *stack)
{
	return (stack->top == stack->capacity - 1)? 1 : 0;
}

int isEmpty(_stack *stack)
{
	return (stack->top == -1) ? 1: 0;
}

