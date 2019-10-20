int array_using_static_allocation(int *result_count)
{
	result_count = 5;
	static int a[5] = {1, 2, 3, 4, 5};
	return a;
}
int array_using_dynamic_allocation(int *result_count)
{
	result_count = 5;
	int *a = malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++)
	{
		(a + i) = i + 1;
	}
}
return a;
