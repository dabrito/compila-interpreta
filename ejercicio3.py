import random
import time

# Medir el tiempo de ejecución
start_time = time.time()

# Ejercicio 3: Ventas en sucursales
sucursales = []
ventas = []
for i in range(25):
  sucursal = "Sucursal " + str(i + 1)
  sucursales.append(sucursal)
  venta = random.randint(1000, 10000)
  ventas.append(venta)

promedio_ventas = sum(ventas) / len(ventas)

sucursales_mayores = []
for i in range(25):
    if ventas[i] > promedio_ventas:
        sucursales_mayores.append(sucursales[i])

print(f"Promedio de ventas: {promedio_ventas}")
print("Sucursales con ventas mayores al promedio:")
for sucursal in sucursales_mayores:
    print(sucursal)

# Fin del tiempo de ejecución
end_time = time.time()
print(f"Tiempo de ejecución en Python: {end_time - start_time} segundos")
