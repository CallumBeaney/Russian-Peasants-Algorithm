EXAMPLE OUTPUT:

./russian_peasants_algorithm
This program uses the 'Russian Peasant's Algorithm' to multiply 2 numbers.
It halves the multiplier and doubles the multiplicand until the multiplier reaches 1.
The sum is formed by adding each doubled multiplicand when the corresponding divided multiplier is an odd number.

1st number:     123
2nd number:     456

   (%2) 123     456 (x2)

        123     456     (sum = 456)
        61      912     (sum = 1368)
        30      1824
        15      3648    (sum = 5016)
        7       7296    (sum = 12312)
        3       14592   (sum = 26904)
        1       29184   (sum = 56088)

Final sum:      56088