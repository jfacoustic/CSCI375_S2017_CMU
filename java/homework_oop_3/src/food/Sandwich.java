package food;

public class Sandwich extends Food {
	private double _lettuce;
	private double _tomatoes;
	private double _meat;
	private double _bread;
	private boolean _cached = false;
	private double _calories = Double.NaN;
	
	public Sandwich(double lettuce, double tomatoes, double meat, double bread ) {
		_lettuce = lettuce;
		_tomatoes = tomatoes;
		_meat = meat;
		_bread = bread;
	}
	
	private void _updateCache() {
		_calories = (_lettuce * 10 + _tomatoes * 20 + _meat * 100 + _bread * 50);
		_cached = true;
	}

	public double getBread() {return _bread;}
	public void setBread(double value) {
		if(value != _bread) {
			_bread = value;
			_cached = false;
		}
	}
	
	public double getLettuce() {return _lettuce;}
	public void setLettuce(double value) {
		if(value != _lettuce) {
			_lettuce = value;
			_cached = false;
		}
	}
	
	public double getTomatoes() {return _tomatoes;}
	public void setTomatoes(double value) {
		if(value != _tomatoes) {
			_tomatoes = value;
			_cached = false;
		}
	}
	
	public double getMeat() {return _meat;}
	public void setMeat(double value) {
		if(value != _meat) {
			_meat = value;
			_cached = false;
		}
	}
	
	public double getCalories() {
		if (!_cached) {
			_updateCache();
		}
		return _calories;
	}
	
	public void eat() {
		System.out.println("Eatin a sammich");
	}
}
