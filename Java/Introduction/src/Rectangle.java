/*Write a program that accepts the width and length of a rectangle
and computes both it’s area and perimeter.*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Rectangle {
    public static void main(String[] args) throws IOException {
        int length, width, perimeter, area;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the length of the rectangle");
        length=Integer.parseInt(bufferedReader.readLine());
        System.out.println("Enter the width of the rectangle");
        width=Integer.parseInt(bufferedReader.readLine());

        area=length*width;
        perimeter=2*(length+width);

        System.out.println("The area is "+area+" and the perimeter is "+perimeter);
    }
}
