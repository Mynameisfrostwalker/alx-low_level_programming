/**
* swap_int - Swaps input 1's and input 2's values
* @a: Input 1
* @b: Input 2
*/

void swap_int(int *a, int *b)
{
	int a1 = *a;
	int b1 = *b;
	*a = b1;
	*b = a1;
}

