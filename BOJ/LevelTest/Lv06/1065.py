num = int(input())
hansu = 0

for n in range(1, num+1) :
    if n <= 99 : # 1���� 99������ ��� �Ѽ�
        hansu += 1 
    
    else :     
        nums = list(map(int, str(n))) # ���ڸ� �ڸ������ �и� 
        if nums[0] - nums[1] == nums[1] - nums[2] : #�������� Ȯ��
            hansu+=1