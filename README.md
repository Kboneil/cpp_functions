	
# More c++ practice...

    * Functions
		* declare before you use it (you can put in header and include in many places)
		* member functions (dot syntax) and free functions
		* can take paramaters by value or reference
		* when you return a value it makes a copy
			* don't make a dangling reference
		* Sometimes you want to change the value so then pass by reference
		* Or it could be very expensive, so then you could, you could also make sure in the funciton that you are not actually changing the value
		* Dangling reference
			int& BadFunction()
			{
				int a = 3;
				return a;
			}
			* When we hit the closing brace it goes out of scope, but is referenced above
		* Member Functions
		* There are 2 different kinds of error messages
			* compiler - usuall not declared in .h
				* not implemented correctly (wrong name, params)
				* forgot to include the right header file
				* usually these errors are longer in the debugger
				* thinks that function is not part of class if mispelled
			* link - not implemented in .cpp
			* you can forget to add implementaion file to project