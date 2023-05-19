import java.util.*;

class Rectangle
{
	public int length;
	public int width;
	
	public Rectangle()
	{
		this.length = 1;
		this.width = 1;
	}
	
	public Rectangle(int a)
	{
		this.length = a;
		this.width = a;
	}
	
	public Rectangle(int a,int b)
	{
		this.length = a;
		this.width = b;
	}
	
	void give()
	{
		System.out.println(length + " " + width);
	}
	
}

public class Rectanglegg {
	public static void main(String[] args) {
        Rectangle rectangle = new Rectangle();
        rectangle.give();
//        Rectangle rectangle2 = new Rectangle(6);
//        System.out.println(rectangle2.length + " " + rectangle2.width);
//        Rectangle rectangle3 = new Rectangle(3, 9);
//        System.out.println(rectangle3.length + " " + rectangle3.width);
    }
}
