int sortSort(stack *a, stack *b)
{
        node *pivot;
        int count = 0;
        int a_size;

        a_size = a->size;
        if (checkIfSorted(a))
                exit(0);
        while (!checkIfSorted(a))
        {
                pivot = a->end;
                while (pivot != a->top)
                {
                        if (pivot->data > a->top->data)
                        {
                                _pop_push(a, b, "pb");
                                count++;
                        }
                        else
                        {
                                ra(a);
                                count++;
                        }
                        if (b->size > 1 && b->top->data < b->top->next->data)
                        {
                                _swap(b, "sb");
                                count++;
                        }
                }
                if (a->size > 1)
                {
                        _pop_push(a, b, "pb");
                        count++;
                }
                if (a->size == 1)
                        break ;
        }
        while (a->size != a_size)
        {
                _pop_push(b, a, "pa");
                count++;
        }
        if (checkIfSorted(a))
                printf("IT IS SORTED");
        return count;;
}
