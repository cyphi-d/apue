#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int
main(int argc, char **argv) {
	if( argc < 3 ) {
		fprintf(stderr,"too few arguments\n");
		goto error;
	}
	if( argc > 3 ) {
		fprintf(stderr,"too many arguments\n");
		goto error;
	}
	char * src = argv[1];
	char * trg = argv[2];
	int src_fd;
	if( ( src_fd = open(src, O_RDONLY) ) == -1 ) {
		perror("Failed to open source");
		exit(EXIT_FAILURE);
	}
	printf("\n");
	return 0;
error:
	return 1;
}
