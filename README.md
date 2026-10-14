# Puppy Linux Installation and System Call Implementation 🐶💻

![Puppy Linux](https://upload.wikimedia.org/wikipedia/commons/thumb/5/58/Puppy_Linux_logo.svg/1200px-Puppy_Linux_logo.svg.png)

Welcome to the OSSP Individual Assignment repository! This project focuses on the installation of Puppy Linux OS and the implementation of the system call `chmod()`. As a student at Helen University, I have documented my journey and findings here.

## Table of Contents

1. [Introduction](#introduction)
2. [Installation of Puppy Linux](#installation-of-puppy-linux)
3. [Understanding `chmod()` System Call](#understanding-chmod-system-call)
4. [Usage Instructions](#usage-instructions)
5. [Releases](#releases)
6. [Contributing](#contributing)
7. [License](#license)
8. [Contact](#contact)

## Introduction

Puppy Linux is a lightweight Linux distribution that is easy to use and can run on older hardware. This project explores its installation and the implementation of the `chmod()` system call, which is crucial for managing file permissions in Unix-like operating systems.

## Installation of Puppy Linux

### Step 1: Downloading Puppy Linux

To get started, download the latest version of Puppy Linux from the official website. You can find various versions tailored for different needs. Here’s a simple guide to downloading and creating a bootable USB drive:

1. Visit the [Puppy Linux website](http://puppylinux.com).
2. Choose a version that suits your needs.
3. Download the ISO file.
4. Use a tool like Rufus or UNetbootin to create a bootable USB drive.

### Step 2: Booting from USB

Once you have created a bootable USB drive, follow these steps:

1. Insert the USB drive into your computer.
2. Restart your computer and enter the BIOS/UEFI settings.
3. Change the boot order to prioritize USB drives.
4. Save changes and exit.

### Step 3: Installing Puppy Linux

Follow the on-screen instructions to install Puppy Linux. The process is straightforward and user-friendly. You will have options for a full installation or a frugal installation, depending on your needs.

### Step 4: Initial Setup

After installation, configure your system settings, including:

- Language
- Time zone
- Network settings

### Step 5: Familiarizing with the Interface

Puppy Linux offers a simple and intuitive interface. Spend some time exploring the desktop environment and available applications.

## Understanding `chmod()` System Call

The `chmod()` system call is essential for managing file permissions. It allows users to change the read, write, and execute permissions of files and directories.

### Syntax

```c
int chmod(const char *path, mode_t mode);
```

### Parameters

- `path`: The file or directory path.
- `mode`: The new permissions to set.

### Permission Types

Permissions are represented using a combination of bits:

- Read (r): 4
- Write (w): 2
- Execute (x): 1

You can combine these values to set specific permissions. For example:

- `chmod 755 filename`: Grants read, write, and execute permissions to the owner, and read and execute permissions to others.

### Example Code

Here is a simple example of how to use `chmod()` in a C program:

```c
#include <stdio.h>
#include <sys/stat.h>

int main() {
    const char *file_path = "example.txt";
    mode_t new_permissions = 0755; // Owner: rwx, Group: r-x, Others: r-x

    if (chmod(file_path, new_permissions) == -1) {
        perror("chmod failed");
        return 1;
    }

    printf("Permissions changed successfully.\n");
    return 0;
}
```

### Compiling and Running the Code

1. Save the code in a file named `change_permissions.c`.
2. Open a terminal and navigate to the directory containing the file.
3. Compile the code using:

   ```bash
   gcc change_permissions.c -o change_permissions
   ```

4. Run the program:

   ```bash
   ./change_permissions
   ```

## Usage Instructions

This section provides detailed instructions on how to utilize the features of this repository.

### Step 1: Clone the Repository

To get a copy of this repository, run:

```bash
git clone https://github.com/ssuidar/OSSP-individual-assignment-
```

### Step 2: Navigate to the Project Directory

Change to the project directory:

```bash
cd OSSP-individual-assignment-
```

### Step 3: Compile the Code

Compile the provided C files using `gcc`:

```bash
gcc your_file.c -o your_output
```

### Step 4: Run the Program

Execute the compiled program:

```bash
./your_output
```

## Releases

You can find the latest releases of this project [here](https://github.com/ssuidar/OSSP-individual-assignment-/releases). Download the files and execute them as needed.

## Contributing

Contributions are welcome! If you have suggestions for improvements or additional features, please feel free to submit a pull request or open an issue.

### How to Contribute

1. Fork the repository.
2. Create a new branch for your feature or fix.
3. Make your changes and commit them.
4. Push your changes to your fork.
5. Create a pull request.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.

## Contact

For any questions or inquiries, feel free to reach out to me:

- Email: your.email@example.com
- LinkedIn: [Your LinkedIn Profile](https://www.linkedin.com/in/yourprofile)

Thank you for visiting my repository! I hope you find the information helpful in your own projects. 

For more updates and releases, check the [Releases](https://github.com/ssuidar/OSSP-individual-assignment-/releases) section regularly.