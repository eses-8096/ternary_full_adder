#include <stdio.h>

int main(void){
	int a, b, s;
	int ap = 0, am = 0, a0, bp = 0, bm = 0, b0, sp, sm, kp, km;
	
	printf("値Aを平衡3進数(-1, 0, 1)で入力\n");
	scanf("%d",&a);
	printf("値Bを平衡3進数(-1, 0, 1)で入力\n");
	scanf("%d",&b);

	switch(a){
		case -1:
		       am = 1;
		       break;
		case 0:
		       a0 = 1;
		       break;
		case 1:
		       ap = 1;
		       break;
	}
	switch(b){
		case -1:
			bm = 1;
			break;
		case 0:
			b0 = 1;
			break;
		case 1:
			bp = 1;
			break;
	}

	sp = (ap & b0) | (a0 & bp) | (am & bm);
	sm = (am & b0) | (a0 & bm) | (ap & bp);
	kp = ap & bp;
	km = am & bm;

	printf("Sp = %d, Sm = %d\nKp = %d, Km = %d\n",sp,sm,kp,km);
	return 0;
}
