#include <iostream>

int main()
{
std::cout << "Hello World!" << std::endl;
return 0;
}

















//VisualStudio 자동 정렬 단축키는 Alt+F8 아니면 Ctrl + K, F


#include <iostream>
using namespace std; 
/*
namespace는 명령공간
사용시 반복되는 상위 계층의 이름을 생략해서 표현가능

사용시
cout<< "Hello World" << endl;

미사용시
std::cout<< "Hello World" << endl;

*/

int main()
{
cout<< "Hello World" << endl;

//cout은 화면에 어떤 정보를 출력하라는 객체
// \n 과 end 둘다 줄바꾸기로 쓰임

return 0;
// return 문을 사용해서 프로그램의 처리결과를 컴퓨터에게 알려줌
//프로그램이 이상 없이 작동되었다는것을 알려줌
}
