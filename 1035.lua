I,L=io.read(),{}
for i=1,I:len() do
    L[i]=I:match("%d %a")
end
print(L[1])