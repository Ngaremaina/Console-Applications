# Program to demonstrate 'Variable
# defined outside the class'

# Variable defined outside the class.
outVar = 'outside_class'	
print("Outside_class1", outVar)

''' Class one '''
class Geek:
	print("Outside_class2", outVar)

	def access_method(self):
		print("Outside_class3", outVar)

# Calling method by creating object
uac = Geek()
uac.access_method()

''' Class two '''
class Another_Geek_class:
	print("Outside_class4", outVar)

	def another_access_method(self):
		print("Outside_class5", outVar)

# Calling method by creating object
uaac = Another_Geek_class()
uaac.another_access_method()


# Program to demonstrate 'Variable
# defined inside the class'

# print("Inside_class1", inVar) # Error

''' Class one'''
class Geek:

	# Variable defined inside the class.
	inVar = 'inside_class'
	print("Inside_class2", inVar)

	def access_method(self):
		print("Inside_class3", self.inVar)

uac = Geek()
uac.access_method()

''' Class two '''
class another_Geek_class:
	print()
# print("Inside_class4", inVar) # Error

	def another_access_method(self):
		print()
# print("Inside_class5", inVar) # Error

uaac = another_Geek_class()
uaac.another_access_method()


# Program to demonstrate 'Variable
# defined inside the method'

# print("Inside_method1", inVar) # Error

'''class one'''
class Geek:
	print()
# print("Inside_method2", inVar) # Error

	def access_method(self):

		# Variable defined inside the method.
		inVar = 'inside_method'
		print("Inside_method3", inVar)

uac = Geek()
uac.access_method()

'''class two'''
class AnotherGeek:
	print()
# print("Inside_method4", inVar) # Error

	def access_method(self):
		print()
# print("Inside_method5", inVar) # Error

uaac = AnotherGeek()
uaac.access_method()
