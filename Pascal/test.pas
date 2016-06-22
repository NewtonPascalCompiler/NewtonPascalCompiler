program yu;

type ARR = array [0..100] of integer;
var n,m :ARR;
i:integer;
begin
  for i := 0 to 100 do
    m[i] := n[i];
end.
