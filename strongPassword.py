# numbers = "0123456789"
# lower_case = "abcdefghijklmnopqrstuvwxyz"
# upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# special_characters = "!@#$%^&*()-+"
import re

def main():
  numPatt = re.compile(r'd')
  lowPatt = re.compile(r'[a-z]')
  capPatt = re.compile(r'[A-Z]')
  specialPatt = re.compile(r'[!@#$%^&*()-+]')

  word = input()

  count = 0

  if(numPatt.match(word))