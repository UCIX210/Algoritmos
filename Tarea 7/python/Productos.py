
cantidad = 5
articulos = []
Precios = []
total = 0
for i in range(cantidad):
    art = str(input(f"Dame el articulo {i+1}: "))
    articulos.append(art)
    try:
        pre = float(input(f"¿Cual es el precio del articulo -{articulos[i]}- ?: $"))
        Precios.append(pre)
        total = total + pre
    except:
        print("vuvelve a intentarlo, por favor solo dame numeros")
        exit()

print("-----------------------------")
for i in range(cantidad):   
    print(articulos[i], "------ $" , end="")
    print(Precios[i])
print("-----------------------------")
print("Total a pagar: $", total)