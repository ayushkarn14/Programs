class Rectangle:
    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth

    def area(self):
        return self.length * self.breadth

    def perimeter(self):
        return 2 * (self.length + self.breadth)


class Cuboid(Rectangle):
    def __init__(self, length, breadth, height):
        super().__init__(length, breadth)
        self.height = height

    def volume(self):
        return self.length * self.breadth * self.height


rectangle = Rectangle(5, 3)
cuboid = Cuboid(4, 2, 6)

print("Rectangle:")
print("Area:", rectangle.area())
print("Perimeter:", rectangle.perimeter())
print()
print("Cuboid:")
print("Area:", cuboid.area())
print("Perimeter:", cuboid.perimeter())
print("Volume:", cuboid.volume())
