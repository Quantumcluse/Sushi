'''
MENU = {
    "espresso": {
        "ingredients": {
            "water": 50,
            "coffee": 18,
        },
        "cost": 1.5,
    },
    "latte": {
        "ingredients": {
            "water": 200,
            "milk": 150,
            "coffee": 24,
        },
        "cost": 2.5,
    },
    "cappuccino": {
        "ingredients": {
            "water": 250,
            "milk": 100,
            "coffee": 24,
        },
        "cost": 3.0,
    }
}

resources = {
    "water": 300,
    "milk": 200,
    "coffee": 100,
}
money=0
is_turned_on=True
while is_turned_on is True:
    choice=input("What do you want to order?(espresso/latte/cappuccino) :")
    if choice=="off":
        is_turned_on=False;

    elif choice=="report":
        print(f"water:{resources ['water']}")
        print(f"milk:{resources ['milk']}")
        print(f"coffee:{resources ['coffee']}")
    else:
        if resources['water']<menu['choice']['water']:
            print("Sorry there is not enough water")
        if resources['milk']<menu['choice']['milk']:
            print("Sorry there is not enough milk")
        if resources['water']<menu['choice']['coffee']:
            print("Sorry there is not enough coffee")


s=input("Whats the sentence you want to count the words of?\n")

def wordscount(sentence):
   count= len(sentence.split(" "))
   return count
print(wordscount(s))




str=input("Input a string: ")
chr=input("input a char to check: ")

def char_frequency(str,chr):
    count=0
    for word in str:
        if word.lower()==chr.lower():
            count=count+1
    return count
print(char_frequency(str,chr))
'''
'''
paragraph=input("Paragraph: ")
def capitalize_sentences(paragraph):
    sentences=paragraph.split(". ")
    for i in range(len(sentences)):
        sentences[i]=sentences[i].capitalize()
        result=" "
        for sentence in sentences:
            result += sentence+". "
    return result

print(f"The formatted Paragraph is: {capitalize_sentences(paragraph)}")

def text_summary(text):
    sentences = text.strip().split('. ')
    num_sentences = len([s for s in sentences if s])
    words = text.replace('.', '').strip().split()
    num_words = len(words)
    unique_words = len(set([word.lower() for word in words]))
    return {
        "Number of sentences": num_sentences,
        "Number of words": num_words,
        "Number of unique words": unique_words
    }

text = """Artificial intelligence is transforming industries. AI is revolutionizing how we live and work. The future is AI-powered."""
summary = text_summary(text)
print(summary)
'''


alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
logo = """           
 ,adPPYba, ,adPPYYba,  ,adPPYba, ,adPPYba, ,adPPYYba, 8b,dPPYba,  
a8"     "" ""     `Y8 a8P_____88 I8[    "" ""     `Y8 88P'   "Y8  
8b         ,adPPPPP88 8PP"""""""  `"Y8ba,  ,adPPPPP88 88          
"8a,   ,aa 88,    ,88 "8b,   ,aa aa    ]8I 88,    ,88 88          
 `"Ybbd8"' `"8bbdP"Y8  `"Ybbd8"' `"YbbdP"' `"8bbdP"Y8 88   
            88             88                                 
           ""             88                                 
                          88                                 
 ,adPPYba, 88 8b,dPPYba,  88,dPPYba,   ,adPPYba, 8b,dPPYba,  
a8"     "" 88 88P'    "8a 88P'    "8a a8P_____88 88P'   "Y8  
8b         88 88       d8 88       88 8PP""""""" 88          
"8a,   ,aa 88 88b,   ,a8" 88       88 "8b,   ,aa 88          
 `"Ybbd8"' 88 88`YbbdP"'  88       88  `"Ybbd8"' 88          
              88                                             
              88           
"""
print(logo)
direction=input("Type 'encode' to encapsulate, type 'decode' to decapsulate:\n")
if direction != "encode" and direction != "decode":
  print("You Entered Invalid input")
else:  
  text = input("Type your message:\n").lower()
  shift = int(input("Type the shift number:\n"))
  def caesar(text,shift,direction):
    cipher_text=""
    shift=shift%26
    if direction=="decode":
      shift*=-1
    for char in text:
      if char in alphabet:
        position=alphabet.index(char)
        new_position=position+shift
        new_letter=alphabet[new_position]
        cipher_text+=new_letter
      else:
        cipher_text+=char
    print(f"The {direction}d text is {cipher_text}")
  caesar(text,shift,direction)
  restart=input("Type 'yes' if you want to go again. Otherwise type 'no'.\n")
  while restart=="yes":
    direction=input("Type 'encode' to encapsulate, type 'decode' to decapsulate:\n")
    if direction != "encode" and direction != "decode":
      print("You Entered Invalid input")
    else:  
      text = input("Type your message:\n").lower()
      shift = int(input("Type the shift number:\n"))
      caesar(text,shift,direction)
      restart=input("Type 'yes' if you want to go again. Otherwise type 'no'.\n")