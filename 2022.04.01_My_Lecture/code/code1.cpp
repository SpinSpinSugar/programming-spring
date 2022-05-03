template <typename Key, typename Value, typename Compare = std::less<Key>>

class MyMap {
	using value_type = std::pair<const Key, Value>;
private:
	BaseNode* leftmost;
	BaseNode* root;
	Compare comp;

	struct BaseNode {
		Node* left;
		Node* right;
		Node* parent;
		bool red;
	};
	
	struct Node : BaseNode {
		value_type kv;
	};

public:

	struct iterator {
		BaseNode* node;
		//increment complexity может O(log n) — переход к следующему ключу по дереву.
		//В среднем O(n) от m.begin() до m.end(), т.к. общее число операций O(6n)=O(n)
		value_type& operator *() const {
			return (static_cast<Node*>(node))->kv;
		}
	};

	Value& operator[](const Key& key);
	Value& at(const Key& key);
	const Value& at(const Key& key) const;
	iterator find(const Key& key);
	size_t count(const Key& key) const;
};