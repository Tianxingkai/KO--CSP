for t in range(int(input())):
    s = input()  # 待判断字符串
    left_A, mid_A, right_A = 0, 0, 0  # P左边、PT中间、T右边的A的数量
    sum_A = 0  # A的数量
    count_T, index_T = 0, 0  # T的数量、下标
    count_P, index_P = 0, 0  # P的数量、下标
    l = len(s)  # 字符串长度

    for i in range(l):
        if s[i] == 'P':
            index_P = i
            count_P += 1
        elif s[i] == 'T':
            index_T = i
            count_T += 1
        elif s[i] == 'A':
            sum_A += 1
    # T P数量为1，A的数量不为0，且A的数量 = 总字符-2，且P在T的左边
    if count_P == 1 and count_T == 1 and index_P < index_T and sum_A and sum_A == l-2:
        left_A = index_P
        mid_A = index_T - index_P - 1
        right_A = l - 1 - index_T
        if mid_A > 0 and left_A*mid_A == right_A:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
