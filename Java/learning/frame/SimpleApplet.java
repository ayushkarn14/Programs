try(FileInputStream fin = new FileInputStream("file.txt")) {
    do {
        i = fin.read();
        if(i != -1) 
            System.out.print((char) i);
        }while(i != -1);
} 
catch(Exception e) {
System.out.println("An Exception occured");
}