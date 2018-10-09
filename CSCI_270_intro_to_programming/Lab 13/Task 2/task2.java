import java.io.*;
import java.util.*;

public class task2 {
	
	public static void main(String[] args) {
		Scanner userInput = new Scanner(System.in);
		
		System.out.print("Enter a number from 0.01 to 999.99:> ");
		float cash = userInput.nextFloat();
		
		
		cash *= 100;
		do {
			if (cash >= 10000) {
				System.out.println("$100 Bill");
				cash -= 10000;
			} else if (cash >= 5000) {
				System.out.println("$50 Bill");
				cash -= 5000;
			} else if (cash >= 2000) {
				System.out.println("$20 Bill");
				cash -= 2000;
			} else if (cash >= 1000) {
				System.out.println("$10 Bill");
				cash -= 1000;
			} else if (cash >= 500) {
				System.out.println("$5 Bill");
				cash -= 500;
			} else if (cash >= 100) {
				System.out.println("$1 Bill");
				cash -= 100;
			} else if (cash >= 25) {
				System.out.println("Quarter");
				cash -= 25;
			} else if (cash >= 10) {
				System.out.println("Dime");
				cash -= 10;
			} else if (cash >= 5) {
				System.out.println("Nickel");
				cash -= 5;
			} else if (cash >= 1) {
				System.out.println("Penny");
				cash -= 1;
			}
		} while (cash > 0);

	}
}

/* TEST PLAN:

TASK2.JAVA COMPILES WITHOUT ERRORS:										[]

USER IS ASKED TO ENTER A NUMBER .01-9999.99:							[]

USER ENTERS .43, EXPECTED: QUARTER, DIME, NICKEL, PENNY, PENNY, PENNY 	[]

USER ENTERS .09, EXPECTED: NICKEL, PENNY, PENNY, PENNY, PENNY 			[]

USER ENTERS 1, EXPECTED: $1	BILL										[]

USER ENTERS 234.64, EXPECTED:

$100 BILL
$100 BILL
$20 BILL
$10 BILL
$1 BILL
$1 BILL
$1 BILL
$1 BILL
QUARTER
QUARTER
DIME
PENNY
PENNY
PENNY
PENNY																	[]

USER ENTERS -12, EXPECTED: NULL RESPONSE 								[]

USER ENTERS -12.02, EXPECTED: NULL RESPONSE								[]

USER ENTERS "TWELVE", EXPECTED: NULL RESPONSE							[]

USER ENTERS .1, EXPECTED: DIME											[]

PROGRAM EXITS WITHOUT ERRORS:											[]

*/






