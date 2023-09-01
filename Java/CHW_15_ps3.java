public class CHW_15_ps3 {
    public static void main(String[] args) {
        // Problem 1
        String name = "Nilesh Kadam";
        name = name.toLowerCase();
        System.out.println(name);

        // Problem 2
        String text = "nileshkadam 219";
        text = text.replace(" ", "_");
        System.out.println(text);

        // Problem 3
        String letters = "Dear <|name|>, Thanks a lot";
        letters = letters.replace("<|name|>", "Nilesh");
        System.out.println(letters);

        // Problem 4
        String text1 = "Hello how are  you   what your name ";
        System.out.println(text1.indexOf("  "));
        System.out.println(text1.indexOf("   "));

        // Problem 5 escape Sequence Characters.
        String text3 = "Dear Harry, \n\tThis Java Course is nice. \n\tThanks";
        System.out.println(text3);


        
    }
}
