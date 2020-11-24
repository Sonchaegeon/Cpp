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

	void UI() {
		cout << "---------------------" << endl;
		cout << "CMyList 메뉴" << endl;
		cout << "1 삽입" << endl;
		cout << "2 출력" << endl;
		cout << "0 종료" << endl;
		cout << "---------------------" << endl;
		cout << "메뉴를 고르세요 (숫자 입력) : ";
	}

	void Insert() {
		int num;
		cout << "삽입할 데이터를 입력 해 주세요: ";
		cin >> num;

		if (cin.fail()) {
			cout << "숫자를 입력하세요~~~~~" << endl;
			cin.clear();
			cin.ignore(256, '\n');
			return Insert();
		}

		if (find(num) == -1) {
			cout << "중복된 숫자입니다~~" << endl;
			return Insert();
		}
		else {
			// 새로운 노드 생성(메모리 할당) 및 link 연결
			Node* insertNode = new Node;
			insertNode->data = num;
			insertNode->link = pHead;
			pHead = insertNode;
		}
	}
	void PrintData() {
		cout << "CMyList 데이터 : ";
		int count = 0;
		Node* ptr = pHead;
		while (ptr != nullptr) {
			cout << ptr->data;
			if (ptr->link != nullptr) cout << " - ";
			count++;
			ptr = ptr->link;
		}
		cout << " [ " << count << "개 ]\n";
	}

	int find(int num) {
		Node* ptr = pHead;
		while (ptr != nullptr) {
			if (ptr->data == num) return -1;
			ptr = ptr->link;
		}
		return 1;
	}
private:
	Node* pHead = nullptr;
};

int main() {
	CMyList list;
	int num = -1;
	while (1) {
		list.UI();
		cin >> num;
		switch (num) {
		case 0:
			exit(1);
			break;
		case 1:
			list.Insert();
			break;
		case 2:
			list.PrintData();
			break;
		default:
			cout << "0~2 입력하세요\n";
		}
	}
	return 0;
}
