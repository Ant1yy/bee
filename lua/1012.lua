PI = 3.14159
A,B,C = io.read("n","n","n")
S="TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f"
print(S:format((A*C)/2,PI*C^2,((A+B)*C)/2,B^2,A*B))