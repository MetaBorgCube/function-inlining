built-in-library
section testing

var x : Int := 5;

function foo() : Int {
  var y : Int := x;
  var x : Int := 2;
  {
    foo();
  }
  return x + y;
}
//function f ( y : Int ) : Int {
//  return 1;
//}
//
//function g ( z : Int ) : Void {
//  var x := 1;
//  var x2 := f ( 5 );
//  var a : Int := 5;
//  f(1);
//}
//
//function f2 ( ) : Void { return; } 
//
//function f3 ( ) : Void { }