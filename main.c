#include <stdio.h>
#include <windows.h>
#include <urlmon.h>

// Link with urlmon.lib
#pragma comment(lib, "urlmon.lib")

int main(void) {

    // Variable to hold the result
    HRESULT result;

    // URL of the file to download
    LPCSTR url = "https://example.com/file.jpg";

    // Path to save the downloaded file
    LPCSTR filePath = "C:\\Users\\userOne\\Tempo\\file.jpg";

    // Download the file
    result = URLDownloadToFile(NULL, url, filePath, 0, NULL);

    // Message
    if (SUCCEEDED(result)) {
        printf("Download -> {Success}\n");
    } else {
        printf("Download -> {Failed}\n");
    }

    return 0;
}
