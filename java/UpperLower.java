import java.util.*;

public class UpperLower {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter String: ");
		String str = scanner.nextLine();
		
		System.out.println("Entered String: " + str);
		
		String Uppercase = str.toUpperCase();
		String Lowercase = str.toLowerCase();
		
		System.out.println("Uppercase: " + Uppercase);
		System.out.println("Lowercase: " + Lowercase);
		
	}
}
