/*
Lab 11 - Variant 30

�������� � ������������� ���������������� ������, ��������������� ������� �����������

������� ��������� Game � ������: title, genre, developer, platform, rating.

�������� 1:
	- ������� ���� ������� �����;
	- ��������� ������� ������� ��� ����;
	- ������� ����, ����� ���� ���������� �� ����� F;

�������� 2:
	- ����������� ��������� ������� � ������ �������, ��������� ������ � ������ �������, �������� ������;
*/

#include <iostream>
#include <string>

using namespace std;

struct Game {
	int id;
	string title;
	string genre;
	string developer;
	string platform;
	float rating;
};

struct Node {
	Game data;
	Node* next;
};


void printGame(const Game& g) {
	cout << "ID: " << g.id << ", Title: " << g.title << ", Genre: " << g.genre
		<< ", Developer: " << g.developer << ", Platform: " << g.platform
		<< ", Rating: " << g.rating << endl;
}

void printGamesList(Node* head) {
	cout << "\nList of games:\n";
	Node* temp = head;
	while (temp) {
		printGame(temp->data);
		temp = temp->next;
	}
}

void printGamesByGenre(Node* head, const string& genre) {
	Node* current = head;
	bool found = false;

	cout << "\nGames in genre: " << genre << ":\n";
	while (current) {
		if (current->data.genre == genre) {
			printGame(current->data);
			found = true;
		}
		current = current->next;
	}
	if (!found) {
		cout << "\nNo games found in genre: " << genre << endl;
	}
}

void printGamesStartingOnLetter(Node* head, char letter) {
	Node* current = head;
	bool found = false;

	cout << "\nGames starting with letter " << letter << ":\n";

	while (current) {
		if (current->data.title[0] == letter) {
			printGame(current->data);
			found = true;
		}
		current = current->next;
	}
	if (!found) {
		cout << "\nNo games found starting with letter: " << letter << endl;
	}
}

void insertAtPosition(Node*& head, Game g, int position) {
	Node* newNode = new Node{ g, nullptr };

	if (position <= 0 || head == nullptr) {
		newNode->next = head;
		head = newNode;
		return;
	}

	Node* current = head;
	int index = 0;

	while (current->next != nullptr && index < position - 1) {
		current = current->next;
		index++;
	}

	newNode->next = current->next;
	current->next = newNode;
}

void deleteNodeAtPosition(Node*& head, int position) {
	if (head == nullptr || position < 0) return;

	Node* temp = head;

	if (position == 0) {
		head = head->next;
		delete temp;
		return;
	}
	for (int i = 0; temp != nullptr && i < position - 1; i++) {
		temp = temp->next;
	}

	if (temp == nullptr || temp->next == nullptr) return;

	Node* next = temp->next->next;
	delete temp->next;
	temp->next = next;
}

float countAverageRating(Node* head) {
	if (!head) return 0;

	float totalRating = 0;
	int count = 0;
	Node* current = head;

	while (current) {
		totalRating += current->data.rating;
		count++;
		current = current->next;
	}

	return count ? totalRating / count : 0;
}

void deleteList(Node*& head) {
	while (head) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

int main() {
	Node* gameListHead = nullptr;
	Game g1 = { 1, "Doode", "Action", "Ip Smartwear", "PC", 7.5 };
	Game g2 = { 2, "Terrafrica", "Adventure", "Re-Magic", "Console", 8.8 };
	Game g3 = { 3, "Counter-Spike", "Action", "Volvo", "PC", 6.0 };
	Game g4 = { 4, "Snigiria", "Puzzle", "Microbots", "Mobile", 5.7 };
	Game g5 = { 5, "Falloff", "Action-RPG", "Bethsmisla", "PC", 7.9 };
	Game g6 = { 6, "Dublo V", "Action-RPG", "Tempest", "Console", 8.2 };
	Game g7 = { 7, "Skynet", "RPG", "Bethsmisla", "PC", 9.0 };

	insertAtPosition(gameListHead, g1, 0);
	insertAtPosition(gameListHead, g2, 1);
	insertAtPosition(gameListHead, g3, 2);
	insertAtPosition(gameListHead, g4, 3);
	insertAtPosition(gameListHead, g5, 4);
	insertAtPosition(gameListHead, g6, 5);
	insertAtPosition(gameListHead, g7, 6);

	printGamesList(gameListHead);
	printGamesByGenre(gameListHead, "Action");

	cout << "\nAverage Rating: " << countAverageRating(gameListHead) << endl;

	printGamesStartingOnLetter(gameListHead, 'F');

	cout << "\nDeleting game at position 2...\n";
	deleteNodeAtPosition(gameListHead, 2);
	printGamesList(gameListHead);

	deleteList(gameListHead);

	if (gameListHead == nullptr)
		cout << "\nList successfully deleted\n";
	else
		cout << "\nList deletion failed\n";

	return 0;
}