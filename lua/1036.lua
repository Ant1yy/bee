for i in io.read("l"):gmatch("%S+") do
        if not j then j,l=1,{} else j=j+1 end
        l[j]=tonumber(i)
end
a,b,c=l[1],l[2],l[3]
dt=b^2-4*a*c
if a==0 or dt<0 then print("Impossivel calcular") else
        r1=-b+dt^.5
        r2=-b-dt^.5
        print(string.format("R1 = %.5f\nR2 = %.5f",r1/2/a,r2/2/a))
end
