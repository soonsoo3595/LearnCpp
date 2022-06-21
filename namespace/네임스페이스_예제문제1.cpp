#include <stdio.h>

namespace CS
{
	int candy = 10;
}

namespace YH
{
	int candy = 20;
}

int main()
{
	printf("CS candy : %d, YH candy : %d\n", CS::candy, YH::candy);
}