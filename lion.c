#include <stdio.h>
#include <stdlib.h>

struct Lion
{
	int id;
};

struct Lion *lion_create(void)
{
	static int id;
	struct Lion *lion;

	printf("Alex\n");
	lion = (struct Lion *) malloc(sizeof(struct Lion));
	lion->id = id++;
	return lion;
}

void lion_destroy(struct Lion *lion)
{
	free(lion);
}
