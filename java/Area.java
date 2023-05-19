import java.util.*;

abstract class shape
{
	abstract double area();
}
class Rectangle extends shape
{
	private double length;
	private double width;
	
	public Rectangle(double length, double width)
	{
		this.length = length;
		this.width = width;
	}
	
	@Override
	
	double area()
	{
		return length*width;
	}
}

class Circle extends shape
{
	private double radius;
	
	public Circle(double radius)
	{
		this.radius = radius;
	}
	
	@Override
	
	double area()
	{
		return Math.PI*radius*radius;
	}
		
}

class Triangle extends shape
{
	private double base;
	private double height;
	
	public Triangle(double base, double height)
	{
		this.base = base;
		this.height = height;
	}
	
	@Override
	
	double area()
	{
		return 0.5*base*height;
	}
}

public class Area {
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter radius of circle: \n");
		double radius = sc.nextInt();
		Circle circle = new Circle(radius);
		
		System.out.println("Enter Length of Rectangle: \n");
		double length = sc.nextInt();
		System.out.println("Enter Width of Rectangle: \n");
		double width = sc.nextInt();
		Rectangle rectangle = new Rectangle(length, width);
		
		
		System.out.println("Enter Height of Triangle: \n");
		double height = sc.nextInt();
		System.out.println("Enter base of Triangle: \n");
		double base = sc.nextInt();
		Triangle triangle = new Triangle(height, base);
		
		double circleArea = circle.area();
        double rectangleArea = rectangle.area();
        double triangleArea = triangle.area();
        
        System.out.println("Area of Circle: " + circleArea);
        System.out.println("Area of Rectangle: " + rectangleArea);
        System.out.println("Area of Triangle: " + triangleArea);

	}
	
}

