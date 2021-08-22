function y = polar2ret(mag, fase)
%   POLAR2RET converte números complexos expressos na forma polar para a
%   forma retangular.
%
%   Sintaxe:
%
%   POLAR2RET(MAG,FASE)
%
%   Observações:
%
%   FASE deve ser passado à função em graus.
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
if nargin~=2
    error('polar2ret:erro','polar2ret: A função POLAR2RET necessita dos argumentos de magnitude e fase de um número complexo expresso em coordenadas polares.');
end

%% Conversão de números complexos expressos na forma polar para retangular.

y = mag*(cos(fase*pi/180)+1j*sin(fase*pi/180));