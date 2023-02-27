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

int checkElemsRepeat(stack *aStack)
{
	node	*temp;
	node	*next_temp;

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
