import java.util.*;

public class Pattern2 {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter N: ");
		int n = scanner.nextInt();
		
		String str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		
		int count = 0;
		
		for(int i = 0; i<n; i++)
		{
			for(int j = 1; j<n - i; j--)
			{
				System.out.print(" ");
			}
			
			for(int j = count; j>=count - i; j--)
			{
				int x = (j%26);
				System.out.print(str.charAt(x));
			}
		}
		
	
		
	}
}
