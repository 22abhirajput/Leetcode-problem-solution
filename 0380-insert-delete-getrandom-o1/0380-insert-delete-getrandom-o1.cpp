class RandomizedSet {
    vector<int> numberList;
    unordered_map<int, int> hashTable;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {}
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(hashTable.find(val) != hashTable.end())
        {
            return false;
        }
        hashTable[val] = numberList.size();
        numberList.push_back(val);
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(hashTable.find(val) == hashTable.end())
        {
            return false;
        }
        swap(numberList[hashTable[val]], numberList[numberList.size() - 1]);
        numberList.pop_back();
        hashTable[numberList[hashTable[val]]] = hashTable[val];
        hashTable.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return numberList[rand() % numberList.size()];
    }
};