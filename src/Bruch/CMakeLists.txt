# specify that there is an executable and what sources it needs
add_executable( Bruch  
    /Users/corvin/Documents/GitHub/Semester3_C2plus/src/Bruch/Main.cpp 
	/Users/corvin/Documents/GitHub/Semester3_C2plus/src/Bruch/Bruch.cpp  
)

# define where the headers are
target_include_directories( Bruch PUBLIC include )