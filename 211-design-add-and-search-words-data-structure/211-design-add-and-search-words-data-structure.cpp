struct TrieNode {
TrieNode* children[26];
bool isEnd;

TrieNode() {
	fill_n(children, 26, nullptr);
	isEnd = false;
  }
};

class WordDictionary {
TrieNode* root;

public:
WordDictionary() {
	root = new TrieNode;
}

// Adds a word into the data structure.
void addWord(string word) {
	TrieNode* p = root;
	for (int i = 0; i < word.size(); i++) {
		if (p->children[word[i] - 'a'])
			p = p->children[word[i] - 'a'];
		else {
			TrieNode* t = new TrieNode();
			p->children[word[i] - 'a'] = t;
			p = p->children[word[i] - 'a'];
		}
	}

	p->isEnd = true;
}

bool search(string word, TrieNode* p) {
	for (int i = 0; i < word.size(); i++) {
		if (word[i] == '.') {
			for (int j = 0; j < 26; j++)
				if (p->children[j] && search(word.substr(i + 1), p->children[j]))	return true;
			return false;
		}
		else {
			if (p->children[word[i] - 'a'])
				p = p->children[word[i] - 'a'];
			else
				return false;
		}
	}

	return p->isEnd;
}

// Returns if the word is in the data structure. A word could
// contain the dot character '.' to represent any one letter.
bool search(string word) {
	return search(word, root);
 }
};