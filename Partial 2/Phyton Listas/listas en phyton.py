print("Hello, world")
print("Carlos Alberto Lara Hernandez")
print("Numero de cuenta: 476759")

lista = ['a', 'b', 'd', 'i', 'j']
print("\nElementos de la lista: ")
for i in lista:
    print("Elemento : " + i)

print("\nCantidad de elementos: ")
print(len(lista))
lista.append('e')  # Añade un elemento
print("\nAñadiendo a 'e' ")
lista.append('c')  # Añade un elemento
print("\nAñadiendo a 'c' ")
print("\nElementos de la lista: ")
for i in lista:
    print("Elemento :" + i)

print("Cantidad de elementos: ")
print(len(lista))
lista.sort() # Se ordena la lista
print("\nLista ordenada.")
print("\nElementos de la lista: ")
for i in lista:
    print("Elemento : " + i)

lista.remove('e')  # Elimina un elemento
print("\nElimando a 'e' ")
print("\nElementos de la lista: ")
for i in lista:
    print("Elemento : " + i)