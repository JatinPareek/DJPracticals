import java.util.*;

public class Stringequal {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter 1st String: \n");
		String str1 = scanner.nextLine();
		
		System.out.println("Enter 2nd String: \n");
		String str2 = scanner.nextLine();
		
		boolean isEqual = str1.equals(str2);
		System.out.println("by isEqual \t" + isEqual);
		
		boolean isEqualIC = str1.equalsIgnoreCase(str2);
		System.out.println("by equalsIgnorecase \t" + isEqualIC);
	}
}
