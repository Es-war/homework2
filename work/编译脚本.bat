@echo off
set /p a=�������ļ����ڴ���
cd "%a%"
set /p b=�������ļ�����·��
cd "%b%"
set /p c=�������ļ���
echo ���뿪ʼ
gcc "%c%" -o try.exe
if exist "try.exe" echo ����ɹ�
if not exist "try.exe" echo ����ʧ��
pause