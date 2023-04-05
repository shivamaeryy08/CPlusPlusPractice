#include <iostream>
// lifetime of avraible is how long variable is present in memoruy, c++ is pretty much block scoped like java
int static_var{80}; // static duration -> dies when program ends global var since it is accessible anywhere in file
void randomFunction() {
    int local_var {3}; // local duration (automatic): dies at end of block/fx
    static int static_var2 {30}; // now force varaible to live till end of program static duration
    int dynamic_var {58}; // you decide when it dies
}
int main () {
 // in c++ we can define nested scope such as below
 // in ++ we can redeclare global variuables with name
 {
    std::string favorite_game {"Sekiro"}; // this var only lives in this nested block
}
return 0;
 
}

/*
Lifetime of variable is determined by storage duration

can be local (block,automatic) static or dynamic
*/

/*


*/