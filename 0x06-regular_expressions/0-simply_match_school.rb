#!/usr/bin/env ruby

# Get the input argument
input = ARGV[0]

# Define the regular expression
regex = /\bSchool\b/

# Use the match method to find matches in the input string
matches = input.scan(regex)

# Print each match
matches.each do |match|
 puts match
end

