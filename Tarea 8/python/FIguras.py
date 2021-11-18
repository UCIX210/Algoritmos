def dibujarinicio():
  print("")
  print("          *******                ***************************                  *  ")
  print("      ***************            ***************************                 ***")
  print("    *******************          ***************************                *****")
  print("  ***********************        ***************************               *******")
  print(" *************************       ***************************              *********")
  print("***************************      ***************************             ***********")
  print("***************************      ***************************            *************")
  print("***************************      ***************************           ***************")
  print(" *************************       ***************************          *****************")
  print("  ***********************        ***************************         *******************")
  print("    *******************          ***************************        *********************")
  print("      ***************            ***************************       ***********************")
  print("          *******                ***************************      *************************")
  print("")
  print("       Circulo = 1                       Cuadrado=2                    Triangulo=3  ")
  print("")

def dibujarCirculo():
  print("")
  print("          ******* ")
  print("      ***************    ")
  print("    ******************* ")
  print("  ***********************  ")
  print(" *************************  ")
  print("*************************** ")
  print("*************************** ")
  print("*************|*************  ")
  print("*************|*************  ")
  print(" ************R************   ")
  print("  ***********|***********  ")
  print("    *********|********* ")
  print("      *******|******* ")
  print("          ***|***     ")
  print("")

def F_areaCirculo():
    R = float(input("Dame su Radio, R = "))
    print("Pi x Radio x Radio = ", end="")
    print("Pi x ", R, " x ",R)
    areaR = 3.1416*R*R
    return areaR

def dibujarCuadrado():
  print( "" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "***************************" )
  print( "--------------L------------" )
  print( "" )

def F_areaCuadrado():
  L = float(input("Dame su Lado, L = "))
  print("Lado X Lado = ", end="")
  print(L," x ",L)
  areaL = L*L
  return areaL

def dibujarTriangulo():
  print("" )
  print("             * " )
  print("            *|*" )
  print("           **|**" )
  print("          ***|***" )
  print("         ****|****" )
  print("        *****|*****" )
  print("       ******|******" )
  print("      *******|*******" )
  print("     ********A********" )
  print("    *********|*********" )
  print("   **********|**********" )
  print("  ***********|***********" )
  print(" ************|************" )
  print("*************|************* " )
  print("-------------B--------------" )
  print("" )

def F_areaTriangulo():
  A = float(input("Dame su Altura, A = "))
  B = float(input("Dame su Base, B = "))
  print("(Base x Altura)/2 = ")
  print("(",B," x ",A,")","/2")
  areaAB = (A*B)/2
  return areaAB


dibujarinicio()
figura = input("Cual figuara quieres calcular su area?: ")
figura = int(figura)
caso = ()
if figura<=3 and figura>=1:
    if figura== 1:
      dibujarCirculo()
      areacirculo = F_areaCirculo()
      print("El area del Circulo es = ", areacirculo)
    if figura== 2:
      dibujarCuadrado()
      areacuadrado = F_areaCuadrado()
      print("El area del Cuadrado es = ", areacuadrado)
    if figura== 3:
      dibujarTriangulo()
      areatriangulo= F_areaTriangulo()
      print("El area del Triangulo es = ", areatriangulo)