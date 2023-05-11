#include <iostream>

int main () {

    // NON CONST POINTER 
        /*
            - Not pointing to smt const
            - Can modify the value of whatever is in the address via the pointer
            - Can change the address the pointer is pointing to
    */
     // POINTER TO CONST
        /*
            - Pointer to a constant int for excample, cannot change the value of the var via the ptr
            - Can make ptr point to another var

        */        
    // Cosnt pointer (such as int* const)
        /*
            - Cant make pointer pt to another var 
            - Can change var value

        */     
    // Cosnt pointer to const int
        /*
            - Cant make pointer pt to another var 
            - Cant change var value

        */     
        // Cosnt pointer to non const int
        /*
            - Cant make pointer pt to another var 
            - Can change var value

        */     
    // Non const pointer to non const data
    int num{2};
    int num2{3};
    int *ptr_num{&num};
    
    // Change valuye pointed to by ptr_num
    *ptr_num = 4;
    std::cout << "Ptr_num points to: " << ptr_num << " Value: " << *ptr_num << std::endl; 

    // Change pointed to address by ptr_num
    ptr_num = &num2;
    std::cout << "Ptr_num points to: " << ptr_num << " Value: " << *ptr_num << std::endl; 

    // Pointer to const
    const int num3{5};
    const int* ptr_to_const_num3{&num3};

    // *ptr_to_const_num3 = 5;   compiler error

    ptr_to_const_num3 = &num2; // can change ptr address even if num2 wastn declared with const
    
    // pointer to const cannot modify that data regardless of whether said data was declared const

    num2 = 6;
    std::cout << "num3: " << num2 << std::endl;
    std::cout << "Value of ptr_to_const_num3: " << *ptr_to_const_num3 << std::endl;

    // Const pointer to const data
    const int number5{5}; // dont need const but its bewtter to be explicit
    const int* const p_number5{&number5};

    // Const pointer to non const data
    int * const p_number2{&num2};
    *p_number2 = 5;

}