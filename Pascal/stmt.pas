program yu;
var x,y,z,i:integer;
begin
  x :=1;
  y :=5;
  while x<y do
	begin
     	x := x +1; 
		if x>2 then
			case x of 
			3: write(x+x);
			4: write(x+y);
			5: write(y+y);
			end;
	end;
end.
