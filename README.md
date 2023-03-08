# Template_IAR_STM8S
I build this template for all project STM8S I code on IAR for STM8 using STD Library
This include 3 folder:
- DriverLib: STD Library for STM8S
- ProjectFile: Workspace, config file...
- UserFile: main, other libraries...
# How to create a IAR Project
## Step 1: Create new Project
![Imgur](https://imgur.com/g7tCdJx.png)  
![Imgur](https://imgur.com/khZcCYm.png)  
Save file config (.ewp) in **ProjectFile** folder  
## Step 2: Create folder in workspace IAR
Create **DriverLib** folder include STD library file  
Create **User** folder include file: main, conf, interrupt, own library...  
![Imgur](https://imgur.com/zkRIJ3S.png)  
## Step 3: Config Options 
Select chip  
![Imgur](https://imgur.com/OvuvxTk.png)  
Include file and define symbol  
![Imgur](https://imgur.com/Mqy2Pmy.png)  
Select driver ST-LINK  
![Imgur](https://imgur.com/9tmxWa4.png)  
## Step 4: Rebuild all!
