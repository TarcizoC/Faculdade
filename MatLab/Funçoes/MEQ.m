function [Ai,Av,Zi,Zib,Zo] = MEQ(C,RL,RS,Rc,R1,R2,hi,hr,hf,ho)
%   MEQ(Modelo Equivalente Hibrido) converte um modelo de transistor normal  
%   para um modelo hibrido,nos resultando os valores de ganho e impedancia.
%
%   Sintaxe:
%
%   [Ai,Av,Zi,Zo] = MEQ(C,RL,RS,Rc,hi,hr,hf,ho)
%
%   Observações:
%
%   A funçao utiliza das Equações completas dos modelos
%
%   Dependências:
%
%   Realizar um aprimoramento para as equaçoes simplificadas e mostrar as
%   diferenças.
%   Calculo do RL.
%   Calculo da Base esta errado
%
%
%   Desenvolvida por: Carlos Eduardo Souza Silva.
%   Data: 18/06/2021
%   Última modificação:  18/06/2021

%Conversão parametros h

hic = hi;
hrc = 1-hr;
hfc = -hf-1;    
hoc = ho;

hib = (hi/(((1+hf)*(1-hr))+(hi*ho)));
hrb = ((hi*ho)-(hr*(1+hf)))/(((1+hf)*(1-hr))+(hi*ho)); 
hfb = ((-hf*(1-hr))-(hi*ho)/(((1+hf)*(1-hr))+(hi*ho)));
hob = ho/(((1+hf)*(1-hr))+(hi*ho));

switch C 
    case 1 %Emissor
        Ai = (hf/(1+(ho*RL)));
        Av = -(hf*RL)/(hi+(((hi*ho)-(hf*hr))*RL));
        Zi = hi - ((hf*hr*RL)/(1+(ho*RL)));
        Zzi= (1/R1 + 1/R2 + 1/Zi);
        Zib = 1/Zzi;
        Zc = (1/(ho-((hf*hr)/(hi+RS))));
        Zo = ((Zc*Rc)/(Zc+Rc));
        
    case 2 %BASE
        Ai = (hfb/(1+(hob*RL)));
        Av = -(hfb*RL)/(hib+(((hib*hob)-(hfb*hrb))*RL));  %Resultado Errado
        Zi = (Re*hib)/(Re+hib);
        Zc = (1/(hob-((hfb*hrb)/(hib+RS))));
        Zo = ((Zc*Rc)/(Zc+Rc));
        
    case 3 %Coletor
        Ai = (hfc/(1+(hoc*RL)));
        Av = -(hfc*RL)/(hic+((hic*hoc-hfc*hrc)*RL));
        Zi = hic - ((hfc*hrc*RL)/(1+(hoc*RL)));
        Zzi= (1/R1 + 1/R2 + 1/Zi);
        Zib = 1/Zzi;
        Zo = (1/(hoc-((hfc*hrc)/(hic+RS))));
       
end

