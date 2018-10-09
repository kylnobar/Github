import java.io.*;
import java.util.*;

public class task1 {

	public static void main(String args[]) {
		Scanner userInput = new Scanner(System.in);
		
		System.out.print("Enter a number between 0 and 99:> ");
		int cents = userInput.nextInt();
		do {
			if (cents >= 25) {
				System.out.println("Quarter");
				cents -= 25;
			} else if (cents >= 10) {
				System.out.println("Dime");
				cents -= 10;
			} else if (cents >= 5) {
				System.out.println("Nickel");
				cents -= 5;
			} else {
				System.out.println("Penny");
				cents -= 1;
			}
		} while (cents > 0);
	}
}

/* TEST PLAN:

TASK1.JAVA COMPILES WITHOUT ERRORS:										[]

USER IS ASKED TO ENTER A NUMBER 0-99 									[]

USER ENTERS 43, EXPECTED: QUARTER, DIME, NICKEL, PENNY, PENNY, PENNY 	[]

USER ENTERS 9, EXPECTED: NICKEL, PENNY, PENNY, PENNY, PENNY 			[]

USER ENTERS 1, EXPECTED: PENNY											[]

USER ENTERS -12, EXPECTED: NULL RESPONSE 								[]

USER ENTERS "TWELVE", EXPECTED: NULL RESPONSE							[]

USER ENTERS .1, EXPECTED: NULL RESPONSE									[]

PROGRAM EXITS WITHOUT ERRORS:											[]
*/