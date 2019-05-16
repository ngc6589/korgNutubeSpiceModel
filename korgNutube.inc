*
* Generic triode model: korgNutube
* Copyright 2003--2008 by Ayumi Nakabayashi, All rights reserved.
* Version 3.10, Generated on Thu May 16 15:41:18 2019
* plot dara reference : Nutube_Datasheet30_Notes.pdf and korg ofiicial site
* Masahiro Kusunoki : Twitter @ngc6589
*                  Plate
*                  | Grid
*                  | | Cathode
*                  | | |
.SUBCKT korgNutube A G K
BGG   GG   0 V=V(G,K)+-0.99999496
BM1   M1   0 V=(0.049613368*(URAMP(V(A,K))+1e-10))**-2.2936353
BM2   M2   0 V=(0.3953991*(URAMP(V(GG)+URAMP(V(A,K))/12.18625)+1e-10))**3.7936353
BP    P    0 V=4.8774434e-05*(URAMP(V(GG)+URAMP(V(A,K))/30.820126)+1e-10)**1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00012918573*V(M1)*V(M2)
BIG   IG   0 V=2.4387217e-05*URAMP(V(G,K))**1.5*(URAMP(V(G,K))/(URAMP(V(A,K))+URAMP(V(G,K)))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(2.6780197e-05*URAMP(V(A,K))**1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.5p
CGK   G    K 9.1p
CAK   A    K 4.3p
.ENDS
