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
		this.lettuce = lettuce;
		this.tomatoes = tomatoes;
		this.meat = meat;
		this.bread = bread;
	}
	get calories() {
		return (this.lettuce * 10 + this.tomatoes * 20 + this.meat * 100 + this.bread * 50);
	}
	eat() {
		console.log("Eating a sammich");
	}
}

class Spaghetti extends Food {
	constructor(pasta, sauce, meat, cheese) {
		super();
		this.pasta = pasta;
		this.sauce = sauce;
		this.meat = meat;
		this.cheese = cheese;
	}
	get calories() {
		return (this.pasta * 4 + this.sauce * 3 + this.meat * 100 + this.cheese * 70);
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
