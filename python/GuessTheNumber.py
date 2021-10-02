import random
def main():
    num = random.randint(0,100)
    user_num=int(input('Guess the number: '))
    guess(num, user_num) #function call
    print('The Number was', num)


def guess(num, user_num): #function definition 
    while(user_num!=num):
        if (user_num>(num+10)):
            print('Too High :(')
            user_num=int(input('Guess Again: '))
        elif (num<user_num<=(num+10)):
            print('High :|')
            user_num=int(input('Guess Again: '))
        elif (user_num<(num-10)):
            print('Too Low :(')
            user_num=int(input('Guess Again: '))
        elif (num>user_num>=(num-10)):
            print('Low :|')
            user_num=int(input('Guess Again: '))

if __name__=='__main__':
    main()