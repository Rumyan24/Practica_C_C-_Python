import random 

# Генерация массива случайных целых чисел от 0 до 10
array_d = [random.randint(0, 10) for _ in range(15)]
print("Массив целых чисел от 0 до 10:", array_d)
