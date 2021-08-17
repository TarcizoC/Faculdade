function y = ret2polar(B)
%   RET2POLAR converte números complexos expressos na forma retangular para
%   a forma polar.
%
%   Sintaxe:
%
%   RET2POLAR(B)
%
%   Observações:
%
%   B deve ser um argumento complexo expresso na forma retangular.
%
%   Dependências:
%
%   Não há.
%
%
%
%   Desenvolvida por: Guilherme Guimarães Lage.
%   Data: 04/04/2021
%   Última modificação: 04/04/2021

%% Verificação do número de argumentos passados à função.
if nargin~=1
    error('ret2polar:erro','ret2polar: A função RET2POLAR necessita do argumento como um número complexo expresso em coordenadas retangulares.');
end

%% Conversão de números complexos expressos na forma polar para retangular.

A.mag = abs(B);

if real(B)>0
    A.fase = atan(imag(B)/real(B))*(180/pi); 
elseif real(B)==0
    if imag(B)>0
        A.fase = 90;
    elseif imag(B)==0
        A.fase = 0;
    elseif imag(B)<0
        A.fase = -90;
    end
elseif real(B)<0
    if imag(B)>0
        A.fase = (atan(imag(B)/real(B))*(180/pi))+180;
    elseif imag(B)==0
        A.fase = 180;
    elseif imag(B)<0
        A.fase = (atan(imag(B)/real(B))*(180/pi))-180;
    end
end

y = [A.mag A.fase];