#include <stdio.h>

int main(void) {
	int n, week;

	printf("Enter number of days in month:");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Sun, 7=Sat):");
	scanf("%d", &week);
	for(int i=1;i<week;i++){
		printf("   ");	
	}
	for (int i = 1; i <= n; i++) {
		printf("%3d", i);
		if ((i + week - 1) % 7 == 0) {
			printf("\n");
		}
	}
	
	return 0;
}
