#include "mqdb.h"

/*
 * main function
 */
int main(void) {
	uint n = 4*1024;      // matrix size
    uint k = 10;
	mqdb A, B, C1, C2;      // mqdb host matrices

	// fill in
	A = mqdbConst(n, k, 10, 1);
	B = mqdbConst(n, k, 10, 1);
	C1 = mqdbConst(n, k, 10, 1);
	C2 = mqdbConst(n, k, 10, 1);

	ulong nBytes = n * n * sizeof(float);
	ulong kBytes = k * sizeof(uint);
	printf("Memory size required = %.1f (MB)\n",(float)nBytes/(1024.0*1024.0));

    printf("CPU MQDB product...\n");
	double start = seconds();
    mqdbProd(A,B,C1);
	double CPUTime = seconds() - start;
	printf("CPU elapsed time: %.5f (sec)\n\n", CPUTime);

	printf("CPU naive MQDB product...\n");
	start = seconds();
	matProd(A,B,C2);
	CPUTime = seconds() - start;
	printf("CPU elapsed time: %.5f (sec)\n\n", CPUTime);

	printf("checking results\n");
	checkResult(C1,C2);

	return 0;
}
