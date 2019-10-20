*result_count = 2;
int alicia_count = 0;
int bob_count = 0;
int *result;
int i;

result = malloc(2 * sizeof(int));
for (i = 0; i < alicia_count; ++i)
{
	if (*(a + i) > *(b + i))
		++alicia_count;
	else if (*(a + i) < *(b + i))
		++bob_count;
	else
		;
}
*(result + 0) = alicia_count;
*(result + 1) = bob_count;
return (result);
