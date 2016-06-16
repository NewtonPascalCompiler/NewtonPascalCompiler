program lu;
var x,y,z:integer;

function ff(u:integer):integer;
begin
  
  if u > 0 then
     begin
     writeln(u);
     ff := ff(u-1)+u; 
     end;
end;
begin
 x:= 5;
 y :=ff(x);
 writeln(y);
end.
