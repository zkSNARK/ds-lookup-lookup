# ds-lookup-lookup
A small benchmark I created for testing lookup times across several STL data structures.

Currently benchmarks
   
    * std::map
    * std::unordered_map
    * std::vector
    * std::vector - probabalistically mimics most important data packed into first thresh% of vector 
    * std::vector - 100% guarantee item will be found in first thresh% of vector

These benchmarks are for lookup speed of a simple structure with 3 std::string fields in it.  It is keyed on the first field.  In the map, that means the key is placed both in the structure and it is the key to the map lookup. In the vector, the structure is broken out into its individual elements and placed into a std::pair.  The vector does not use the 3rd field, so a tighter pack in the vector can be achieved (this should actually speed up the vector relative to what it could be because it will fit more into a cache line). 

Note that at the moment, the benchmark may be misleading because the vector is forced to dereference the std::pair structure that the item is packed in, while the map lookups are not required to actually use the items and thus may not be .  A smart compiler may run the hash function but not actually do the dereference.  I would like to further investigate the effects of small string optomizations vs not SSO's in the structures also. 

Generate the structures.h file with the python program.  Then compile and execute the c++ code in the src folder.  

Will add makefile later.

Currently, parameterization of the benchmark has to be done manually, but I will work on accepting program arguments soon.  But since this was just a quick benchmark, I don't mind editing the code directly. 
