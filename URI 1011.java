import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		double a;
		Scanner input = new Scanner(System.in);
		a = input.nextDouble();
		
		System.out.printf("VOLUME = %.3f\n", (4 * 3.14159 * Math.pow(a, 3.0)) / 3);

	}
}