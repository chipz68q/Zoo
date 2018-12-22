#include <stdio.h>

struct Zebra;
struct Zebra *zebra_create(void);
void zebra_destroy(struct Zebra *zebra);

struct Hippo;
struct Hippo *hippo_create(void);
void hippo_destroy(struct Hippo *hippo);

struct Lion;
struct Lion *lion_create(void);
void lion_destroy(struct Lion *lion);

int main(void)
{
	struct Zebra *zebra;
	struct Hippo *hippo;
	struct Lion *lion;

	printf("Welcome to ZOO\n");
	zebra = zebra_create();
	hippo = hippo_create();
	lion = lion_create();
	zebra_destroy(zebra);
	hippo_destroy(hippo);
	lion_destroy(lion);
}
