#include <stdio.h>

int main(void){
// r = remainder l = larger	s = smaller
	int r, l, s;
	printf("Enter two number : ");
	scanf("%d %d", &l, &s);
	r = l % s;
	while(r > 0){
		l = s;
		s = r;
		r = l % s;
	}
	printf("GCD = %d", s);
	return 0;
}
