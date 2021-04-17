$x = 10;
sub f 
{ 
   return $x; 
}
sub g 
{ 
   our $x = 20; 
   return f(); 
}
print g()."\n";
print f()."\n";