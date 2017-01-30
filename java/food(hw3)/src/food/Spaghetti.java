package food;

public class Spaghetti extends Food {
	private double _pasta;
	private double _sauce;
	private double _meat;
	private double _cheese;
	private boolean _cached = false;
	private double _calories = Double.NaN;
	
	public Spaghetti(double pasta, double sauce, double meat, double cheese) {
		_pasta = pasta;
		_sauce = sauce;
		_meat = meat;
		_cheese = cheese;
	}
	
	private void updateCache() {
		if (!_cached) {
			_calories = _pasta * 4 + _sauce * 3 + _meat * 100 + _cheese * 70;
			_cached = true;
		}
		
	}
	
	public double getPasta() { return _pasta; }
	public void setPasta(double value) {
		if (value != _pasta) {
			_pasta = value;
			_cached = false;
		}
	}
	
	public double getSauce() { return _sauce; }
	public void setSauce(double value ) {
		if(value != _sauce) {
			_sauce = value;
			_cached = false;
		}
	}
	
	public double getMeat() { return _meat;}
	public void setMeat(double value) {
		if (value != _meat) {
			_meat = value;
			_cached = false;
		}
	}

	public double getCheese() { return _cheese; }
	public void setCheese(double value) {
		if (value != _cheese) {
			_cheese = value;
			_cached = false;
		}
	}
	
	public double getCalories() {
		if (!_cached) updateCache();
		return _calories;
	}
	
	public void eat() { System.out.println("Eatin spaghetti!"); }
}
