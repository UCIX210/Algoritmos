def day(d):
    week = ("Lunes", "Martes", "Miercoles", "Jueves", "VIernes", "Sabado", "Domingo")
    print(week[d-1],", ",end="")

def meses(m):
    mes =("Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "JUlio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre")
    print(mes[m-1])


d = int(input("Dame un número entre el 1 y el 7: "))
if d<1 or d>7:
    print("ERROR, numero invalido")
else:
    m = int(input("Dame un número entre el 1 y el 12: "))
    if m<1 or m>12:
        print("ERROR, numero invalido")
    else:
        day(d)
        meses(m)