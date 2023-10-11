/**
 * int_index - function that searches for an interger
 * @array: an araay of intergers
 * @cmp: Pointer to a function to be used to compare
 * values
 * @size: size of the array
 * Return: returns index of first element for which
 * cmp does not retun 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
