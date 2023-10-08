// The Game name is Rock_paper_scissor
import java.util.Scanner;
import java.util.Random;
public class cwh_41_game1 {
    public static void main(String[] args) {

        // 0 for Rock
        // 1 for Paper
        // 2 for Scissor

        System.out.println("0 for Rock");
        System.out.println("1 for Paper");
        System.out.println("2 for Scissor");

        //User input Scanner
        Scanner sc = new Scanner(System.in);
        System.out.println(" ");
        int userInput = sc.nextInt();

        if(userInput == 0){
            System.out.println("User Input: Rock");
        }
        else if(userInput == 1){
            System.out.println("User Input: Paper");
        }
        else if(userInput == 2){
            System.out.println("User Input: Scissor");
        }
        else{
            System.out.println("Invailed User Input");
        } 


        //Random
        Random random = new Random();
        int computerInput = random.nextInt(3);
        System.out.println(computerInput);
        if(computerInput == 0){
            System.out.println("Computer Input: Rock");
        }
        else if(computerInput == 1){
            System.out.println("Computer Input: Paper");
        }
        else if(computerInput == 2){
            System.out.println("Computer Input: Scissor");
        }
        else{
            System.out.println("Invailed Computer Input");
        }

        //Condition
        if(userInput == computerInput){
            System.out.println("Game was Tie....");
        }
        else if(userInput == 0 || computerInput == 2 && userInput == 1 || computerInput == 0 && userInput == 2 || computerInput == 1){
                    System.out.println("The User Player Win......");
        }
        else{
            System.out.println("Computer Win.......");
        }
        
    }
}
