import java.util.*;

class Animals
{
	private String name;
	private int age;
	
	public Animals()
	{
		System.out.println("Constructor Called.\n");
	}
	
	public void properties(String name, int age)
	{
		this.name = name;
		this.age = age;
	}
	
	public void display()
	{
		System.out.println("Name: " + name);
		System.out.println("Age: " + age);
	}
}

class dog extends Animals
{
	private String breed;
	
	public dog()
	{
		System.out.println("Dog Constructor\n");
	}
	
	public void setBreed(String breed)
	{
		this.breed = breed;
	}
	
	public void displaybreed()
	{
		System.out.println("The breed of the dog is: " + breed);
	}
}

public class Animal {
	public static void main(String[] args)
	{
		Animals animal = new Animals();
		animal.properties("Jerin", 28);
		animal.display();
		
		dog dogs1 = new dog();
		dogs1.properties("Kranti", 35);
		dogs1.display();
		dogs1.setBreed("Shitzu");
		dogs1.displaybreed();
	}
}
