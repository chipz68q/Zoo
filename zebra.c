#include <stdio.h>
#include <stdlib.h>

struct Zebra
{
	int id;
};

struct Zebra *zebra_create(void)
{
	static int id;
	struct Zebra *zebra;

	printf("Marti\n");
	zebra = (struct Zebra *) malloc(sizeof(struct Zebra));
	zebra->id = id++;
	return zebra;
}

void zebra_destroy(struct Zebra *zebra)
{
	free(zebra);
}
