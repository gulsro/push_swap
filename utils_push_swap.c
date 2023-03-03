#include "push_swap.h"

void displayStack(stack *aStack)
{
        node *temp;

        temp = aStack->top;
        if (aStack->size > 0)
        {
                printf("The stack:\n");
                while (temp)
                {
                        printf("%d\n", temp->data);
                        temp = temp->next;
                }
        }
        else
                printf("The stack is empty.\n");
}

void displayStackFromEnd(stack *aStack)
{
        node    *temp;

        temp = aStack->end;
        if (aStack->size > 0)
    {
        printf("The stack:\n");
                while (temp && temp->prev)
        {
            printf("%d\n", temp->data);
            temp = temp->prev;
        }
        }
    else
        printf("The stack is empty.\n");
}

node	*lastNode(stack *aStack)
{
	node	*temp;

	temp = aStack->top;
	while (temp->next)
	{
		temp = temp->next;
	}
	return temp;
}

void doublyMaker(stack *aStack)
{
        node    *current;
        node    *past;

        if (aStack->top == NULL)
        {
                printf("Converting to doubly linked list failed");
                return ;
        }
        else
        {
                current = aStack->top;
                past = createNode(0);
                if (!past)
                        return ;
                past->next = NULL;
                while (current)
                {
                        current->prev = past;
                        past = current;
                        current = current->next;
                }
                aStack->end = past;
        }
}

int	biggestNum(stack *aStack)
{
	int		big;
	node	*temp;

	
	temp = createNode(0);
	if (!temp)
		return 0;
	temp = aStack->top;
	big = temp->data;
	while (temp->next)
	{
	//	temp = temp->next;
		if (temp->next->data > big)
		{
			big = temp->next->data;
		}
		temp = temp->next;
	}	
	return big;
}

