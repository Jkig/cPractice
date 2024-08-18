# TODO:
* Structs
* memory allocation, same stuff I did in c++
* I want to write dfs and bfs here to get tstarted



* Some notes:

* i noticed we don't store data types with the variable, we have raw bits at our address, and the datatype is elsewhere
*** but this is because, for example, chars are just ints, so we in our program choose how to decode
*** for other data types, esp. float, we need to be more carefull about it (i mean compiler programmers were..) as this could be read in different ways
*** I guess you need one bit for +/-, (or unsigned??? no, difference actually, but that one byte is somewhere,,,,, (program always knows if its unsigned in 1 bit, memory sometimes knows +/- bye ##))
*** pretty cool stuff, and i'm starting to get a feel for why we are so fast in c


*** TODO malloc
