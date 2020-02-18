// 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내는 정렬 알고리즘
// 구현은 쉬우나 가장 비효율적인 정렬 알고리즘
// 시간 복잡도 10 + 9 + 8 + ... + 1
// O(N^2)
// 선택 정렬과 시간 복잡도는 같으나, 루프마다 swapping을 해야 하므로 연산량이 더 많음!
void bubbleSort(int nArr[])
{
  int nTemp;

  for (int i = 0; i < 10; ++i)
  {
    for (int j = 0; j < 9 - i; ++j)
    {
      if (nArr[j] > nArr[j + 1])
      {
	nTemp = nArr[j];
	nArr[j] = nArr[j + 1];
	nArr[j + 1] = nTemp;
       }
     }
   }
}
