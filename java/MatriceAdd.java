import java.util.*;

public class MatriceAdd {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the Size of Matrix : \n");
		int n = scanner.nextInt();
		
		int[][] matrix1 = new int[n][n];
		int[][] matrix2 = new int[n][n];
		int[][] matrix3 = new int[n][n]; 
		
		System.out.println("Enter the Elements of Matrix 1 : \n");
		for(int i = 0; i<n; i++)
		{
			for(int j = 0; j<n;j++)
			{
				matrix1[i][j] = scanner.nextInt();
			}
		}
		
		System.out.println("Enter the Elements of Matrix 2 : \n");
		for(int i = 0; i<n; i++)
		{
			for(int j = 0; j<n;j++)
			{
				matrix2[i][j] = scanner.nextInt();
			}
		}
		
		System.out.println("Addition of the 2 matrices are: \n");
		
		for(int i = 0; i<n; i++)
		{
			for(int j = 0; j<n;j++)
			{
				matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			}
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j = 0; j<n; j++)
			{
				System.out.print(" " + matrix3[i][j]);
			}
			System.out.println(" ");
		}
		
	}
}
