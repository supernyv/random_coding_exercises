"""
Question: Given an array of 12 numbers [1, 45, 5, 34, 23, 5, 82, 12, 35, 21, 8, 9]
And a hashing function modulus 6. How many collisions would you expect to have in your table?
"""

def collision_count(array, mod):
    compute = list(map(lambda n: n%mod, array))
    all_counts = ({num:compute.count(num) for num in compute})
    collisions = sum(c-1 for c in all_counts.values())
    return collisions

#Application

sample_numbers = [1,45,5,34,23,5,82,12,35,21,8,9]
sample_modulo = 10
my_collisions = collision_count(sample_numbers, sample_modulo)
print(my_collisions)
