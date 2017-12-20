/*
 * Find subsequence of any type amongst an array in C.
 * User must supply length of both sequence and subsequence, and 
 * size of elements in bytes, as well as a function that compares
 * the equality (true = 1 / false = 0) of pointers to two elements.
 * locate_subseq returns the address of the start of the subsequece
 * or NULL if it doesn't exist.
 * Runs in worst-case ~O(m*n) time where m is the sequence length
 * and n is the subsequence length. However, it will usually be
 * faster (O(m) or better). It will be slower if your sequence 
 * contains a lot of prefixes of the subsequence for which
 * you are searching.
 *
 * Author: Christopher W. Schankula
 * Last updated: December 20th, 2017
 * Code is licensed under the CC BY 4.0 license.
 *
 * THE CODE PROVIDED HEREIN IS PROVIDED "AS-IS"
 * THE AUTHOR ASSUMES NO RESPONSBILITY OR WARRANTY
 * FOR USE OF THE CODE PROVIDED HEREIN
 * EXTENSIVE TESTING OF THIS CODE IS REQUIRED
 * TO ENSURE ITS CORRECTNESS AS PART OF THE INTENDED
 * APPLICATION THEREOF
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "subseq.h"

int compare_int(void *int1, void *int2){
	return *((int *)int1) == *((int *)int2);
}

int main(){
	int seq[] = {40, 34, 7, 4, 9, 3, 6, 8, 8, 3, 6, 8, 2, 5, 8, 88, 90};
	int subseq[] = {6, 8, 8, 3};

	int *subs = locate_subseq(seq, subseq, sizeof(int), 16, 4, compare_int);

	if (subs)
		printf("Subsequence found at position %ld in sequence.\n", subs - seq);
	else
		printf("Subsequence does not exist in sequence.\n");

	return 0;
}