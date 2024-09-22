# object-lifetime-example

This example illustrates the timing of implicit member function calls during an object's lifetime. This README also contains directions for using the VSCode debugger.

# To Compile and Run

Type `make` to compile. This will generate the executable file `cowparty`.

Type `./cowparty` to run. The program will print several lines indicating when constructors, assignment operators, and destructors are implicitly run.

# To Debug with VSCode

Click the Run and Debug icon (looks like a triangle with a small insect in the corner).

## Initial Setup

If you have not used the VSCode debugger with this project before, you'll see a Run and Debug button, but _do not press it_! Instead...

- Click "create a launch.json file." 
- In the dropdown list, select C++. This will create a new file `launch.json`. 
- When you view that file, click the "Add Configuration..." button. 
- Select "C/C++ (gdb) launch" from the dropdown list. This will generate a number of lines in `launch.json`.
- In the entry labeled `"program":`, remove the text `enter program name, for example` and replace `a.out` with `cowparty`.
- Now you can save and close `launch.json`.

## Using the VSCode Debugger

Now that you have a configured `launch.json`, the Run and Debug tab will show a green triangle button at the top. Make sure the project is compiled. Now, if you click the green triangle, your program will run in the terminal.

To set a breakpoint, click to the left of a line number. That will create a red dot next to that line. 

The next time you run your program with the debugger, it will pause execution just before that line executes. When the program is paused, you can use the panels on the "Run and Debug" tab to inspect the current values of variables. 

Additionally, while the program is paused, a new control panel will appear with multiple buttons. In order, these buttons

- Continue: unpause execution until the next breakpoint or the end of the program.
- Step Over: execute just this line, fully executing any function calls, and stopping before the next line.
- Step Into: begin executing this line, stopping before the next line of execution even if it is in a function call.
- Step Out: finish executing the current function and stop immediately after the function returns.
- Restart: start executing from the beginning.
- Stop: terminate execution without finishing the program.

