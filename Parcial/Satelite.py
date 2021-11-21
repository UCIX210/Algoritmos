import math
from typing import Match

##green//////////
def velocidad(M,r):
    G=6.67E-11
    v=math.sqrt((G*M)/r)
    print("")
    print("Velocidad Orbital: ",v, "m/s")
    if v==340.3:
        print("Velocidad Sonica")
    elif v<340.3:
        print("Velocidad Sub-Sonica")
    elif v>340.3:
        print("Velocidad Super-Sonica")
        Match=round(v/340.3)
        print("Match: ", Match)
#///////////////////////////////##


salir = str()
while salir != 's' and salir != 'S':
    #//////////////////////
    M=float(input("Masa del objeto atrayente(kg): "))
    r=float(input("Radio de la olbita(m): "))
    velocidad(M,r)

    #///////////////////////////
    salir = input("Presiona enter para continuar o S/s para salir: ")

