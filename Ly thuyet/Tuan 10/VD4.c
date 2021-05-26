#include<stdio.h>

int main() {
	int N, input, mod; scanf("%d", &N);
	while(N > 0) {
		printf("So bi con lai la: %d\n", N);
		
		mod = (N%6);
		if (!mod) {
			printf("Hehe ban khon qua moi ban di truoc!\n");
		}
		printf("May tinh lay di: %d\n", mod);
		N -= mod;
		printf("So bi con lai la: %d\n", N);
		if (!N) break;
		
		printf("Nguoi choi lay di:"); 
		scanf("%d", &input);
		N -= input; 
	} 
	printf("NGU!");
	return 0;
}
