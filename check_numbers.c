#include "push_swap.h"

int checkElemsRepeat(stack *aStack)
{
        node    *temp;
        node    *next_temp;

        temp = aStack->top;
        while (temp)
        {
                next_temp = temp->next;
                while (next_temp)
                {
                        if (temp->data == next_temp->data)
                        {
                                exit(1);
                        }
                        next_temp = next_temp->next;
                }
                temp = temp->next;
        }
        return 1;
}

int checkIfSorted(stack *aStack)
{
	node	*temp;

	temp = aStack->top;
	while (temp->next)
	{
		if (temp->next->data < temp->data)
			return 0;
		else
			temp = temp->next;
	}
	return 1;
}
