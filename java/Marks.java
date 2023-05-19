import java.util.*;

public class Marks {
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter number of Students: \n");
		int num_students = scanner.nextInt();
		System.out.println("Enter the number of Subjects: \n");
		int num_subjects = scanner.nextInt();
		
		int[][] marks = new int[num_students][num_subjects];
		
		for(int i =0; i<num_students; i++)
		{
			System.out.println("Enter the marks for student" + (i+1) + ": \n");
			for(int j = 0; j<num_subjects; j++)
			{
				System.out.println("Subject " + (j+1) + " Marks :");
				marks[i][j] = scanner.nextInt();
			}
		}
		
		double[] average = new double[num_students];
		int index = 0;
		double highestMarks = 0;
		
		for (int i = 0; i < num_students; i++) {
            int sum = 0;
            for (int j = 0; j < num_subjects; j++) {
                sum += marks[i][j];
            }
            average[i] = (double) sum / num_subjects;

            if (average[i] > highestMarks) {
                highestMarks = average[i];
                index = i;
            }
        }

        // Displaying the student with the highest marks
        System.out.println("Student " + (index + 1) + " has the highest marks.");

        // Displaying averages
        for (int i = 0; i < num_students; i++) {
            System.out.println("Student " + (i + 1) + ":");
            System.out.println("Average: " + average[i]);
            System.out.println();
        }
	}
}
