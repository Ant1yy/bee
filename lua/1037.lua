n=io.read("n")
if n<0 or n>100 then print("Fora de intervalo")
elseif n<=25 then print("Intervalo [0,25]")
elseif n<=50 then print("Intervalo (25,50]")
elseif n<=75 then print("Intervalo (50,75]")
else print("Intervalo (75,100]") end
