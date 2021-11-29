import numpy as np
import random
def estacion1(m):
    n1=0
    for i in range(4):
        if m[i][0]==1:
            n1=n1+1
    return n1

def estaciones(m):
    n1=0
    n2=0
    n3=0
    n4=0
    print("Estaciones 1: ",end="")
    for i in range(4):
        if m[0][i]==1:
            print(i+1,", ",end="")
            n1=n1+1
    if n1==0:
        print("NA",end="")
    print("")
    print("Estaciones 2: ",end="")
    for i in range(4):
        if m[1][i]==1:
            print(i+1,", ",end="")
            n2=n2+1
    if n2==0:
        print("NA",end="")
    print("")
    print("Estaciones 3: ",end="")
    for i in range(4):
        if m[2][i]==1:
            print(i+1,", ",end="")
            n3=n3+1
    if n3==0:
        print("NA",end="")
    print("")
    print("Estaciones4: ",end="")
    for i in range(4):
        if m[3][i]==1:
            print(i+1,", ",end="")
            n4=n4+1
    if n4==0:
        print("NA",end="")
    print("")

matriz=np.arange(16).reshape(4,4)
for i in range(4):
    for o in range(4):
        if (i==0 and o==0) or (i==1 and o==1) or (i==2 and o==2) or (i==3 and o==3):
            matriz[i][o]=0
        else:
            matriz[i][o]= random.randint(0,1)

print(matriz)
e1 =estacion1(matriz)
print("E1 = ",e1)
estaciones(matriz)