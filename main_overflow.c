/* First partner's name: Lingfei Lu, A91046735
 * Second partner's name: Junxi Li, A91105747
 */
#include <stdio.h>
#include "overflow.h"

 int main() {

	//positive plus positive with overflow
 	printf("result1 = %d\n", overflow(2000000000, 1000000000, '+'));
	//positive minus negative with overflow
 	printf("result2 = %d\n", overflow(2000000000, -1000000000, '-'));
	//negative plus negative with overflow
 	printf("result3 = %d\n", overflow(-2000000000, -1000000000, '+'));
	//negative minus positive with overflow
 	printf("result4 = %d\n", overflow(-2000000000, 1000000000, '-'));

	//corner cases 
	//positive plus positive corner cases without overflow
 	printf("result5 = %d\n", overflow(1, 2147483646, '+'));
	//positive plus positive corner cases with overflow
 	printf("result6 = %d\n", overflow(1, 2147483647, '+'));
	//negative plus negative cornor case without overflow
 	printf("result7 = %d\n", overflow(-2147483647, -1, '+'));
	//negative plus negative corner case with overflow
 	printf("result8 = %d\n", overflow(-2147483647, -2, '+'));
	//

	//positive plus positive without overflow
 	printf("result9 = %d\n",overflow(2, 10, '+'));
	//positive plus  negative without overflow
 	printf("result10 = %d\n", overflow(200, -100, '+'));
	//positve minus positive without overflow
 	printf("result11= %d\n", overflow(200, 100, '-'));
	//positive minus negative without overflow
 	printf("result12= %d\n", overflow(200, -100, '-'));
	//negative plus positive without overflow
 	printf("result13= %d\n", overflow(-200, 100, '+'));
	//negative minus positive without overflow
 	printf("result14= %d\n", overflow(-200, 100, '+'));
	//negative plus negative without overflow
 	printf("result15= %d\n", overflow(-200, -100, '+'));
	//negative minus negative without overflow
 	printf("result16= %d\n", overflow(-200, -100, '-'));

 	return 0;
 }