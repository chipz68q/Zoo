#include <stdio.h>
#include <stdlib.h>

struct Penguin
{
	int id;
};

struct Penguin *penguin_create(void)
{
	static int id;
	struct Penguin *penguin;

	printf("Skipper\n");
	penguin = (struct Penguin *) malloc(sizeof(struct Penguin));
	penguin->id = id++;
	return penguin;
}

void penguin_destroy(struct Penguin *penguin)
{
	free(penguin);
}
