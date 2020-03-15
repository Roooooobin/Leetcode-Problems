def topKFrequent(words, k):
    hash_table = {}
    for word in words:
        hash_table[word] = hash_table.get(word, 0) + 1
    list_words = list(sorted(hash_table.items(), key=lambda d: (-d[1], d[0])))
    return [t[0] for t in list_words[:k]]