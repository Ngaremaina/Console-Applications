#Object oriented programming
#Class -> template/blueprint for creating objects
#Object -> a real world entity or is an instance of a class 
#Inheritance -> acquiring the properties and methods of another class
#child class-inherits->sub class
#parent class-inherit from->super class
#constructor->special method that executes first instanciation 

class MyRouter(object):
    """This is a class that describes the characteristics of a router"""
    #constructor
    def __init__(self, routerName, model, serialNo, ios):
        #our class attributes/properties(on the LHS)
        self.routerName = routerName
        self.model = model
        self.serialNo=serialNo
        self.ios=ios

    #class method
    def print_router(self, manu_date):
        """This method displays the router information"""
        print("The name of the router is: ", self.routerName)
        print("The router model is: ", self.model)
        print("The serial number of the router is: ", self.serialNo)
        print("The IOS version is: ", self.ios)
        print("The model and date combined is: ",self.model + manu_date)
        
        
router1 = MyRouter("R1", "2600", "123456","12.4")
# print(router1.routerName)
# print(router1.model)
# print(router1.ios)
# print(router1.serialNo)
# router1.print_router("16022023")

router2 = MyRouter("R2","7200","101010","12.2")
# print(router2.routerName)
# print(router2.model)
# print(router2.ios)
# print(router2.serialNo)
# router2.print_router("15022023")

#inheritance
#create a child class
class MyNewRouter(MyRouter):
    """This is a child class inheriting from MyRouter Class"""
    #the child constructor method
    def __init__(self, routerName, model, serialNo, ios, portsNo):
        # super().__init__(routerName, model, serialNo, ios)
        MyRouter.__init__(self, routerName, model, serialNo, ios)
        self.portsNo = portsNo
        
    #our child class method
    def print_new_router(self, string):
        print(string + self.model)
        
#create a child object
MyNewRouter1=MyNewRouter("New R1", "1800","111111", "12.2","10")
# print(MyNewRouter1.routerName)
# print(MyNewRouter1.model)
# print(MyNewRouter1.serialNo)
# print(MyNewRouter1.ios)
MyNewRouter1.print_new_router("16022023")