/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number elements
 */
void reverse_array(int *a, int n)
{
	short aux, j = 0;

	n -= 1;
	for (j = 0; j < n; n--, j++)
	{
		aux = a[j];
		a[j] = a[n];
		a[n] = aux;
	}
}
