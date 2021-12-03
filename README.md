# 42_SoLong

그리고 모든 생선들께 감사를...

*종합 : 이 프로젝트는 아주 작은 2D 게임이에요! 스프라이트와 텍스쳐로 만들 수 있습니다! 그리고 아주 간단한 게임 플레이 요소가 있어요!*

*Version : 1*


## Chapter 1


들어가며...   


개발자가 되는 것은 게임만드는 것에 있어서 좋은 일입니다.   
그러나 좋은 게임은 좋은 자산이 필요해요.   
2D게임을 위해서, 당신은 타일과 타일셋, 스프라이트와 스프라이트 시트를 찾아야 합니다.   
감사하게도 몇몇 재능있는 예술가들이 그들의 작업물을 itch.io 에서 공유합니다!    

> 당신이 뭘 하든 다른이들의 작품을 존중하도록 노력하세용


## Chapter 2


목표

이 프로젝트의 목표는 모든 처음 목표와 유사합니다. : 엄격함, C를 사용, 간단한 알고리즘과 정보 연구 등...   


그래픽 디자인 프로젝트로서, 이 프로젝트는 다음과 같은 영역의 기술을 향상시킬 수 있습니다. : windows, colors, events, texture 등

## Chapter 3


공통부

- 프로젝트는 `Norm` 규정에 맞춰 작성되어야 합니다. 만약 보너스 파일과 함수를 작성했다면, 그것 역시 `Norm` 규정에 맞는지 체크하고 만약 내부에 `norm error`아 있다면, 0점을 받게 됩니다.
- 정의되지 않은 동작과는 별도로 함수가 의도치 않게 종료되어서는 안됩니다. (segmentation fault, bus error, double free 등). 만약 발생한다면 당신의 프로젝트는 작동하지 않는 것으로 간주되어 평가때 0점을 받게 됩니다.
- 모든 힙에서 할당된 메모리 공간은 적절하게 해제되어야 합니다. 메모리 누수는 용납되지 않습니다.
- 과제에서 요구한다면, 당신은 소스파일을 `cc`를 사용하여 `-Wall, -Wextra and -Werror` 옵션으로 컴파일할 `Makefile`을 제출해야 하고 Makefile은 relink 되어선 안됩니다.
- `Makefile`은 적어도 `$(NAME), all, clean, fclean, re` 규칙을 포함해야 합니다.
- 보너스 파트를 제출한다면 반드시 `Makefile`에 필수파트에서 금지된 모든 다양한 헤더, 라이브러리, 함수를 추가하는 `bonus` 규칙을 추가해야합니다. 보너스는 반드시 `_bonus.{c/h}`가 접미사에 붙는, 필수파트와 다른 파일로 제출해야합니다. 필수파트와 보너스파트는 서로 분리되어 평가받습니다.
- 프로젝트에서 당신의 `libft`를 허용한다면, libft폴더에 관련된 Makefile과 소스를 복사해야합니다. 프로젝트의 Makefile은 Makefile을 사용하여 라이브러리를 컴파일한 다음 프로젝트를 컴파일해야 합니다.
- 이 작업은 제출할 필요도 없고 채점도 되지 않을 것이므로 프로젝트를 위한 테스트 프로그램을 만들 것을 권장합니다. 평가를 쉽게 해줄 거예용. 디펜스때 이 테스트가 유용하다는 것을 알게 될 것입니다. 실제로 디펜스때 테스트를 자유롭게 사용할 수 있습니다.
- 할당된 깃 레포지토리에 작업물을 제출하세요. 깃 레포지토리에 들어있는 것만 채점될 것입니다. DeppThought가 작업물을 채점하도록 지정되면, 그것은 동료평가 이후에 이루어집니다. Deppthought의 평가 도중 작업의 어느부분에서 오류가 발생하면 평가가 중지됩니다.

## Chapter 4


필수파트 - so long
|||
|---|---|
| 프로그램 이름 | so_long |
| 제출할 파일들 | 관련된 모든 파일 |
| Makefile 규칙 | all, clean, fclean, re, bonus |
| 인자 | \*.ber 형식의 지도 파일 |
| 외부함수 | <pre>- open, close, read, write, <br>printf, malloc, free, perror, <br>strerror, exit<br>- MinilibX 의 모든 함수</pre> |
| Libft 허용 여부 | 허용 |
| 세부사항 | 돌고래 한마리가 물고기를 먹은 후 지구를 탈출하는 작은 2D게임을 만들어야 합니다. 혹은 어떤 영웅이라도 점수를 획득한 후 장소를 벗어나야 합니다. |

