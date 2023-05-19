import java.util.*;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Functions Possible: \n");
        System.out.println("1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n5.EXIT");

        int choice = scanner.nextInt();

        System.out.println("Enter 1st Number: \n");
        int num1 = scanner.nextInt();

        System.out.println("Enter 2nd Number: \n");
        int num2 = scanner.nextInt();

        switch (choice) {
            case 1:
                int sum = Addition(num1, num2);
                System.out.println("Result: " + sum);
                break;
            case 2:
                int difference = Subtraction(num1, num2);
                System.out.println("Result: " + difference);
                break;
            case 3:
                int quotient = Division(num1, num2);
                System.out.println("Result: " + quotient);
                break;
            case 4:
                int product = Multiplication(num1, num2);
                System.out.println("Result: " + product);
                break;
            case 5:
                break;
            default:
                System.out.println("Invalid Input\n");
        }
    }

    public static int Addition(int num1, int num2) {
        return num1 + num2;
    }

    public static int Subtraction(int num1, int num2) {
        return Math.abs(num1 - num2);
    }

    public static int Division(int num1, int num2) {
        return num1 / num2;
    }

    public static int Multiplication(int num1, int num2) {
        return num1 * num2;
    }
}
