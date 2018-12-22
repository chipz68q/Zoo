#include <stdio.h>

struct Zebra;
struct Zebra *zebra_create(void);
void zebra_destroy(struct Zebra *zebra);

struct Hippo;
struct Hippo *hippo_create(void);
void hippo_destroy(struct Hippo *hippo);
int main(void)
{
	struct Zebra *zebra;
	struct Hippo *hippo;

	printf("Welcome to ZOO\n");
	zebra = zebra_create();
	hippo = hippo_create();
	zebra_destroy(zebra);
	hippo_destroy(hippo);
}
