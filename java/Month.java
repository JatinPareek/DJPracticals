import java.util.*;

public class Month {
	enum Months{
		JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
	}
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Month Index");
		int index = sc.nextInt();
		
		Months month = Months.values()[index-1];
		
		System.out.println(month);
		
		switch (month) {
        case JANUARY:
            System.out.println("January");
            break;
        case FEBRUARY:
            System.out.println("Feb");
            break;
        case MARCH:
            System.out.println("March");
            break;
        case APRIL:
            System.out.println("April");
            break;
        case MAY:
            System.out.println("May");
            break;
        case JUNE:
            System.out.println("June");
            break;
        case JULY:
            System.out.println("July");
            break;
        case AUGUST:
            System.out.println("Aug");
            break;
        case SEPTEMBER:
            System.out.println("Sept");
            break;
        case OCTOBER:
            System.out.println("Oct");
            break;
        case NOVEMBER:
            System.out.println("Nov");
            break;
        default:
            System.out.println("December");
            break;
    }
	}
}
