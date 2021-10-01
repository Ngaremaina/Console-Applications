/*Write a program that computes the area of a right-angled triangle.*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Triangle {
    public static void main(String[] args) throws IOException {
        int length, width, height, area, perimeter;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the length of the triangle");
        length=Integer.parseInt(bufferedReader.readLine());
        System.out.println("Enter the width of the triangle");
        width=Integer.parseInt(bufferedReader.readLine());
        System.out.println("Enter the height of the triangle");
        height=Integer.parseInt(bufferedReader.readLine());

        area=length*width*height;
        perimeter=length+width+height;

        System.out.println("The area of the triangle = "+area+" and the perimeter = "+perimeter);

    }
}
