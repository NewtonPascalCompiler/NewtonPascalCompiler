Program HelloWorld;
	
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
 
		Date=Record                   {定义Date(日期)记录类型}
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
    

 
    {routine_body}
	begin
        {stmt_list}
        {stmt  ';'}
	{MAX=101;}
	    writeln(1+2+3);
	       {程序块的最后一条语句后不需要";" -
	         如果添加一个";"会在程序中增加一个“空语句”}
	end.
