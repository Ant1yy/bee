l,t={4,4.5,5,2,1.5},{}
for n in io.read("l"):gmatch("%S+") do
        if not j then j=1 else j=j+1 end
        t[j]=tonumber(n)
end
i=t[1]
q=t[2]
print(string.format("Total: R$ %.2f",l[i]*q))
