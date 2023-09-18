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
8. **Выводы**: Я научился создавать git репозитории и считаю это ОЧЕНЬ полезным!