import random

# Создаем массив из 15 вещественных чисел
array = [random.random() for _ in range(15)]

# Выводим массив
print("Массив из 15 случайных вещественных чисел:")
for number in array:
    print(number)
