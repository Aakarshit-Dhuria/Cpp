// Hashing
// can take large values and using the hash function convert it into small values that can be used as an index in an array
// the array here is called hash table.
// size of hash table m is proportional to the number of keys we are giving to the function. 
// How hash functions work:
// 1. Should always map a large key to same small key
// 2. Should generate values from 0 to m-1 (m is size of hash table)
// 3. Should be fast, O(1) for integers and O(len) for string of length 'len'
// 4. Should uniformly distribute large keys into Hash Table Slots.

