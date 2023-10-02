# Отчет по лабораторной работе № 2
## по курсу "Фундаментальная информатика"

Студент группы 108 Иванов Никита Егорович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Bash, linux terminal
2. **Цель работы**: Научиться работать с основными командами
3. **Задание**:
- Опробовать следующие команды:
    - who
    - pwd
    - ls
    - cd
    - cp
    - mv
    - rm
    - cat
    - ps
    - tail
    - head
    - grep
    - history
    - mkdir
    - rmdir
    - sudo
    - echo
    - ssh
    - scp
    - ssh-keygen
    - ssh-copy-id
- Использовать основные команды
- Сохранить листинг в файл
- Заархивировать
- Отправить на удаленную машину, там разархивировать
- Скачать разархивированный файл к себе на машину
- Составить отчет с листингом в формате markdown
- Выложить на github через merge веток
4. **Идея, метод, алгоритм решения задачи**: Действую по инструкции
5. **Сценарий выполнения работы**: 
- Открыл терминал
- Опробовал основные команды терминала
- Сохранил листинг в файл listing.txt и заархивировал его
- Отправил архив на удалённую машину и разархивировал его
- Составил отчёт
- Выложил на гитхаб через merge


<details>
  <summary>6. <b>Протокол:</b></summary>

  ```
  ┌──(nikita㉿kali)-[~]
  └─$ who     
  nikita   tty7         2023-09-18 17:34 (:0)
                                                                                                                                    
  ┌──(nikita㉿kali)-[~]
  └─$ pwd       
  /home/nikita
                                                                                                                                    
  ┌──(nikita㉿kali)-[~]
  └─$ ls                     
  1234-01.cap                    Desktop                                                       docker
  1234-01.csv                    Documents                                                     hs
  1234-01.kismet.csv             Downloads                                                     keys
  1234-01.kismet.netxml         'GOG Games'                                                    keys.pub
  1234-01.log.csv                Git                                                           labs_inf
  1234-02.cap                    HotA_Sync.exe                                                 maxwell-the-cat-maxwell.gif
  1234-02.csv                    HotA_logs                                                     microsoft.gpg
  1234-02.kismet.csv             HotA_settings.ini                                             n_ivanov
  1234-02.kismet.netxml          Music                                                         n_ivanov.pub
  1234-02.log.csv                Pictures                                                      obs-studio
  Capture-Pat-01.cap             Public                                                        obs-v4l2sink.deb
  Capture-Pat-01.csv             PycharmProjects                                               proton
  Capture-Pat-01.kismet.csv      Steam.desktop                                                 r_lab
  Capture-Pat-01.kismet.netxml   Templates                                                     snap
  Capture-Pat-01.log.csv         VSCode                                                        test
  Capture-Pat-02.cap             Videos                                                        test.bash
  Capture-Pat-02.csv             arch                                                          test.pub
  Capture-Pat-02.kismet.csv      bitmap                                                        wine
  Capture-Pat-02.kismet.netxml   bitmap1.c                                                     wires
  Capture-Pat-02.log.csv         cracked.json
  DOOM                           cuda-repo-debian11-12-2-local_12.2.2-535.104.05-1_amd64.deb
                                                                                                                                    
  ┌──(nikita㉿kali)-[~]
  └─$ cd Documents 
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ cp COPYME dir_name 
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ mw RENAMEME renamed    
  mw: command not found
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ mv RENAMEME renamed
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ mv renamed DELME   
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ rm DELME 
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ touch README        
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ cat README                                  
  Never gonna give you up
  Never gonna let you down
  Never gonna run around and desert you
  Never gonna make you cry
  Never gonna say goodbye
  Never gonna tell a lie and hurt you

  You've been Rickrolled lmao
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ ps 
      PID TTY          TIME CMD
    3173 pts/0    00:00:01 zsh
    10023 pts/0    00:00:00 ps
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ tail README 
  Never gonna give you up
  Never gonna let you down
  Never gonna run around and desert you
  Never gonna make you cry
  Never gonna say goodbye
  Never gonna tell a lie and hurt you

  You've been Rickrolled lmao
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ tail README -n 3
  Never gonna tell a lie and hurt you

  You've been Rickrolled lmao
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ head README -n 2
  Never gonna give you up
  Never gonna let you down
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ ls | grep README
  README
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ grep "Never" README                          
  Never gonna give you up
  Never gonna let you down
  Never gonna run around and desert you
  Never gonna make you cry
  Never gonna say goodbye
  Never gonna tell a lie and hurt you
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ history 
      1  sudo apt instal snapd
    ...
    791  grep "Never" README
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ mkdir dir       
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ cd dir      
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents/dir]
  └─$ cd ../
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ rmdir dir
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ ls              
  README  dir_name
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ sudo                              
  usage: sudo -h | -K | -k | -V
  usage: sudo -v [-ABkNnS] [-g group] [-h host] [-p prompt] [-u user]
  usage: sudo -l [-ABkNnS] [-g group] [-h host] [-p prompt] [-U user]
              [-u user] [command [arg ...]]
  usage: sudo [-ABbEHkNnPS] [-r role] [-t type] [-C num] [-D directory]
              [-g group] [-h host] [-p prompt] [-R directory] [-T timeout]
              [-u user] [VAR=value] [-i | -s] [command [arg ...]]
  usage: sudo -e [-ABkNnS] [-r role] [-t type] [-C num] [-D directory]
              [-g group] [-h host] [-p prompt] [-R directory] [-T timeout]
              [-u user] file ...
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ sudo su                           
  [sudo] password for nikita: 
  ┌──(root㉿kali)-[/home/nikita/Documents]
  └─# echo "text"
  text
                                                                                                                                    
  ┌──(root㉿kali)-[/home/nikita/Documents]
  └─# exit()     
  function> 
                                                                                                                                    
  ┌──(root㉿kali)-[/home/nikita/Documents]
  └─# exit  
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ ssh n_ivanov@185.5.249.140
  Enter passphrase for key '/home/nikita/.ssh/id_rsa': 
  Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

  * Documentation:  https://help.ubuntu.com
  * Management:     https://landscape.canonical.com
  * Support:        https://ubuntu.com/advantage
  New release '22.04.3 LTS' available.
  Run 'do-release-upgrade' to upgrade to it.

  Last login: Mon Sep 18 11:08:27 2023 from 85.143.224.26
  n_ivanov@vds2476450:~$ ls
  tar.tar  test
  n_ivanov@vds2476450:~$ cp test test2
  n_ivanov@vds2476450:~$ logout
  Connection to 185.5.249.140 closed.
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ ssh-keygen -t rsa                 
  Generating public/private rsa key pair.
  Enter file in which to save the key (/home/nikita/.ssh/id_rsa): 
  /home/nikita/.ssh/id_rsa already exists.
  Overwrite (y/n)? y
  Enter passphrase (empty for no passphrase): 
  Enter same passphrase again: 
  Your identification has been saved in /home/nikita/.ssh/id_rsa
  Your public key has been saved in /home/nikita/.ssh/id_rsa.pub
  The key fingerprint is:
  SHA256:IlsILqEargNi86YAr+LXfYDVmVlZrtKaRMN7mOUMtsQ nikita@kali
  The key's randomart image is:
  +---[RSA 3072]----+
  |            o.   |
  |        o  o.    |
  |. .     .E=. .   |
  |.o . . .+=% .    |
  |= . o = SB *     |
  |**   = o. =      |
  |*.+ o . .o       |
  |=. + . . .       |
  |=++     .        |
  +----[SHA256]-----+
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ ssh-copy-id n_ivanov@185.5.249.140
  /usr/bin/ssh-copy-id: INFO: Source of key(s) to be installed: "/home/nikita/.ssh/id_rsa.pub"
  /usr/bin/ssh-copy-id: INFO: attempting to log in with the new key(s), to filter out any that are already installed
  /usr/bin/ssh-copy-id: INFO: 1 key(s) remain to be installed -- if you are prompted now it is to install the new keys
  n_ivanov@185.5.249.140's password: 

  Number of key(s) added: 1

  Now try logging into the machine, with:   "ssh 'n_ivanov@185.5.249.140'"
  and check to make sure that only the key(s) you wanted were added.
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ touch listing.txt
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ nano listing.txt 
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ tar -cf listing.tar listing.txt
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ scp listing.tar  n_ivanov@185.5.249.140: /home/n_ivanov/               
  /home/n_ivanov/: No such file or directory
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ scp listing.tar  n_ivanov@185.5.249.140:/home/n_ivanov/ 
  Enter passphrase for key '/home/nikita/.ssh/id_rsa': 
  listing.tar                                                                                      100%   20KB   1.6MB/s   00:00    
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ ssh n_ivanov@185.5.249.140                             
  Enter passphrase for key '/home/nikita/.ssh/id_rsa': 
  Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

  * Documentation:  https://help.ubuntu.com
  * Management:     https://landscape.canonical.com
  * Support:        https://ubuntu.com/advantage
  New release '22.04.3 LTS' available.
  Run 'do-release-upgrade' to upgrade to it.

  Last login: Mon Sep 18 17:57:38 2023 from 95.24.22.50
  n_ivanov@vds2476450:~$ tar -xf listing.tar 
  n_ivanov@vds2476450:~$ logout
  Connection to 185.5.249.140 closed.
                                                                                                                                    
  ┌──(nikita㉿kali)-[~/Documents]
  └─$ scp n_ivanov@185.5.249.140:listing.txt listing.txt               
  Enter passphrase for key '/home/nikita/.ssh/id_rsa': 
  listing.txt                                                                                      
  ```

</details>
<br \>

7. **Замечания автора** Нету
8. **Выводы**: Мне понравилась работа с командами Bash и терминалом Linux. Полученные знания пригодятся мне в работе с Linux и программировании. Было интересно изучать команды и экспериментировать с ними. Задание не заняло много времени, но было полезной практикой. Теперь я могу эффективно работать в терминале и управлять файлами.
