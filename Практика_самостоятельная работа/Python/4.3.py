import math

# Ввод значения x
x = float(input("Введите x: "))

# Расчёт значения y
if x > 0:
    y = math.sin(x**2)
else:
    y = 1 - 2 * math.sin(x)**2

# Вывод результата
print("y =", y)
