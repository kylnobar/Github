public class MultiplyTwoNumbers {
	
	public int number1;
	public int number2;
	
	MultiplyTwoNumbers(int number1, int number2){
		this.number1 = number1;
		this.number2 = number2;
	}
	
	public int getProduct() {
		return(this.number1 * this.number2);
	}

	public static void main(String[] args) {
	    //write your code here
		MultiplyTwoNumbers myObject = new MultiplyTwoNumbers(99, 900012870);
		
		//System.out.println(myObject.getProduct());
		//System.out.println(myObject.number1);
		//System.out.println(myObject.number2);
		
		System.out.println("The product of " + myObject.number1 + " and " + myObject.number2 + " is: " + myObject.getProduct());
		
		System.out.println("Press Any Key To Continue...");
        new java.util.Scanner(System.in).nextLine();
	}

}
