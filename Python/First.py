#An example of a class
class Shape:
    
    description = "This shape has not been described yet"
    author = "Nobody has claimed to make this shape yet"
    def __init__(self,x,y):
        self.x = x
        self.y = y
    def area(self):
        return self.x * self.y


area1 = Shape(2,31)

u = area1.area()
print(u)


#Making use of Classes in Python