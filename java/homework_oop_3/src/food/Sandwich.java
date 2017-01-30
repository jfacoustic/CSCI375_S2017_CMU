package shapes;

public class Rectangle extends Shape {
    private double _width;
    private double _height;
    private boolean _cached = false;
    private double  _area = Double.NaN;

    public Rectangle(double width, double height) {
	_width = width;
	_height = height;
    }
    
    private void _updateCache() {
	_area = _width * _height;
	_cached = true;
    }

    public double getWidth() {
	return _width;
    }

    public void setWidth(double value) {
	if (value != _width) {
	    _width = value;
	    _cached = false;
	}
    }

    public double getHeight() {
	return _height;
    }

    public void setHeight(double value) {
	if (value != _height) {
	    _height = value;
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