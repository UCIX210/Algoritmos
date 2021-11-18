def cantidadrestante(m,t,v):
    A = m*2**(-t/v)
    print("-----------------------------------")
    print("")
    print("La cantidad de material restante es: ", A)
    print("")
    print("-----------------------------------")

print("Para calcular el material radioactivo, dame los siguientes datos")
Materialoriginal = float(input("Material Original: "))
Vidamedia = float(input("Vida media del isotopo: "))
tiempotranscurrido = float(input("Tiempo transcurrido: "))
cantidadrestante(Materialoriginal, tiempotranscurrido, Vidamedia)

menu = int()
while menu != 4 and menu != 4:
    print("Menu: presiona el numero del menu")
    print("  1: Cambie la cantidad de material original\n  2: Cambie la vida media del isótopo radioactivo \n  3: Cambie tiempo transcurrido \n  4:Terminar el programa")
    menu =int(input())
    if menu == 1:
        Materialoriginal = float(input("Material Original: "))
        cantidadrestante(Materialoriginal, tiempotranscurrido, Vidamedia)
    if menu ==2:
        Vidamedia = float(input("Vida media del isotopo: "))
        cantidadrestante(Materialoriginal, tiempotranscurrido, Vidamedia)
    if menu ==3:
        tiempotranscurrido = float(input("Tiempo transcurrido: "))
        cantidadrestante(Materialoriginal, tiempotranscurrido, Vidamedia)
    else:
        print("Numero incorrecto")
