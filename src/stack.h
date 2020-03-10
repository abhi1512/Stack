/*
 * stack.h
 *
 *  Created on: 10-Mar-2020
 *      Author: abhikhapre
 */

#ifndef STACK_H_
#define STACK_H_

typedef struct{
	int capacity;
	int top;
	int *element;
}_stack;

void createStack(_stack **stack, int size);
void push(_stack *stack, int element);
void pop(_stack *stack);
void peek(_stack *stack);
int isFull(_stack *stack);
int isEmpty(_stack *stack);

#endif /* STACK_H_ */
