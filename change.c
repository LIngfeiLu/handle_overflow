/* First partner's name: Lingfei Lu, A91046735
 * Second partner's name: Junxi Li, A91105747
 */

 //import
#include <stdio.h>
#include "change.h"

//constant
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

/*
printChange method. The method can print out minimum number of American coins
*/
void printChange(int change){
	
	printf("%d cents in change:\n", change);
	//get numbers of quarters
	int quar = change / QUARTER;
	//set change to be the remainder
	change %= QUARTER;
	//get number of dimes
	int di = change / DIME;
	//set change to be the remainder
	change %= DIME;
	//get number of nickels
	int ni = change / NICKEL;
	//set change to be the remainder
	change %= NICKEL;
	//get number of pennies
	int pe = change / PENNY;
	
	//if number of quarter is not zero, then print the number, else print
	//nothing
	(quar != 0) ? printf("- %d quarters\n", quar) : printf("");
	//if number of dime is not zero, then print the number, else print
	//nothing
	(di != 0) ? printf("- %d dimes\n", di) : printf("");
	//if number of nickels is not zero, then print the number, else print
	//nothing
	(ni != 0) ? printf("- %d nickels\n", ni) : printf("");
	//if number of penny is not zero, then print the number, else print
	//nothing
	(pe != 0) ? printf("- %d pennies\n", pe) : printf("");
}
