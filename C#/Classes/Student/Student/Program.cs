using System;

namespace Student
{/*) Define a class that has the following specifications:
Private member variables:
	Name (an array of characters)
	Mark (an integer)
	Grade (a character)
	Reg_No (an array of characters)
Public member functions:
	input – to be used to input values into member variables.
	display – to display contents of member variables.
	A constructor to be used to initialize member variables.                             
Declare two objects of the class defined above and initialize them with values.  
                                                                                                                              
Write statements that use the objects defined above to call the two functions input and display defined above.                                                                                                           (3 

  *
  */
    class Program
    {
        static void Main(string[] args)
        {
            Student stud = new Student();
            stud.input();
            stud.display();
        }
    }
}
