import time

# Medir el tiempo de ejecución
start_time = time.time()

# Ejercicio 1: Suma y Promedio
valores = []
for i in range(10):
    valor = float(input(f"Ingrese el valor {i+1}: "))
    valores.append(valor)

suma = sum(valores)
promedio = suma / len(valores)

print(f"Suma: {suma}, Promedio: {promedio}")

# Fin del tiempo de ejecución
end_time = time.time()
print(f"Tiempo de ejecución en Python: {end_time - start_time} segundos")
