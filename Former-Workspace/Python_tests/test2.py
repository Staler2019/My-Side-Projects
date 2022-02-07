
class Car:
    def __init__(self, name, manufacturer, horsepower, top_speed, cost, length):
        self.name = name
        self.manufacturer = manufacturer
        self.horsepower = horsepower
        self.top_speed = top_speed
        self.cost = cost
        self.length = length

    def __add__(self, other):
        print(f"Combined Price: ${self.cost + other.cost}")
        print(f"Combined Horsepower: {self.horsepower + other.horsepower}")

    def __sub__(self, other):
        print(f"Difference In Price: {self.cost - other.cost}")
        print(
            f"Difference in Horsepower: {self.horsepower - other.horsepower}")
        print(f"Difference in Top Speed: {self.top_speed - other.top_speed}")

    def __repr__(self):
        return f"{self.manufacturer} {self.name}"

    def __eq__(self, other):
        print(f"Top Speed: {self.top_speed == other.top_speed}")
        print(f"Horsepower: {self.horsepower == other.horsepower}")
        print(f"Price: ${self.cost == other.cost}")

    def __gt__(self, other):
        print(f"Top Speed: {self.top_speed > other.top_speed}")
        print(f"Horsepower: {self.horsepower > other.horsepower}")
        print(f"Price: ${self.cost > other.cost}")

    def __lt__(self, other):
        print(f"Top Speed: {self.top_speed < other.top_speed}")
        print(f"Horsepower: {self.horsepower < other.horsepower}")
        print(f"Price: ${self.cost < other.cost}")

    def __le__(self, other):
        print(f"Top Speed: {self.top_speed <= other.top_speed}")
        print(f"Horsepower: {self.horsepower <= other.horsepower}")
        print(f"Price: ${self.cost <= other.cost}")

    def __ge__(self, other):
        print(f"Top Speed: {self.top_speed >= other.top_speed}")
        print(f"Horsepower: {self.horsepower >= other.horsepower}")
        print(f"Price: ${self.cost >= other.cost}")

    def __ne__(self, other):
        print(f"Top Speed: {self.top_speed != other.top_speed}")
        print(f"Horsepower: {self.horsepower != other.horsepower}")
        print(f"Price: ${self.cost != other.cost}")

    def __str__(self):
        return f"{self.manufacturer} {self.name} {self.horsepower} with top speed {self.top_speed} starting at {self.cost}"

    def __len__(self):
        return f"{self.length}m"


tesla = Car(name='Model 3', manufacturer='Tesla', horsepower=283,
            top_speed=129, cost=35000, length=4.69)
ford = Car(name='Mustang Mach E', manufacturer='Ford',
           horsepower=282, top_speed=132, cost=43895, length=4.72)
# view rawtesla_ford_magic_methods.py hosted with ❤ by GitHub
