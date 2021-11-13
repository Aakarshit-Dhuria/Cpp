// HASHING
// can take large values and using the hash function convert it into small values that can be used as an index in an array
// the array here is called hash table.
// size of hash table m is proportional to the number of keys we are giving to the function. 
// How hash functions work:
// 1. Should always map a large key to same small key
// 2. Should generate values from 0 to m-1 (m is size of hash table)
// 3. Should be fast, O(1) for integers and O(len) for string of length 'len'
// 4. Should uniformly distribute large keys into Hash Table Slots.

 EXAMPLES of Hash Functions:
1. h(large_key) = large_key % m 
	m is size of hash table
	size of hash table is proportional to number of keys provided.
	for eg , if we insert 100 phone numbers the size of hash table can be 200 or 400 or something similar.
	if m is 200 we do phone number % 200
	Ideally hash table size m is chosen as a prime number close to hash table size.
	Bad value for m is power of 2 or 10. we even avoid prime numbers close to these powers.


2. For strings, weighted sum
	str[] = "abcd"
	(str[0] * x^0 + str[1] * x ^ 1 + str[2] * x^2 + str[3] * x^3) % m
	x can be any number
	 
Note: if we simply take the ascii value of each character of a string and add it and do modulo on it, then there will be many strings on the same index.

3. UNIVERSAL HASHING - set of many hash functions and we pick a random hash function everytime.
it helps to attain uniform distribution everytime in O(1) time.


OPEN ADDRESSING:
No of slots in hash table >= no of keys to be inserted
--> Cache friendly

Multiple ways of implementing Open Addressing:
1. Linear probing
2. Quadratic Probing
3. Double Hashing

LINEAR PROBING:
In linear probing whenever there is a collision , it lineraly searches for the next empty index
if we want to insert in last index and it is occupied then we search in a circular manner.

How search works in this?
we compute hash function
we go to that index and compare:
if we find it there, we return true
otherwise we linearly search
we stop when one of three cases arise:
    a. Empty slot  // return false
    b. key found   // return true
    c. traversed through the whole hash table  // return false

How Delete works: instead of simply making the slot empty we mark the slot as deleted but we can still insert a new key to this index

Problem with making the slot empty when we delete : if we are searching for an element below the empty slot it will cause a problem
marking index as deleted doesnt stop the search operation 

Clustering (problem with linear probing) 
whenever a key matches any of the k indexes the cluster size increases by 1 and becomes k + 1.
due to these clusters all our operations become costly
in worst case it has to search through the whole k indexes to finally encounter an empty slot.

How to handle clustering problem with linear probing:
 1. Quadratic probing : it is better than linear but it also has secondary clusters as the same pattern is followed for all the keys like in linear.
problem with quadratic : it might not find an empty slot even if there are empty slots in the hash table.
for quadratic probing there are two conditions to surely find an empty slot:
    a. Load factor alpha < 0.5 (i.e. the size of hash table must be more than double the number of keys)
    b. the size of hash table,m must be a prime number

2. Double Hashing:
	hash(key,i) = (h1(key) + i * h2(key)) % m
	--> If h2(key) is relatively prime to m, then it always finds an empty slot if there is one.
	--> It distributes keys more uniformly than linear and quadratic probing.
	--> No Clustering
Note: i is the number of collisions which happen before finding the first empty slot. initially we compute the hash function at i = 0, if a collision happens, we check for i = 1 and so on.
--> One more advantage of this is that unlike quadratic probing , the size m need not be double the number of keys, it should only be relatively prime like given above.

For example , m = 7
	h1(key) = (key % 7)
	h2(key) = 6 - (key % 6)  {the h2 function is made like this to ensure that it doesnt return zero in any case because if it returns zero we will keep probing the same location again and again.

Why h2(key) and m should be relatively prime?
	--> When h2(key)  and m are relatively prime,
		then i * h2(key) % m will always return different value for different values for i in turn traversing through the whole hash table to surely find an empty slot if  it  exists.

ALGORITHM FOR DOUBLE HASHING:
	void doubleHashingInsert(key)
	{
		if(table is full)
			return error;
		probe = h1(key), offset = h2(key);
		while(table[probe] is occupied)
			probe = (probe  + offset) % m;
		table[probe]  = key;
	}

Alogrithm for Linear Probing : It is same as above except offset = 1.
	void linearProbingInsert(key)
	{
		if(table is full)
			return error;
		probe = h1(key), offset = 1;
		while(table[probe] is occupied)
			probe = (probe  + offset) % m;
		table[probe]  = key;
	}

// Imp : How to handle the cases when -1 and -2 are input keys?
//      For empty, it will directly be null
//      for deleted , we keep a reference or pointer of a dummy node.
// the dummy node is implemented in libraries and is only one fixed node and common to all.





.