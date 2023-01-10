import java.sql.Connection;
import java.sql.DriverManager;

public class ConnectToDB {
    public static void main(String[] args){
        ConnectToDB obj_ConnectDB=new ConnectToDB();
        System.out.println(obj_ConnectDB.get_connection());
    }


    public Connection get_connection(){
        Connection connection = null;
        try {
            Class.forName("org.postgresql.Driver");
            connection= DriverManager.getConnection("jdbc:postgresql://localhost:5433/School","postgres", "Java2020");

            if (connection!=null) {
                System.out.println("Connection successful");
            }
            else {
                System.out.println("Connection failed");
            }
        }
        catch (Exception e) {
            System.out.println(e.getMessage());
        }
        return connection;
    }

}
