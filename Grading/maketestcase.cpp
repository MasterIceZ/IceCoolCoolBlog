#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(NULL));
	int n;
	scanf("%d",&n);
	ans = rand()%n+1;
	printf("%d\n",ans);
	return 0;
}
