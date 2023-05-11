N,S=io.read("n"),"%d ano(s)\n%d mes(es)\n%d dia(s)"
A=N//365
B=(N-A*365)//30
C=(N-A*365)-B*30
print(S:format(A,B,C))