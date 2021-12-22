import javax.swing.*;
import java.awt.*;
import java.sql.Connection;
import java.sql.DriverManager;


public class Student extends JPanel {
    public Student(){
        super(new GridLayout(1,0));
        String[] columnNames = {"Registration Number","Name","Age","Year of study","Semester of study","Program","Department"};
        Object[][] data={
                {"SCT221-0750/2018", "OWEN","23","2","2","IT","SCIT"},
                {"SCT221-0751/2018", "DANIEL","23","2","2","IT","SCIT"},
                {"SCT221-0718/2018", "DENNIS","24","2","2","IT","SCIT"},
                {"SCT221-0781/2018", "COLLINS","22","2","2","IT","SCIT"},
                {"SCT221-0624/2018", "TED","23","2","2","IT","SCIT"},
        };
        final JTable table = new JTable(data, columnNames);
        table.setPreferredScrollableViewportSize(new Dimension(1366,768));
        table.setFillsViewportHeight(true);


        JScrollPane scrollPane=new JScrollPane(table);
        add(scrollPane);
    }
    private static void createAndShowGUI(){
        JFrame frame= new JFrame("Student");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        Student newContentPane=new Student();
        newContentPane.setOpaque(true);
        frame.setContentPane(newContentPane);

        frame.pack();
        frame.setVisible(true);

    }
    public void connection(){
        Connection connection = null;
        try {
            Class.forName("org.postgresql.Driver");
            connection= DriverManager.getConnection("jdbc:postgresql://localhost:5432/postgres","postgres", "Java2020");

            if (connection!=null) {
                System.out.println("Connection ok");
            }
            else {
                System.out.println("Connection failed");
            }
        }
        catch (Exception e) {
            System.out.println(e);
        }
    }
    public static void main(String args[]){
        javax.swing.SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                createAndShowGUI();
            }
        });

    }

}
