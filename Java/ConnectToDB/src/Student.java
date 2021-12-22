import java.sql.Connection;
import java.sql.Statement;

public class Student {
    public static void main(String[] args){
        Connection connection=null;
        Statement statement=null;
        ConnectToDB obj_ConnectDB=new ConnectToDB();
        connection=obj_ConnectDB.get_connection();


        try{
            String query ="create table Student(Registration_Number varchar(50) primary key,Name varchar(100),Age int,Year_of_study int,Semester_of_study int,Program varchar(20),Department varchar(30));" +
                    "INSERT INTO table Student VALUES(SCT221-0750/2018, OWEN)";

            statement=connection.createStatement();
            statement.executeUpdate(query);
            System.out.println("Table Done");
        }
        catch (Exception e){
            System.out.println(e.getMessage());

        }
    }

}
