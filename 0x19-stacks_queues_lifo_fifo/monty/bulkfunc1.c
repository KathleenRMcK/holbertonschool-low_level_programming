#include "monty.h"

/**
 * oppall - print all values on stack
 * @checker: location
 * @whichone: finding information
 * Return: Output
 */
void oppall(unsigned int checker, const list_t *whichone)
{
	stack_t *stack;

	(void) checker;
	while (stack)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}

/**
 * oppint - print value at top of stack
 * @checker: location
 * @whichone: finding information
 * Return: Output
 */
void oppint(unsigned int checker, const list_t *whichone)
{
	if (*whichone)
		printf("5d\n", (*whichone)->n);
	else
	{
	dprint(STDERR_FILENO, "L%u: can't pint, stack empty\n", checker);
	free_all(whichone);
	exit(EXIT_FAILURE);
	}
}

/**
 * oppop - pop top element
 * @checker: location
 * @whichone: finding information
 * Return: Output
 */
void oppop(unsigned int checker, const list_t *whichone)
{
	stack_t *stack;

	if (*whichone)
	{
		stack = *whichone;
		if ((*whichone)->next)
			(*whichone)->next->prev = NULL;
		*whichone = (*whichone)->next;
		free(stack);
	}
	else
	{
	dprint(STDERR_FILENO, "L%u: can't pop an empty stack\n", checker);
	free_all(whichone);
	exit(EXIT_FAILURE);
	}
}

/**
 * opswap - swap top two elements
 * @checker: location
 * @whichone: finding information
 * Return: Output
 */
void opswap(unsigned int checker, const list_t *whichone)
{
	int helper;

	if (*whichone && (*whichone)->next)
	{
		helper = (*whichone)->n;
		(*whichone)->n = (*whichone)->next->n;
		(*whichone)->next->n = helper;
	}
	else
	{
		dprint(STDERR_FILENO, "L%u: can't swap, stack too short\n", checker);
		free_all(whichone);
		exit(EXIT_FAILURE);
	}
}
