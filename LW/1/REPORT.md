# Отчет по лабораторной работе № 1
## по курсу "Фундаментальная информатика"

Студент группы 108 Иванов Никита Егорович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Git
2. **Цель работы**: Научиться работать с гитом
3. **Задание**:
- завести репозиторий (**общий под все лабораторные работы с отдельной папкой под каждую лр!**)
- отчет с листингом в Markdown (листинг - ctrl+c -> ctrl+v из терминала с форматированием в markdown)
- создать отдельную ветку в репозитории под задание
- создать коммит с листингом и отчетом
- смержить ветку в мейн
1. **Идея, метод, алгоритм решения задачи**: Действую по инструкции
2. **Сценарий выполнения работы**: 

- Открыл терминал
- Создал репозиторий
- Создал ветку lab_1
- Создал файл REPORT.md
- Закомитил
- Смерджил ветки
- Запушил на гитхаб

6. **Протокол**: 
```
$ git clone https://github.com/2vn2k/r_lab              
Cloning into 'r_lab'...
warning: You appear to have cloned an empty repository.
                                                                                                                                   
$ cd Git     
                                                                                                                                   
$ git clone https://github.com/2vn2k/r_lab
Cloning into 'r_lab'...
warning: You appear to have cloned an empty repository.
                                                                                                                                   
$ cd r_lab 
                                                                                                                                   
$ git remote                                                             
origin
                                                                                                                                   
$ git remote -v                                                          
origin  https://github.com/2vn2k/r_lab (fetch)
origin  https://github.com/2vn2k/r_lab (push)
                                                                                                                                   
$ mkdir LW               
                                                                                                                                   
$ mkdir LW/1/
                                                                                                                                   
$ touch REPORT.md               
                                                                                                                                   
$ git branch -a    
                                                                                                                                   
$ git checkout -b master                  
Switched to a new branch 'master'
                                                                                                                                   
$ git checkout -b lab_1 
Switched to a new branch 'lab_1'
                                                                                                                                   
$ git add --all        
                                                                                                                                   
$ git commit "start"   
error: pathspec 'start' did not match any file(s) known to git
                                                                                                                                   
$ git commit -m "start"
[lab_1 (root-commit) 02e8279] start
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 REPORT.md
                                                                                                                                   
$ git push -u origin master
error: src refspec master does not match any
error: failed to push some refs to 'https://github.com/2vn2k/r_lab'
                                                                                                                                   
$ git push origin master 
error: src refspec master does not match any
error: failed to push some refs to 'https://github.com/2vn2k/r_lab'
                                                                                                                                   
$ error: failed to push some refs to 'https://github.com/2vn2k/r_lab'

                                                                                                                                   
$ git pull --rebase
There is no tracking information for the current branch.
Please specify which branch you want to rebase against.
See git-pull(1) for details.

    git pull <remote> <branch>

If you wish to set tracking information for this branch you can do so with:

    git branch --set-upstream-to=origin/<branch> lab_1

                                                                                                                                   
$ git pull --rebase origin lab_1
fatal: couldn't find remote ref lab_1
                                                                                                                                   
$ git pull --rebase origin master
fatal: couldn't find remote ref master
                                                                                                                                   
$ git config --global pull.rebase true
                                                                                                                                   
$ git config --global rebase.autoStash true

                                                                                                                                   
$ git pull --rebase origin master
fatal: couldn't find remote ref master
                                                                                                                                   
$ git branch -a                            
* lab_1
                                                                                                                                   
$ git push origin lab_1                 
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

Username for 'https://github.com': 2vn2k
Password for 'https://2vn2k@github.com': 
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/2vn2k/r_lab/'
                                                                                                                                   
$ git remote -v        
origin  https://github.com/2vn2k/r_lab (fetch)
origin  https://github.com/2vn2k/r_lab (push)
                                                                                                                                   
$ git remote set-url origin git@github.com:2vn2k/r_lab.git
                                                                                                                                   
$ git push origin lab_1                                   
The authenticity of host 'github.com (140.82.121.3)' can't be established.
ED25519 key fingerprint is SHA256:+DiY3wvvV6TuJJhbpZisF/zLDA0zPMSvHdkr4UvCOqU.
This key is not known by any other names.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added 'github.com' (ED25519) to the list of known hosts.
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
                                                                                                                                   
┌──(nikita㉿kali)-[~/Git/r_lab]
$ git init             
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint: 
hint:   git config --global init.defaultBranch <name>
hint: 
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint: 
hint:   git branch -m <name>
Initialized empty Git repository in /home/nikita/Git/r_lab/.git/
                                                                                                                                   
$ touch LW/1/REPORT.md
                                                                                                                                   
$ git add LW/1/REPORT.md
                                                                                                                                   
$ git commit -m "first commit"

[master (root-commit) f128150] first commit
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 LW/1/REPORT.md
                                                                                                                                   
$ git branch -M main
                                                                                                                                   
$ git branch -M master
                                                                                                                                   
$ git branch -d main  
error: branch 'main' not found.
                                                                                                                                   
$ git remote add origin git@github.com:2vn2k/r_lab.git
                                                                                                                                   
$ git push -u origin master
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
                                                                                                                                   
$ git remote add origin https://github.com/2vn2k/r_lab.git
error: remote origin already exists.
                                                                                                                                   
$ git remote set-url origin https://github.com/2vn2k/r_lab.git
                                                                                                                                   
$ git push -u origin master                                   
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

Username for 'https://github.com': 2vn2k
Password for 'https://2vn2k@github.com': 
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/2vn2k/r_lab.git/'
                                                                                                                                   
$ git push -u origin master
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

Username for 'https://github.com': 2vn2k
Password for 'https://2vn2k@github.com': 
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Writing objects: 100% (5/5), 313 bytes | 313.00 KiB/s, done.
Total 5 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/2vn2k/r_lab.git
 * [new branch]      master -> master
branch 'master' set up to track 'origin/master'.
                                                                                                                                   
$ git checkout -b lab_1       
Switched to a new branch 'lab_1'
                                                                                                                                   
$ git add --all                                               
                                                                                                                                   
$ git commit -m "setup report"

[lab_1 f29f256] setup report
 1 file changed, 34 insertions(+)
                                                                                                                                   
$ git push -u origin master                                   
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

Username for 'https://github.com': 2vn2k
Password for 'https://2vn2k@github.com': 
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

branch 'master' set up to track 'origin/master'.
Everything up-to-date
                                                                                                                                   
$ git push -u origin lab_1 
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

Username for 'https://github.com': 2vn2k
Password for 'https://2vn2k@github.com': 
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Delta compression using up to 12 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (5/5), 1.07 KiB | 1.07 MiB/s, done.
Total 5 (delta 0), reused 0 (delta 0), pack-reused 0
remote: 
remote: Create a pull request for 'lab_1' on GitHub by visiting:
remote:      https://github.com/2vn2k/r_lab/pull/new/lab_1
remote: 
To https://github.com/2vn2k/r_lab.git
 * [new branch]      lab_1 -> lab_1
branch 'lab_1' set up to track 'origin/lab_1'.
                                                                                                                                   
$ git checkout master  
Switched to branch 'master'
Your branch is up to date with 'origin/master'.
                                                                                                                                   
$ git merge lab_1    
Updating f128150..f29f256
Fast-forward
 LW/1/REPORT.md | 34 ++++++++++++++++++++++++++++++++++
 1 file changed, 34 insertions(+)
                                                                                                                                   
$ git branch -d lab_1
Deleted branch lab_1 (was f29f256).
                                                                                                                                   
$ git commit -m "merge"       

On branch master
Your branch is ahead of 'origin/master' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
                                                                                                                                   
$ git push -u origin master
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

Username for 'https://github.com': 2vn2k
Password for 'https://2vn2k@github.com': 
fatal: No credential store has been selected.

Set the GCM_CREDENTIAL_STORE environment variable or the credential.credentialStore Git configuration setting to one of the following options:

  secretservice : freedesktop.org Secret Service (requires graphical interface)
  gpg           : GNU `pass` compatible credential storage (requires GPG and `pass`)
  cache         : Git's in-memory credential cache
  plaintext     : store credentials in plain-text files (UNSECURE)

See https://aka.ms/gcm/credstores for more information.

Total 0 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/2vn2k/r_lab.git
   f128150..f29f256  master -> master
branch 'master' set up to track 'origin/master'.

```

7. **Замечания автора** Нету
8. **Выводы**: Мне понравилась работа с командами Bash и терминалом Linux. Полученные знания пригодятся мне в работе с Linux и программировании. Было интересно изучать команды и экспериментировать с ними. Задание не заняло много времени, но было полезной практикой. Теперь я могу эффективно работать в терминале и управлять файлами.
