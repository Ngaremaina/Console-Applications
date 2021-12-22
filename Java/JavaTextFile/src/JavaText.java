import java.io.File;
//import java.io.Exception;

public class JavaText {
    public static void main(String args[]) {
        try {
            File f = new  File("test.txt");
            if (f.createNewFile())
            {	System.out.println("File test.txt created");	}
            else {
                System.err.println("File existed");

            }
        }
        catch (Exception e) {
            System.err.println(e.getMessage());
        }


    }

}
