/*Write a program that accepts the age of a person,
if the person is 18 and above, it should print You can vote.
otherwise it should print You are too young to vote.
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Age {
    public static void main(String[] args) throws IOException {
        int age;

        InputStreamReader inputStreamReader = new InputStreamReader(System.in);
        BufferedReader bufferedReader = new BufferedReader(inputStreamReader);

        System.out.println("Enter the age");
        age = Integer.parseInt(bufferedReader.readLine());

        if (age >= 18) {
            System.out.println("You can vote");
        } else {
            System.out.println("You are too young to vote");
        }
    }
}
