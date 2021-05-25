clc
x=[1 2 3 4]
L1=length(x)
n1=-1:L1-2  %(0 to 3)
subplot(2,2,1)
stem(n1,x)

y=[2,3,5,6]
h1=length(y)
n2=-1:h1-2 %(0 to 3)
subplot(2,2,2)
stem(n2,y)