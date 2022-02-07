import random

command = int(input('是否開始對戰?　0.開始對戰 1.走為上策'))

c_choice = random.randint(0, 2)

if command == 0:
    choice = int(input('請問要派出什麼神奇寶貝呢? 0.妙蛙種子 1.小火龍 2.傑尼龜'))

    if choice == 0:
        print('你派出了妙蛙種子!')
        if c_choice == 0:
            print('對方派出妙蛙種子，平分秋色!')
        elif c_choice == 1:
             print('對方派出小火龍，屬性相剋!你輸了!')
        elif c_choice == 2:
             print('對方派出傑尼龜，耶，你贏了!')

    elif choice == 1:
        print('你派出了小火龍!')
        if c_choice == 0:
            print('對方派出妙蛙種子，耶，你贏了!')
        elif c_choice == 1:
            print('對方派出小火龍，平分秋色!')
        elif c_choice == 2:
         print('對方派出傑尼龜，屬性相剋!你輸了!')

    elif choice == 2:
       print('你派出了傑尼龜!')
       if c_choice == 0:
           print('對方派出妙蛙種子，屬性相剋!你輸了!')
       elif c_choice == 1:
         print('對方派出小火龍，耶，你贏了!')
       elif c_choice == 2:
         print('對方派出傑尼龜，平分秋色!')

elif command == 1:
    print('遊戲結束')