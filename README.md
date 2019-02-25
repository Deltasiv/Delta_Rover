# Delta Rover

![](https://img.shields.io/badge/license-MIT-lightgray.svg) ![](https://img.shields.io/badge/version-0.0.4-yellow.svg) ![](https://img.shields.io/badge/build-passing-green.svg) ![](https://img.shields.io/badge/Arduino-1.8.8-teal.svg) ![](https://img.shields.io/badge/ShellScript-5.0-red.svg) ![](https://img.shields.io/badge/C++-17-blue.svg)

> A rover meant to go to space, bu that apparently dreamed too big. 

---

### Table of Contents 

These are the sections on the [README.md](https://github.com/Deltasiv/Delta_Rover/blob/master/README.md) file. 

- [Description](#description)
- [What can I do with this](#what-can-i-do-with-this)
- [Updates](#updates)
- [References](#references) 
- [Contributing](#contributing) 
- [License](#license)
- [Author Info](#author-info)
- [Contributors](#contributors) 
- [Version Info](#version-info)
- [Help](#help) 
- [Info](#info) 

--- 

## Description 
This rover came from the awesome people who brought to you Lemon and Lemulation, plus one. In it's final stage it's going to drive itself avoiding obstacles, both natural(falls, wind, a human) and artificial(buildings, cars, 
almost everything)

If you find a bug on our website be sure to checkout the contact page of the website to tell about the bug or open an issue request here on github. We appreciate every contribution and we try to credit the biggest contributors by placing their name in this readme.

## What can I do with this?

You can control a rover :) 

#### Other technologies are subject to be used and may or will be changed without notice. 

--- 

## References

## How To Use 

To use this work simply download it and edit or use it by running it in the GNU C++ Compiler.

#### Prerequistites 

You must have the GNU C++ Compiler and Arduino software if you don't have one run.

```bash 
sudo apt-get install g++

sudo apt-get update && sudo apt-get install arduino arduino-core 
```

#### Installation 

To install Lemon please use the following command and make sure you have the GNU C++ Compiler. 

```
git clone https://github.com/Deltasiv/Lemon.git or Download it 
```

#### Usage 

To use this program go to your terminal go to the directory of these files then type the following command. 

```bash
g++ std=c++17 file_name.cpp -o file_name

then 

./file_name
```

!!!Include more things here!!!

```
Or run from the shell script
```

#### Program Usage 

`lemon.cpp`

```cpp
    error fehler;

	std::ostringstream(s1);
	s1 << ERRORgen << fehler.ERRORNO1;
	std::string s2error = s1.str();

	auto num = 0;
	auto limit = 3;

	std::string pass;
	std::string pepper;

	std::cout << "Welcome..." << std::endl;
      	std::cout << "\n\nPlease enter the password: " << std::endl;

	std::ifstream sauce("INSERT FILE PATH HERE");
	std::getline(sauce, pepper);

	do
	{

		std::cout << "\n\nPlease enter password: ";
		std::cin >> pass;
```

```
Please enter the password: 

Input: ****
```

---

`main.imo`

```cpp
#include<Wire.h>
const int MPU_addr=0x68;  // I2C address of the MPU-6050
int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ, spd, Zspd, Yspd;
int16_t delayspd = 10;
void setup(){
  Wire.begin();
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x6B);  // PWR_MGMT_1 register
  Wire.write(0);     // set to zero (wakes up the MPU-6050)
  Wire.endTransmission(true);
  Serial.begin(9600);
```

`run_no`

```bash
#!/bin/bash

# This file is to run directly from a shell script
# Code must be compiled to work with this shell script 
# You must have the two files in the same directory (shell and elf)

./nomad
```

```
output: runs file
```

--- 

#### Technologies Used 

- Arduino ide 1.8.8 
- Shell Script 5.0
- C++ 17 

---

## Files Included 

[main.ino](https://github.com/Deltasiv/Delta_Rover/blob/master/main.ino)
[WIP folder](https://github.com/Deltasiv/Delta_Rover/tree/master/Delta%20Rover's%20design-%20WIP)
[CONTRIBUTIONS.md](https://github.com/Deltasiv/Delta_Rover/blob/master/CONTRIBUTIONS.md)
[CONTRIBUOTRS.md](https://github.com/Deltasiv/Delta_Rover/blob/master/CONTRIBUTORS.md)
[LICENSE](https://github.com/Deltasiv/Delta_Rover/blob/master/LICENSE)
[README.md](https://github.com/Deltasiv/Delta_Rover/blob/master/README.md)

## Updates 

This is where you can see all the new stuff in the next version of Darwin 

Updates to New Version: 

    The gyroscope will serve it's funcion and not spit out random numbers

    Processing frontend will finally exist


[Back To The Top](#Delta_Rover) 

--- 

## Contributing

Be aware of the fact that contributing will be hard since you are required to have the same configuration as us for testing your code before uploading, but still, feel free to contribute to make this a better rover.

If you wish to help on this project you can simply make changes to the file and post your changes and if they are appreciated we will merge them to the Master branch. Please read the [CONTRIBUTING.md](https://github.com/Deltasiv/Delta_Rover/blob/master/CONTRIBUTORS.md) file for more information. If you have contributed to this work known as Darwin you will be credited the file for contributors is [CONTRIBUTIONS.md](https://github.com/Deltasiv/Delta_Rover/blob/master/CONTRIBUTIONS.md). :) 

--- 

## License 

MIT License 

Copyright (c) [2019] [Deltasiv] 

Permission is hereby granted, free of charge, to any person obtainin g a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions: 

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software. 

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT, IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 

See | [LICENSE.md](https://github.com/Deltasiv/Delta_Rover/blob/master/LICENSE) file or [MIT](https://choosealicense.com/licenses/mit/)|

[Back To The Top](#Delta_Rover) 

--- 

## Author Info 

- Twitter - [Hydra](https://twitter.com/Hydra_3301)

--- 

- Github - [YELLOWHATT](https://github.com/YELLOWHATT)
- Github - [NotLugozzi](https://github.com/NotLugozzi)
- Github - [Hydra](https://github.com/Hydr43301)
- Github - [Johk3](https://github.com/Johk3)

--- 

## Contributors 

- YELLOWHATT 

- Hydra 

- Johk3 

- NotLugozzi

--- 

## Version Info 

The current stable version of the [project](https://github.com/Deltasiv/Delta_Rover) is: 0.0.2  

--- 

## Help 

If there is a bug please contact us through our social media or email. 

- Email Address: thekoolaidmannn@gmail.com 

- Email Address: hydra3301@protonmail.com 

--- 

## Info 

If you have any info you are willing to know contact us on our social media or email. 

Emails are located in [Help](#help) ortherwise use Twitter or Discord.  

--- 

#### Thank you for giving Delta Rover a look :) 

---

[Back To The Top](#Delta_Rover) 
