import java.util.*;

public class Palindrome {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter String:  ");
		String str = scanner.nextLine();
		
		int flag = 0;
		int n = str.length();
		
		for(int i = 0; i<n; i++)
		{
			if(str.charAt(i) != str.charAt(n-1-i))
			{
				flag = 1;
			}
		}
		
		if(flag == 1)
		{
			System.out.println("No");
		}
		else
		{
			System.out.println("Yes");
		}
		
		
	}
}
