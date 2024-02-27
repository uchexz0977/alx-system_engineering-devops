#!/usr/bin/env ruby

input_text = ARGV[0]

# Extract and join capital letters from the input
capital_letters = input_text.scan(/[A-Z]/).join

# Check if there are any capital letters and print the result
if capital_letters.length > 0
  puts capital_letters
end

