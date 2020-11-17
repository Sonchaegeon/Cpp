#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* link;
};
class CMyList
{
public:
	CMyList() {

	}
	~CMyList() {
		// 노드 전체 삭제(메모리 해제)
	}
	void Insert(int num) {
		// 새로운 노드 생성(메모리 할당) 및 link 연결
		Node* insertNode = new Node;
		insertNode->data = num;
		insertNode->link = pHead;
		pHead = insertNode;
	}
	void PrintData() {
		cout << "리스트 데이터 : ";
		int count = 0;
		Node* ptr = pHead;
		while (ptr != nullptr) {
			cout << ptr->data;
			if (ptr->link != nullptr) cout << " - ";
			count++;
			ptr = ptr->link;
		}
		cout << " [ " << count << "개 ]";
	}
private:
	Node* pHead = nullptr;
};

int main() {
	CMyList list;
	list.Insert(20);
	list.Insert(30);
	list.Insert(40);
	list.Insert(10);
	list.PrintData();
	return 0;
}
