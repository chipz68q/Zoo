#include <stdio.h>
#include <stdlib.h>

struct Hippo
{
	int id;
};

struct Hippo *hippo_create(void)
{
	static int id;
	struct Hippo *hippo;

	printf("Gloria\n");
	hippo = (struct Hippo *) malloc(sizeof(struct Hippo));
	hippo->id = id++;
	return hippo;
}

void hippo_destroy(struct Hippo *hippo)
{
	free(hippo);
}
