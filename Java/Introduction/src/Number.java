/*Write a program that accepts a number and then outputs it’s square,
cube, square root and cube root.
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Number {
    public static void main(String[] args) throws IOException {
        double number, square, cube, cuberoot, squareroot;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the integer");
        number=Double.parseDouble(bufferedReader.readLine());

        square=Math.pow(number, 2);
        cube=Math.pow(number,3);

        squareroot=Math.sqrt(number);
        cuberoot=Math.cbrt(number);

        System.out.println("The square of "+number+" = "+square+", the cube = "+cube
                +", the square root = "+squareroot
        +" and the cube root = "+cuberoot);

    }
}
