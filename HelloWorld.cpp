public interface Animal{
	void eat();
}
abstract class Bird implements Animal{
	private String name;
	private String sound;
	
	public Bird(String n, String s){
		name=n;
		sound=s;
	}	
	public void chirp(){
		System.out.println(sound);
	}	
}

 interface Flyable{
	void fly();
}

 interface Swimmable{
	void swim();
}

class Parakeet extends Bird implements Flyable{
	public Parakeet(){
		super("Parakeet","Squawk");
	}
	
	public void eat(){
		System.out.println("Eating seeds");
	}
	public void fly(){
		System.out.println("Flying");
	}
} 

class Penguin extends Bird implements Swimmable{
	public Penguin(){
		super("Penguin","gakker");
	}
	
	public void eat(){
		System.out.println("Eating fish");
	}
	public void swim(){
		System.out.println("Swimming");
	}
}
