/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number elements
 */
void reverse_array(int *a, int n)
{
	short aux, i = 0;

	for (; i < n; i++)
	{
		aux = a[i];
		a[i] = a[n - 1];
		a[n - 1] = aux;
		n--;
	}
}
