local function abs(n)
    if n<0 then
        n=n*-1
    end
    return n
end
A,B,C = io.read("n","n","n")
AB=(A+B+abs(A-B))/2
CAB=(AB+C+abs(AB-C))/2
print(string.format("%d eh o maior",CAB))