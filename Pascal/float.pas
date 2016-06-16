program luo;
var i: integer;
a:array [5..10] of real;
t: real;
begin
  a[5] := 1.0;
  a[6] := 2.0;
  a[7] := 3.0;
  a[8] := 4.0;
  a[9] := 5.0;
  a[10]:= 6.0;
  for i := 5 to 10 do
  begin 
    t :=a[i]*a[i];
    writeln(t);
  end;
end.
