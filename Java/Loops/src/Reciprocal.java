import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

/*Write a program that accepts a number and prints out it’s reciprocal (1/n).
 The program should prevent the user from entering zero by asking the user to enter the value again.
 After being given the answer, the user should be asked if wants to continue by entering ‘c’ to continue
 and ‘x’ to exit.*/
public class Reciprocal {
    public static void main(String[] args) throws IOException {
        int number;

        char answer;
        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        Scanner scanner=new Scanner(System.in);

        do {
            System.out.println("Enter the number");
            number=Integer.parseInt(bufferedReader.readLine());

            System.out.println("1/"+number);
            System.out.println("Do you wish to continue?");
            answer=scanner.next().charAt(0);

            if(answer!='c'){
                System.out.println("Thank you");
            }

        }

        while (answer == 'c');
    }
}
