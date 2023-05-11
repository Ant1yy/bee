L={}
for i=1,2,1 do
    for i in string.gmatch(io.read("l"), '[^ ]+') do
        table.insert(L,i)
    end
end
S="VALOR A PAGAR: R$ %.2f"
print(S:format(L[2]*L[3]+L[5]*L[6]))