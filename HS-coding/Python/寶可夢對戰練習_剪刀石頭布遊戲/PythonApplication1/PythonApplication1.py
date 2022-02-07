import random

command = int(input('是否開始幹架?　0.來啊，誰怕誰 1.傑哥不要~阿~~'))

c_choice = random.randint(0, 2)

if command == 0:
    choice = int(input('請問要出什麼呢? 0.剪刀 1.石頭 2.布'))

    if choice == 0:
        print('你出了剪刀!')
        if c_choice == 0:
            print('對方出剪刀，平分秋色!')
        elif c_choice == 1:
             print('對方出石頭，屬性相剋!你輸了!')
        elif c_choice == 2:
             print('對方出布，耶，你贏了!')

    elif choice == 1:
        print('你出了石頭!')
        if c_choice == 0:
            print('對方出剪刀，耶，你贏了!')
        elif c_choice == 1:
            print('對方出石頭，平分秋色!')
        elif c_choice == 2:
         print('對方出布，屬性相剋!你輸了!')

    elif choice == 2:
       print('你出了布!')
       if c_choice == 0:
           print('對方出剪刀，屬性相剋!你輸了!')
       elif c_choice == 1:
         print('對方出石頭，耶，你贏了!')
       elif c_choice == 2:
         print('對方出布，平分秋色!')

elif command == 1:
    print('遊戲結束')