# ML
Memory manipulation library for x86 / x64 written in C++

## Features
* Writing & Reading memory from external process.
* Getting section data from external process.
* Getting exports from loaded modules.
* Injecting DLLs into the remote process.
* Scanning for patterns.
* Mapping functions into the process ( copy function from your own code into the process )
* Calling functions, this will generate function using std::apply and map it into the process, then it will call CreateRemoteThread from the start of it passing struct containing args  and address of function to call, then once the function return it will free all allocations made for it and return the result if any. You need to manually use `allocate_string` in case of passing strings to the function your trying to call.

## Documentation
Documentation on each feature will be written soon
