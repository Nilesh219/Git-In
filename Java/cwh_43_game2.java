// Game name is Guass the number computer randomly give
import java.util.Scanner;
import java.util.Random;

class Game {
    int ci;
    int ui;
    int c;

    Game() {
        // Random Computer Input
        Random random = new Random();
        int computerInput = random.nextInt(100);
        ci = computerInput;
    }

    public void takeUserInput() {
        // Scanner User Input
        Scanner sc = new Scanner(System.in);
        System.out.println("Guess the number between 0 and 99:");
        ui = sc.nextInt();
    }

    public void isCorrectNum() {
        if (ci == ui) {
            System.out.println("Great! You guessed the number correctly.");
        } else if (ci < ui) {
            System.out.println("Your guess is greater than the target number.");
        } else {
            System.out.println("Your guess is smaller than the target number.");
        }
    }

    public int getAttempts() {
        return c;
    }
}

public class cwh_43_game2{
    public static void main(String[] args) {
        Game game = new Game();
        int attempts = 0;

        while (true) {
            game.takeUserInput();
            game.isCorrectNum();
            attempts++;

            if (game.ci == game.ui) {
                break;
            }
        }

        System.out.println("It took you " + attempts + " attempts to guess the number.");
    }
}
