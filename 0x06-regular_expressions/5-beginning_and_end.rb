#!/usr/bin/env ruby

input_string = ARGV[0]

# Check if the input matches the specified regular expression
if input_string =~ /^h.n$/
  puts input_string
end

