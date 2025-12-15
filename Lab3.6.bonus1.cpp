#include <stdio.h>
int main() {
	int score,m;
	scanf("%d",&score);
	if (score>=85)
		printf("A");
	else if (score>=75)
	    	printf("B");
		else if (score>=68){
				m=75-score;
				printf("%s %d","C",m);
			}else if (score>=55)
					printf("D");
				else printf("F");	
}

