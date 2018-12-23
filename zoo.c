#include <stdio.h>

struct Zebra;
struct Zebra *zebra_create(void);
void zebra_destroy(struct Zebra *zebra);

struct Hippo;
struct Hippo *hippo_create(void);
void hippo_destroy(struct Hippo *hippo);

struct Giraffe;
struct Giraffe *giraffe_create(void);
void giraffe_destroy(struct Giraffe *giraffe);

int main(void)
{
	struct Zebra *zebra;
	struct Hippo *hippo;
	struct Giraffe *giraffe;

	printf("Welcome to ZOO\n");
	zebra = zebra_create();
	hippo = hippo_create();
	giraffe = giraffe_create();
	zebra_destroy(zebra);
	hippo_destroy(hippo);
	giraffe_destroy(giraffe);
}
