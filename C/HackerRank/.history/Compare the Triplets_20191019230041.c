/*
Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from to for three categories: problem clarity, originality, and difficulty. 
*/
int *compareTriplets(int a_count, int *a, int b_count, int *b, int *result_count)
{
	*result_count = 2;
	int alicia_count = 0;
	int bob_count = 0;
	int *result;
	int i;

	result = malloc(2 * sizeof(int));
	for (i = 0; i < a_count; i++)
	{
		if (*(a + i) > *(b + i))
			alicia_count++;
		else if (*(a + i) < *(b + i))
			bob_count++;
	}
	*(result + 0) = alicia_count;
	*(result + 1) = bob_count;
	return (result);
}
