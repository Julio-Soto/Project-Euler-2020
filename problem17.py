#    If the numbers 1 to 5 are written out in words:
#    one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

#    If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words,
#    how many letters would be used?


#    NOTE: Do not count spaces or hyphens.
#    For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters.
#    The use of "and" when writing out numbers is in compliance with British usage.


print("Project Euler #17")
print('Number letter counts')
print('how many letters would be used when writing the numbers 1 - 1000?')

# SOLUTION:
#
# Make 3 nested loops with increments of tens for 1000 iterations.
# Count the repeating words of ones, tens, and hundreds.
#

soln = 0

ones = ['one','two','three','four','five','six','seven','eight','nine']
teens = ['eleven','twelve','thirteen','fourteen','fifteen','sixteen','seventeen','eighteen','nineteen']
tens = ['','ten','twenty','thirty','forty','fifty','sixty','seventy','eighty','ninety']
hundreds = ['','onehundred','twohundred','threehundred','fourhundred','fivehundred',
           'sixhundred','sevenhundred','eighthundred','ninehundred']
an = ''

for h in range(len(hundreds)):
    if(h > 0):
        an = 'and'
    for k in range(len(tens)):
        if(k == 0):
            print(hundreds[h])
            soln += len(hundreds[h])
        else:
            print(hundreds[h],an,tens[k])
            soln += len(hundreds[h]) + len(an) + len(tens[k]) 
        for i in range(len(ones)):
            if(k == 1):
                print(hundreds[h],an,teens[i])
                soln += len(hundreds[h]) + len(an) + len(teens[i])
            else:
                print(hundreds[h],an,tens[k],ones[i])
                soln += len(hundreds[h]) + len(an) + len(tens[k]) + len(ones[i])

print('One Thousand')
soln += len('onethousand')
print('\nthe number of letters used is: ',soln)


