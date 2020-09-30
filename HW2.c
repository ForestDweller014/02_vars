#include <stdio.h>
#include <limits.h>
#include <math.h>

int main() {
	char c = -128; //Signed or unsigned, is compiler specific
	printf("Minimum char value: %d\n", CHAR_MIN); //Mine is signed as this shows
	unsigned char un_c = 241; //0 to 2^8 - 1
	signed char si_c = 0; //-(2^7) to 2^7 - 1

	int i = -1073741833; //-(2^31) to 2^31 - 1
	unsigned int un_i = 33554432; //0 to 2^32 - 1

	short s = 8259; //-(2^15) to 2^15 - 1
	unsigned short un_s = 65535; //0 to 2^16 - 1

	long l = -9.223372 * pow(10, 18); //-(2^63) to 2^63 - 1
	unsigned long un_l = 9984884; //0 to 2^64 - 1
	long long ll = 9.223372 * pow(10, 18);
	printf("Size of long long: %lu\n", sizeof(ll)); //The size of a long long is the same as a long to my compiler, so no difference? 

	float f = 4.88595; //1.2E-38 to 3.4E+38
	double d = 1.334992234001; //2.3E-308 to 1.7E+308
	long double ld = 922244535.4940223949; //3.4E-4932 to 1.1E+4932

	printf("%d\n", c);
	printf("%d\n", un_c);
	printf("%d\n", si_c);
	printf("%d\n", i);
	printf("%d\n", un_i);
	printf("%d\n", s);
	printf("%d\n", un_s);
	printf("%ld\n", l);
	printf("%lu\n", un_l);
	printf("%lld\n", ll);
	printf("%g\n", f);
	printf("%g\n", d);
	printf("%Lf\n", ld);

	return 0;
}