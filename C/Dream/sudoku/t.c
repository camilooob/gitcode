int array_using_static_allocation(int *result_count)
{
	result_count = 5;
	static int a[5] = {1, 2, 3, 4, 5};
	return (a);
}