제약조건은 다음과 같습니다 :
- 반드시 `miniLibX`를 이용해야 합니다. 운영체제나 원본 소스로 부터 사용할 수 있는 버전입니다. 만약 소스로 부터 작동하는 것을 선택했다면, 공통부와 같은 룰을 `libft`에 적용해야 합니다.
- 다른 창으로 변경, 최소화 같은 창 관리를 부드럽게 유지해야합니다. 
- 예시는 돌고래 테마로 주어지지만 당신이 원하는 어떤 것이든 사용할 수 있습니다.
- 지도는 벽, 수집품, 빈 공간 세개로 구성됩니다.
- 플레이어의 목표는 지도에 있는 모든 수집품을 먹고 최소한의 움직임으로 탈출하는 것입니다.
- 이동할때 마다 현재 움직인 횟수가 쉘에 표시되어야 합니다.
- 플레이어는 위, 아래, 왼쪽, 오른쪽으로 움직일 수 있습니다.
- 2D 뷰를 사용할 것입니다.
- 게임은 실시간일 필요는 없습니다.
- 플레이어는 벽으로 움직일 수 없습니다.
- 프로그램은 창안에 이미지로 표시되고 다음 규칙을 준수해야합니다.
  - W, A, S ,D 키로 주인공을 움직일 것입니다.
  - ESC 키를 누르면 창이 닫히고 프로그램이 정상적으로 종료되어야 합니다.
  - 창에 있는 빨간 십자가를 클릭하면 창이 닫히고 프로그램이 정상적으로 종료되어야 합니다.
  - `minilibX`의 `images`를 사용하는걸 적극 권장합니다.
- 프로그램은 첫번째 인수로 지도를 묘사한 파일인 `*.ber`를 받아야 합니다.
  - 지도는 다섯가지 문자로만 구성되어 있습니다. :
    - 0 : 빈공간
    - 1 : 벽
    - C : 수집품
    - E : 탈출구
    - P : 플레이어의 시작 위치
    > 간단한 맵 구조   
    > 1111111111111   
    > 10010000000C1   
    > 1000011111001   
    > 1P0011E000001   
    > 1111111111111   
   - 지도는 벽에 의해 둘러싸이거나 닫혀있어야하며, 그렇지 않다면 에러를 반환합니다.
   - 지도는 최소 하나의 탈출구, 하나의 수집품, 하나의 시작 위치가 있어야 합니다.
   - 지도에 유효한 경로가 있는지 확인할 필요는 없습니다.
   - 지도는 반드시 직사각형입니다.
   - 지도가 규칙을 따르는 한, 모든 지도를 파싱할 수 있어야 합니다.
   - 또다른 `.ber` 지도 :
    > 1111111111111111111111111111111111    
    > 1E0000000000000C00000C000000000001   
    > 1010010100100000101001000000010101   
    > 1010010010101010001001000000010101   
    > 1P0000000C00C0000000000000000000C1   
    > 1111111111111111111111111111111111   
   - 파일에서 잘못된 구성을 발견한다면, 프로그램을 종료하고 "Error\n"뒤에 당신이 선택한 명시적인 에러 메세지를 출력합니다. 


## Chapter 5


보너스 파트

> 보너스는 필수 파트가 완벽한 경우에만 평가 될 것입니다.   
> 완벽하다는 것은 당연히 완전해야 하고, 잘못된 사용 등 치명적인 실수가 있더라도 실패할 수 없습니다.   
> 필수파트가 평가중 모든 포인트를 받지 못한다면 보너스는 완전히 무시됩니다.

평가 중 사용이 정당하다면 다른 기능을 이용해 보너스 파트를 완수할 수 있습니다.    
보너스 리스트 :
- 마주치면 죽는 적의 순찰
- sprite 애니메이션
- 이동횟수가 쉘이 아닌 화면에 직접적으로 표시
> 더 좋은 게임을 만들거에요... 너무 시간낭비하지 마세용
