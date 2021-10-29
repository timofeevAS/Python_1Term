def is_anagram(word1,word2):
    w1= sorted(word1)
    w2= sorted(word2)

    for i in range(len(w1)):
        if(w1[i]!=w2[i]):
            return False
    for i in range(len(word1)):
        if(word1[i] == word2[i]):
            return False
    return True


word1,word2=input(),input()
print(is_anagram(word1,word2))
