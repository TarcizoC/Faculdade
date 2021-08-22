%Usuario entra com a f(x) e o ponto de aproximação 
%Definimos se ela ira nos dar um grau para o polinomio ou sera por um valor
%de erro
%calculamos a serie ate o grau/erro especificado
%plotamos o grafico original da funçao 
%animação para as funçoes aproximadas 
syms f(x)
double Soma 
Soma = 0;
%y = diff((x^2)+x); 
c = 3;      %ponto 
p = 5;      %grau
a = 0;
f(x) = x^2;            %funçao
plot(f(x))

for n=0:p %começa em 0, termina no grau do polinomio 
Df = diff(f,n);    
Taylor = ((Df(a)*(c-a))/factorial(n));   
  Soma = Taylor + Soma;
end
    


fplot(x,y)
grid on 

