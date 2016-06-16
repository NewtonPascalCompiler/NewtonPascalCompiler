program yu;
const aa = 5;
type ii=integer;
jj = array [5..10] of integer;
var n,m :jj;
x,y:ii; 
begin
 m[5]:= 0;
 m[6]:= 1;
 m[7]:= 28;
 m[8]:= 3;
 m[9]:= 4;
 m[10]:= 7;
 x := m[m[10]]+aa;
 writeln(x); 
end.
