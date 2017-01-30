import food.*;
import java.util.*;


public class Main extends Object {
    public static void main(String [] args) {
	

	System.out.println("hello!");
	ArrayList<Food> foods = new ArrayList<Food>();
	foods.add(new Spaghetti(2,5));
	shapes.add(new Circle(4));
	Rectangle rect = new Rectangle(33,22);
	System.out.println("rect 33x22 area=" + rect.getArea());
	rect.setWidth(25);
	System.out.println("rect 25x22 area=" + rect.getArea());

	for(Shape shape : shapes) {
	    System.out.println("area = " + shape.getArea());
	}
    }
}
