/* Question 2 
 * Write a program to print any value of a floating point number 
 *
 * Author - 
 * Akshay Anand
 * CSE 2nd Sem - St. Thomas' College of Engineering & Technology
 */

#include <stdio.h>

main()
{
	float number;
	number = 10.4;

	printf("%.2f", number); 
	/* .2f tells printf to print only upto two digits after the decimal point */
}