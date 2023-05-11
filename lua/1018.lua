Ni,X,Y=io.read("n"),{},{100,50,20,10,5,2,1}
N=Ni

for i=1,7 do
    X[i]=N//Y[i]
    N=N-X[i]*Y[i]
end

for i=1,8 do
    if i==1 then print(Ni)
    else
        local j=i-1
        print(string.format("%d nota(s) de R$ %d,00",X[j],Y[j]))
    end
end
