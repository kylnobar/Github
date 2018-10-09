public class task3 {
	
	public static void main(String args[]) {
	
		int bittage = 128;
	
		while (bittage > 0) {
			System.out.println(bittage);
			bittage /= 2;
		}
		
	}
	
}

/* TEST PLAN:

TASK3.JAVA COMPILES WITHOUT ERRORS:	[]

CONSOLE PRINTS 128:					[]

CONSOLE PRINTS 64:					[]

CONSOLE PRINTS 32:					[]

CONSOLE PRINTS 16:					[]

CONSOLE PRINTS 8:					[]

CONSOLE PRINTS 4:					[]

CONSOLE PRINTS 2:					[]

CONSOLE PRINTS 1:					[]

PROGRAM EXITS WITHOUIT ERRORS		[]

*/