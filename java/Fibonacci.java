import java.util.*;

public class Fibonacci {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter N: ");
		int n = scanner.nextInt();
		
		System.out.println("Fibonacci Series upto " + n + " is :");
		for(int i = 0;i<n;i++)
		{
			System.out.println(fibonacci(i)+ " ");
		}
	}
	
	public static int fibonacci(int n)
	{
		if(n<=1)
		{
			return n;
		}
		else
		{
			return fibonacci(n-1) + fibonacci(n-2);
		}
	}
}
