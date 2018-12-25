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

struct Giraffe;
struct Giraffe *giraffe_create(void);
void giraffe_destroy(struct Giraffe *giraffe);

struct Penguin;
struct Penguin *penguin_create(void);
void penguin_destroy(struct Penguin *penguin);

int main(void)
{
	struct Zebra *zebra;
	struct Hippo *hippo;
	struct Lion *lion;
	struct Giraffe *giraffe;
	struct Penguin *penguin;

	printf("Welcome to ZOO\n");
	zebra = zebra_create();
	hippo = hippo_create();
	lion = lion_create();
	giraffe = giraffe_create();
	penguin = penguin_create();
	zebra_destroy(zebra);
	hippo_destroy(hippo);
	lion_destroy(lion);
	giraffe_destroy(giraffe);
	penguin_destroy(penguin);
}
