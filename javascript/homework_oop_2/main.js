//Josh Mathews
//17 January 2017
//Javascript object project

class Console {
	constructor(id) {
		this.element = document.getElementById(id);
	}
	log(message) {
		let p = document.createElement("p");
		p.innerText = message;
		this.element.appendChild(p);
	}

}

let console = new Console("console");

class Food {
	get calories() {
		return 0;
	}
	eat() {
		console.log("Eating some food yum..");
	}
}

class Sandwich extends Food {
	constructor(lettuce, tomatoes, meat, bread) {
		super();
		this._lettuce = lettuce;
		this._tomatoes = tomatoes;
		this._meat = meat;
		this._bread = bread;
		this._calories = null;
	}
	_updateCalories() {
		this._calories = (this._lettuce * 10 + this._tomatoes * 20 + this._meat * 100 + this._bread * 50);
	}

	get bread() {return this._bread;}
	set bread(value) {
		if(value != this._bread) {
			this._bread = value;
			this._calories = null;
		}
	}

	get meat() {return this._meat;}
	set meat(value) {
		if(value != this._meat) {
			this._meat = value;
			this._calories = null;
		}
	}
	get tomatoes() {return this._tomatoes;}
	set tomatoes(value) {
		if(value != this._tomatoes) {
			this._tomatoes = value;
			this._calories = null;
		}
	}

	get lettuce() {return this._lettuce;	}
	set lettuce(value) {
		if(value != this._lettuce) {
			this._lettuce = value;
			this.calories = null;
		}
	}
	get calories() {
		if (this._calories == null) {
			this._updateCalories();
		}
		return this._calories;
	}
	eat() {
		console.log("Eating a sammich");
	}
}

class Spaghetti extends Food {
	constructor(pasta, sauce, meat, cheese) {
		super();
		this._pasta = pasta;
		this._sauce = sauce;
		this._meat = meat;
		this._cheese = cheese;
		this._calories = null;
	}
	updateCalories() {
		this._calories = (this.pasta * 4 + this.sauce * 3 + this.meat * 100 + this.cheese * 70);
	}
	get pasta() { return this._pasta;}
	set pasta(value) {
		if (value != this._pasta) {
			this._pasta = value;
			this._calories = null;
		}
	}
	get sauce() { return this._sauce;}
	set sauce(value) {
		if (value != this._sauce) {
			this._sauce = value;
			this._calories = null;
		}
	}
	get meat() { return this._meat;}
	set meat(value) {
		if(value != this._meat) {
			this._meat = value;
			this._calories = null;
		}
	}
	get cheese() { return this._cheese;}
	set cheese(value) {
		if (value != this._cheese) {
			this._cheese = value;
			this._calories = null;
		}
	}
	get calories() {
		if(this._calories == null) {
			updateCalories();
		}
		return this._calories;
	}
	eat() {
		console.log("Eating spaghetti");
	}
}

let sandwich = new Sandwich(1, 2, 7, 2);

console.log("You made a sandwich with : \n");
console.log(sandwich.lettuce + " lettuce");
console.log(sandwich.tomatoes + " tomatoes");
console.log(sandwich.meat + " meat");
console.log(sandwich.bread + " meat");
console.log("And it has " + sandwich.calories + " calories\n");

let spaghetti = new Spaghetti(3, 5, 5,3);
console.log("You made Spaghetti with : \n");
console.log(spaghetti.pasta + " pasta");
console.log(spaghetti.sauce + " sauce");
console.log(spaghetti.meat + " meat");
console.log(spaghetti.cheese + " cheese");
console.log("And it has " + spaghetti.calories + " calories");
sandwich.eat();
spaghetti.eat();
