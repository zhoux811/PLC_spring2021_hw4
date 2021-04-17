$x = 10;
sub f 
{ 
   return $x; 
}
sub g 
{ 
   local $x = 20; 
   return f(); 
}
print g()."\n";
print f()."\n";