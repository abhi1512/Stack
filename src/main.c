/*
 * main.c
 *
 *  Created on: 10-Mar-2020
 *      Author: abhikhapre
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
	/************************  Stack operations using array ************************/

	_stack *stack=NULL;
	printf("Stack operations\n");
	createStack(&stack, 10);
	push(stack, 1);
	push(stack, 2);
	pop(stack);
	push(stack, 3);
	push(stack, 4);
	push(stack, 5);
	peek(stack);
	pop(stack);
	pop(stack);
	pop(stack);
	peek(stack);

	/********************************************************************************/

	return 0;
}

