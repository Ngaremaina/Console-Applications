/*Write a program that computes the area of a right-angled triangle.*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Triangle {
    public static void main(String[] args) throws IOException {
        int base, height, hypotenuse, perimeter;
        double area;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the base of the triangle");
        base=Integer.parseInt(bufferedReader.readLine());
        System.out.println("Enter the hypotenuse of the triangle");
        hypotenuse=Integer.parseInt(bufferedReader.readLine());
        System.out.println("Enter the height of the triangle");
        height=Integer.parseInt(bufferedReader.readLine());

        area=0.5*base*height;
        perimeter=base+hypotenuse+height;

        System.out.println("The area of the triangle = "+area+" and the perimeter = "+perimeter);

    }
}
