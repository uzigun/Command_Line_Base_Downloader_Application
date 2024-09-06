# File Downloader

This is a simple C program that downloads a file from a specified URL and saves it to a specified location on the local filesystem using the `URLDownloadToFile` function from the `urlmon` library.

## Description

The program uses the `URLDownloadToFile` function to download a file from the internet. It specifies the URL of the file to be downloaded and the local file path where the file will be saved. The program prints a success or failure message based on the result of the download operation.

## Prerequisites

- Windows operating system
- Microsoft Visual Studio or another compatible C compiler
- `urlmon.lib` library (included with the Windows SDK)

## How to Compile

1. Open your C development environment (e.g., Microsoft Visual Studio).
2. Create a new C project or file.
3. Copy the provided C code into your project.
4. Ensure that `urlmon.lib` is linked. This is typically handled by the `#pragma comment(lib, "urlmon.lib")` line in the code.

## How to Run

1. Compile the program.
2. Run the executable.
3. Check the specified file path to verify if the file was downloaded successfully.

## Example

The program downloads an image from the provided URL and saves it as `file.jpg` in the `C:\Users\userOne\Tempo\file.jpg` directory. Adjust the URL and file path as needed.
