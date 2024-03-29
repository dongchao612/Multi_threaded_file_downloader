#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <curl/curl.h>


 download(char* url, char* filename){
  
 }

int main(int argc, char const *argv[]) {
  const char *url = "https://www.releases.ubuntu.com/20.04/ubuntu-20.04.6-live-server-amd64.iso";

  const char *filename = "ubuntu_s.iso";
  download(url, filename);
  return 0;
}
