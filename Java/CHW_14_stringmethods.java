public class CHW_14_stringmethods {
    public static void main(String[] args) {
        String name = "Nilesh";
        // System.out.println(name);

        // int lenstr = name.length();
        // System.out.println(lenstr);

        // String lstr = name.toLowerCase();
        // System.out.println(lstr);

        // String ustr = name.toUpperCase();
        // System.out.println(ustr);

        // String rstr = name.replace("N", "M");
        // System.out.println(rstr);

        // String nonTrimmedString = "       Nilesh       ";
        // System.out.println(nonTrimmedString);

        // String trimmedstring = nonTrimmedString.trim();
        // System.out.println(trimmedstring);

        // System.out.println(name.substring(1));
        // System.out.println(name.substring(1,4));  

        // System.out.println(name.startsWith("Nil"));
        // System.out.println(name.endsWith("esh"));

        System.out.println(name.charAt(4));

        String modifiedName = "Nileshesh";
        System.out.println(modifiedName.indexOf("esh"));
        System.out.println(modifiedName.indexOf("esh", 5));
        System.out.println(modifiedName.lastIndexOf("esh",8));

        System.out.println(name.equals("Nilesh"));
        System.out.println(name.equalsIgnoreCase("nilEsh"));

        System.out.println("I am escap sequence \" double qoute");
        
        System.out.println("I am escap sequence \n heloo");
        

    }
}
