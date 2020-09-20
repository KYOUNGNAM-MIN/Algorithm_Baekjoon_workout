#include <iostream>
#include <algorithm>

using namespace std;

class Student{
	public:
		string name;
		int score;
		Student(string name, int score){
			this->name = name;
			this->score = score;
		}
		//���� ������ '������ ���� ����'
		bool operator < (Student &student){
			return this->score < student.score;
		} 
};

int main(void){
	Student students[] = {
		Student("�ΰ泲", 90),
		Student("������", 96),
		Student("�ּ���", 97),
		Student("��μ�", 87),
		Student("������", 92),
	};
	sort(students, students+5);
	for(int i=0; i<5; i++){
		cout << students[i].name << ": " << students[i].score << ' ';
	}
	
	return 0;
}
