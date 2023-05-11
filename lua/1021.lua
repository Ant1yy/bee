v,n,m=io.read("l"):gsub("[.]",""),{100,50,20,10,5,2},{100,50,25,10,5,1}
print("NOTAS:")
for _,i in pairs(n) do
	print(string.format("%d nota(s) de R$ %d.00",v//(i*100),i))
	v=v%(i*100)
end
print("MOEDAS:")
for _,i in pairs(m) do
	print(string.format("%d moeda(s) de R$ %.2f",v//i,i/100))
	v=v%i
end
