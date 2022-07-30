interface KeyListener {
    // Abstract method (does not have a body)
    public void keyPressed();

    public void keyReleased();

    public void keyTyped();
}

// Subclass (inherit from Animal)
class Pig implements KeyListener {
    public void keyPressed(){
        
    }

    public void keyReleased(){

    }

    public void keyTyped(){

    }
}

class Demo {
    public static void main(String[] args) {
        Pig ob = new Pig(); // Create a Pig object
        ob.animalSound();
    }
}