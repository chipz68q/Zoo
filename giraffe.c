#include <stdio.h>
#include <stdlib.h>

struct Giraffe
{
	int id;
};

struct Giraffe *giraffe_create(void)
{
	static int id;
	struct Giraffe *giraffe;

	printf("Melman\n");
	giraffe = (struct Giraffe *) malloc(sizeof(struct Giraffe));
	giraffe->id = id++;
	return giraffe;
}

void giraffe_destroy(struct Giraffe *giraffe)
{
	free(giraffe);
}
