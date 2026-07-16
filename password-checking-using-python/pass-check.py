from colorama import Fore, init ,Style
import time
user_name=input("Enter a username : ")
password=input("Enter a username : ")
file=open("password.txt",'r')
for i in file:
    if i.strip()==password.strip():
        print(Fore.GREEN+f"the user password {password} was identfided  ")
        break
    else:
        print(Fore.RED+f"\rTring..... to crake the password of user {password} using dummy password {i} ",end="")
        time.sleep(1)
Style.RESET_ALL
