%Tarefa 3 
%Exercicio 1 (Correto)
Vbe=0.67
B=211
Vcc=15
R1= 6340
R2=8250
Rc=3480
Re=499

Vb = (R2*Vcc)/(R1+R2)
Ve= Vb - Vbe
Ie = Ve/Re
Vce= Vcc - Ie*(Rc+Re)

%Exercicio 2 (Segunda parte errada?)
Vben = 0.68
Bn= 219
Vbep = 0.7
Bp = 230
R1 = 22600
R2 = 1400
Re1 = 698
Rc = 12700
Re2 = 1200
Vcc = 24

Vb  = (R2*Vcc)/(R1+R2)
Ve = Vb - Vben
Ie = Ve/Re1, Ic = Ie
Ve2 = Ve - Vbep
Ic2 = Ve2/Re2
Icnpn = Ic
Icpnp = Bp* Icnpn
Ic2 = Ic - (Vcc/Rc)
Ic2 = Ic2*Bp
