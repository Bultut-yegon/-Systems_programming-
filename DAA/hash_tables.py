class HashTable:
    def __init__(self, size):
        self.size = size
        self.table = [[] for _ in range(size)]
    
    def hash_function(self, key):
        return key % self.size
    
    def insert(self, key, value):
        index = self.hash_function(key)
        # Check if the key already exists in the chain
        for kvp in self.table[index]:
            if kvp[0] == key:
                kvp[1] = value  # Update the value if key exists
                return
        self.table[index].append([key, value])  # Add new key-value pair
    
    def lookup(self, key):
        index = self.hash_function(key)
        for kvp in self.table[index]:
            if kvp[0] == key:
                return kvp[1]
        return None
    
    def delete(self, key):
        index = self.hash_function(key)
        for i, kvp in enumerate(self.table[index]):
            if kvp[0] == key:
                del self.table[index][i]
                return
        print("Key not found")

# Example usage:
hash_table = HashTable(10)
hash_table.insert(12, "Apple")
hash_table.insert(22, "Banana")
hash_table.insert(32, "Cherry")

print(hash_table.lookup(12))  # Output: Apple
print(hash_table.lookup(22))  # Output: Banana
print(hash_table.lookup(32))  # Output: Cherry

hash_table.delete(22)
print(hash_table.lookup(22))  # Output: None
