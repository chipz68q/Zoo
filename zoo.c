#include <stdio.h>

struct Zebra;
struct Zebra *zebra_create(void);
void zebra_destroy(struct Zebra *zebra);

int main(void)
{
	struct Zebra *zebra;

	printf("Welcome to ZOO\n");
	zebra = zebra_create();
	zebra_destroy(zebra);
}
