/**
 * 
 *
 *
 */
#include "lists.h"
size_t print_list(const list_t *h)
{
	char *str;
	unsigned int len;
	struct list_s *next;

	while (h != NULL)
	{
		printf("%d -> ", h -> str);
		       h = h -> next;
	}
	printf("[0] (nil)");
} list_t;
