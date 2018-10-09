import java.util.*;


public class homework13 {
	public static void main(String args[]) {
		Scanner userInput = new Scanner(System.in);
		System.out.print("Enter your age: ");
		int age = userInput.nextInt();

		if (age < 18) {
			System.out.println("You are a minor!");
		} else if (age > 64) {
			System.out.println("You are a senior citizen!");
		} else {
			System.out.println("You are an adult!");
		}
		
	}
}