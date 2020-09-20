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
		//정렬 기준은 '점수가 작은 순서'
		bool operator < (Student &student){
			return this->score < student.score;
		} 
};

int main(void){
	Student students[] = {
		Student("민경남", 90),
		Student("이은재", 96),
		Student("최서윤", 97),
		Student("김민석", 87),
		Student("김정훈", 92),
	};
	sort(students, students+5);
	for(int i=0; i<5; i++){
		cout << students[i].name << ": " << students[i].score << ' ';
	}
	
	return 0;
}
