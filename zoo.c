#include <stdio.h>

struct Zebra;
struct Zebra *zebra_create(void);
void zebra_destroy(struct Zebra *zebra);

struct Hippo;
struct Hippo *hippo_create(void);
void hippo_destroy(struct Hippo *hippo);

struct Penguin;
struct Penguin *penguin_create(void);
void penguin_destroy(struct Penguin *penguin);

int main(void)
{
	struct Zebra *zebra;
	struct Hippo *hippo;
	struct Penguin *penguin;

	printf("Welcome to ZOO\n");
	zebra = zebra_create();
	hippo = hippo_create();
	penguin = penguin_create();
	zebra_destroy(zebra);
	hippo_destroy(hippo);
	penguin_destroy(penguin);
}
