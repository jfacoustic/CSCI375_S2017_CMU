//Josh Mathews
import food.*;
import java.util.*;

public class Main extends Object {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		System.out.println("Hello!");
		Sandwich tasty = new Sandwich(10,10,10,10);
		Food idk = new Food();
		System.out.println("Tasty Sandwich calories = " + tasty.getCalories());
		System.out.println("Idk what this food is.  Calories = " + idk.getCalories());
		idk.eat();
		tasty.eat();
		Spaghetti plate = new Spaghetti(23, 13, 43, 27);
		System.out.println("Spaghetti calories: " + plate.getCalories());
		plate.eat();
		
		ArrayList<Food> foods = new ArrayList<Food>();
		foods.add(new Spaghetti(4,3,5,6));
		foods.add(new Sandwich(3,1,6,4));
		for (Food food : foods) {
			System.out.println("calories = " + food.getCalories());
		}

	}

}
