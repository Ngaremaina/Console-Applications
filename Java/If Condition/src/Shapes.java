import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
Write a program that computes the area & perimeter of either a rectangle, a circle or a right-angled triangle.
The program should display a menu that enables the user to select the type of figure whose area
 & perimeter he/she wants to compute.
 Depending on the users choice, the program should prompt for the dimensions and perform the computations.
 The output should be: - The type of figure, the dimensions, the area and the perimeter.
  (NB:The calculation should be for only one figure at any one time.)
 */
public class Shapes {
    public static void main(String[] args) throws IOException {
        double area, perimeter;
        int length, width, height,radius,choice;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("1)Circle\n2)Rectangle\n3)Triangle");
        choice=Integer.parseInt(bufferedReader.readLine());

        if (choice==1){
            System.out.println("Enter the radius");
            radius=Integer.parseInt(bufferedReader.readLine());
            area=Math.PI*radius*radius;
            perimeter=2*Math.PI*radius;
            System.out.println("The area and perimeter for the Rectangle whose radius is " +
                    radius+", the area = "+area+" and the circumference = " +perimeter);
        }
        else if(choice==2){
            System.out.println("Enter the length");
            length=Integer.parseInt(bufferedReader.readLine());
            System.out.println("Enter the width");
            width=Integer.parseInt(bufferedReader.readLine());
            area=length*width;
            perimeter=2*(length+width);

            System.out.println("The area and perimeter for the Rectangle whose length is " +
                    length+" and width is "+width+", the area = "+area+" and the perimeter = " +
                    perimeter);
        }
        else if(choice==3){
            System.out.println("Enter the length");
            length=Integer.parseInt(bufferedReader.readLine());
            System.out.println("Enter the width");
            width=Integer.parseInt(bufferedReader.readLine());
            System.out.println("Enter the height");
            height=Integer.parseInt(bufferedReader.readLine());

            area=length*width*height;
            perimeter=length+width+height;

            System.out.println("The area and perimeter for the Triangle whose length is " +
                    length+", width is "+width+" and height is "+height+
                    ", the area = "+area+" and the perimeter = " +
                    perimeter);
        }
    }
}
