<<<<<<< HEAD
Program HelloWorld1;
  
  {const_part}
  const 
    MAX = 1000;
      MIN = 100;

  {type_part}
  type
    a = INTEGER; 
    b = ARRAY [1..10] OF INTEGER; {array `simple_type_decl` of `type_decl` }
    c = b;
        d = (Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec); {enum类型}
        e = MIN..MAX;
 
    Date = Record                   {定义Date(日期)记录类型}
      {field_decl_list}
      {field_decl}
                {name_list  :  type_decl  ;}
          day, son: 1..31;
          vas: INTEGER;
          yea: 1970..1999;
      End;
    
    {var_part}
    var x, y, z: INTEGER;
        u, v: CHAR;
    
    {routine_part}
    {(function_decl or procedure_decl)*}
    
    procedure Hello;
    begin
        writeln(2+3);
    end;

    function Double2(Value:Integer):Integer;
    begin
        Double2 := Value * 2;
    end;
 
    {routine_body}
  begin
        {stmt_list}
        {stmt  ';'}
      writeln(2222);
  end.
=======
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
>>>>>>> 475b8c776f97ec09b8ebeb2fda3d39cca57be481
