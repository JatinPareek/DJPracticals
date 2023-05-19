import java.util.*;

public class Substring {
	public static void main(String[] args)
	{
		Scanner sc  = new Scanner(System.in);
		System.out.println("Enter the String: ");
		String str = sc.nextLine();
		
		System.out.println("Enter the 2 indices for the substring: ");
		System.out.println("Enter the First: ");
		int x = sc.nextInt();
		System.out.println("Enter the Second: ");
		int y = sc.nextInt();
		
		System.out.println("The Substring is: " + str.substring(x, y));
	}
}
