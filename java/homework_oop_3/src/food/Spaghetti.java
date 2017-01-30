package shapes;

public class Circle extends Shape {
    private double _radius;
    private boolean _cached = false;
    private double  _area = Double.NaN;

    public Circle(double radius) {
	_radius = radius;
    }
    
    private void _updateCache() {
	_area = Math.PI*Math.pow(_radius,2);
	_cached = true;
    }

    public double getRadius() {
	return _radius;
    }

    public void setRadius(double value) {
	if (value != _radius) {
	    _radius = value;
	    _cached = false;
	}
    }

    public double getArea() {
	if (!_cached) {
	    _updateCache();
	}
	return _area;
    }
}
