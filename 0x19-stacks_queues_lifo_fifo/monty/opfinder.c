#include "monty.h"
/**
 * opfinder - helps find which opcode is being called
 * @opcode: command being found
 * @whichone: list to check for code on
 * Return: Found command
 */
void *opfinder(char *opcode, const list_t *whichone)
{
	opcode = opfinder;

	switch(opfinder)
	{
	case 1: if (opfinder == push)
			return (whichone);
		else break;
	case 2: if (opfinder == pall)
                        return (whichone);
		else break;
	case 3: if (opfinder == pint)
                        return (whichone);
		else break;
	case 4: if (opfinder == pop)
                        return (whichone);
		else break;
	case 5: if (opfinder == swap)
                        return (whichone);
		else break;
	case 6: if (opfinder == add)
                        return (whichone);
		else break;
	case 7: if (opfinder == nop)
                        return (whichone);
		else break;
	}
	return
}
