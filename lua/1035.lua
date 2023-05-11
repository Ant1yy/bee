for i in io.read("l"):gmatch("%S+") do
        if not j then j,l=1,{} else j=j+1 end
        l[j]=tonumber(i)
end
A,B,C,D=l[1],l[2],l[3],l[4]
if (B>C and D>A) and (C+D)>(A+B) and (C>0 and D>0) and A%2==0 then
        print("Valores aceitos")                  else print("Valores nao aceitos") end
