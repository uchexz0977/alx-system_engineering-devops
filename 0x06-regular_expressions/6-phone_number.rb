#!/usr/bin/env ruby

input_number = ARGV[0]

# Check if the input matches the specified regular expression
if input_number =~ /^\d{10}$/
  puts input_number
end

