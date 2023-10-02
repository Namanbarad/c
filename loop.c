loop
---------------------------------------

what is loop 
    repetition of some tasks many times as long as some condition is true is called loop.
    in loop we always do 3 things 
        1) check some condition whether it is true or not 
        2) perform some task if condition is true
        3) count of task if conditin is true
    in programming we also require to perform some task repetatively until some condition becomes false, we can do such task (code) using concept of loop 

what is looping statement in c language?
    in c language, we can use looping statement to execute some block of code many times based upon some condition. 

there are two types of loop 

    1) entry control loop
        in entry control loop, first conditions is checked, if it is true then only code withing loop execute, then condition is checked and so on 
        if is possible that entry control loop may not execute even single time.
            while loop 
            for loop   

    2) exit control loop 
        in exit control loop, first code block within loop execute, then condition is checked, if condition is false then code block will not execute next time.
        exit control loop at least execute once. 
            do while loop 

https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTTGv8xOui2CRSZ_3fu5dbg23T-DSBGab_tR27BTNMfwOiV7SFNW4fbLUxMIU9Of_29b6I&usqp=CAU
-------------------------------------------------------
while loop 
in while loop, we check some condition if it is true, then while loop will execute all code between braces {} pair. while loop continue to check condition and execute code as long as condition is true. if condition is false then while loop stop. 
    syntax
    while(condition) //true
    {
        line 1
        line 2
        ......
    }
------------------------------------------------------------------
for loop 
in for loop, we give statement for initilization, check condition, and also give statement for increment,decrement. if given condition is true then for loop will run otherwise it will not run. 
in first execution, initilization part execute and then condition is checked 
in remaining execution first increment/decrement is done and then condition is checked
in any execution if condition is false, then loop will not run 
syntax 
        a               b           c 
    for(initialization;condition;increment/decrement)
    {
        line 1
        line 2
        .......

    }
    example 
    for(i=1;i<10;i=i+1)
    {

    }
--------------------------------------------------------------
do while loop 
    do while loop is exit control loop. it means loop condition is always check after code in braces pair execute. if condition is true then only code in braces pair will execute next time otherwise loop exits. in any situation do while loop execute at least once.

    do 
    {
        line 1
        line 2
        ......
    }while(condition);

what is nested loop?
------------------------------

when we use loop inside another loop it is called nested loop or nesting of loop. one can use any loop (while,for,do while) in any loop (while,for,do while). one use loop inside another loop which inside another loop and so on.  in nested loop main loop is called outer loop and loop inside loop is called inner loop. inner loop will start, execute and complete as many times outer loop execute. 
example 
    while(condition) //outer loop (1st level)
    {
        line 1
        line 2
        while(condition) //inner loop (2nd level)
        {
            .......
        }
        line n 
    }