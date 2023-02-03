import random
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
numbers = "0123456789"

symbols = "@#$%^&*()_+-=[]{};:,./<>?|"

use_for = lower_case + upper_case + numbers + symbols
length_for_pass = 8

password = "".join(random.sample(use_for, length_for_pass))

print ("Your password is: ", password)

# https://www.youtube.com/shorts/kvPxWW6CC8w    https://www.youtube.com/shorts/dxhaOMuC-Ko