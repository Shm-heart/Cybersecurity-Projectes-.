from colorama import Fore, init ,Style
import time
user_name=input("Enter a username : ")
password=input("Enter a password : ")
file=open("password.txt",'r')
p=0
p1=100
for i in file:
  
    if i.strip()==password.strip():        
        p+=100
        percent = p+p1
        per=percent/2
        bar = "#" * (p // 2)
        spaces = " " * (50 - len(bar))
        print(Fore.GREEN+f"\r[{bar}{spaces}] {per}%", end="")
        time.sleep(1)
        print(Fore.GREEN+f"\nthe user password {password} was identfided  ")
        break
    else:
        print("\r",Fore.RED+"Craking...........",end="")
        p+=1
        p1-=1
        percent = p
        bar = "#" * (p // 2)
        spaces = " " * (50 - len(bar))
        print(f"\r[{bar}{spaces}] {percent}%", end="")
        time.sleep(1)
Style.RESET_ALL
