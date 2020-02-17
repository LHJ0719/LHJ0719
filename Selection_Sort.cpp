// 가장 작은 것을 선택해 제일 앞으로 보내는 정렬 알고리즘 
// 10 + 9 + 8 + ... + 1 번 비교 -> N ( N + 1 ) / 2
// 시간 복잡도 O(N^2)

void SelectionSort(int nArr[])
{
  int nIndex  = 0;  // 비교 이후 swap할 위치
  int nTemp   = 0;  // swapping 시 임시 저장 변수
  int nMin    = 0;  // 최소값 비교

  for (int i = 0; i < 10; ++i)
  {
     nMin = 999;
     for (int j = i; j < 10; ++j)
     {
	if (nMin > nArr[j])
	{
	  nMin = nArr[j];
	  nIndex = j;
	}
     }
    // Swapping
    nTemp         = nArr[i];
    nArr[i]       = nArr[nIndex];
    nArr[nIndex]  = nTemp;
   }
}
