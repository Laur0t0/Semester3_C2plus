# specify that there is an executable and what sources it needs
add_executable( Uebung1  
    /Users/corvin/Documents/GitHub/Semester3_C2plus/src/Uebung1/Main1.cpp 
    /Users/corvin/Documents/GitHub/Semester3_C2plus/src/Uebung1/MyString.cpp
)

# define where the headers are
target_include_directories( Uebung1 PUBLIC include )