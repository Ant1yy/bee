local function d(a,b)
    local c=(b[1]-a[1])^2+(b[2]-a[2])^2
    return c^(1/2)
end
A={io.read("n","n")}
B={io.read("n","n")}
print(string.format("%.4f", d(A,B)))