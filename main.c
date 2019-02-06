#include <stdio.h>
#include "get_next_line.h"

/*
 * Test main function (use it just for testing)
 * If you have some problems - try to change path to the files for each one fd
 * Have fun!
 */

int     main(/*int argc, char **argv*/) {
	/**
	 ** read from file
	 */
	int fd0;
	int fd2;
	char *line0;
	char *line2;
	int fd3;
	int fd4;
	char *line3;
	char *line4;

	line0 = (char *)malloc(1000 * 1000);
	line2 = (char *)malloc(1000 * 1000);
	line3 = (char *)malloc(1000 * 1000);
	line4 = (char *)malloc(1000 * 1000);
	/** FIRST FD */
	if ((fd0 = open("//test_files/aaa.txt", O_RDONLY)) == -1)
	{
		ft_putstr("fd0 = -1 - can't open file!!!!!");
		return (1);
	}
	/** SECOND FD  */
	if ((fd2 = open("//test_files/111.txt", O_RDONLY)) == -1)
	{
		ft_putstr("fd0 = -1 - can't open file 2 !!!!!");
		return (1);
	}
	/** THIRD FD  */
	if ((fd3 = open("//test_files/www.txt", O_RDONLY)) == -1)
	{
		ft_putstr("fd0 = -1 - can't open file 3 !!!!!");
		return (1);
	}
	/** FOURTH FD  */
	if ((fd4 = open("//test_files/888.txt", O_RDONLY)) == -1)
	{
		ft_putstr("fd0 = -1 - can't open file 4 !!!!!");
		return (1);
	}


	/**
	 ** Read all lines from one file
	 */
///** 1 line */
	if (get_next_line(fd0, &line0) > 0) {
		printf("%s\n", line0);
		free(line0);
	}
	if (get_next_line(fd2, &line2) > 0) {
		printf("%s\n", line2);
		free(line2);
	}
	if (get_next_line(fd3, &line3) > 0) {
		printf("%s\n", line3);
		free(line3);
	}
	if (get_next_line(fd4, &line4) > 0) {
		printf("%s\n", line4);
		free(line4);
	}
///** 2 line */
	if (get_next_line(fd0, &line0) > 0) {
		printf("%s\n", line0);
		free(line0);
	}
	if (get_next_line(fd2, &line2) > 0)
	{
		printf("%s\n", line2);
		free(line2);
	}
	if (get_next_line(fd3, &line3) > 0) {
		printf("%s\n", line3);
		free(line3);
	}
	if (get_next_line(fd4, &line4) > 0) {
		printf("%s\n", line4);
		free(line4);
	}
/////** 3 line */
	if (get_next_line(fd0, &line0) > 0) {
		printf("%s\n", line0);
		free(line0);
	}
	if (get_next_line(fd2, &line2) > 0) {
		printf("%s\n", line2);
		free(line2);
	}
	if (get_next_line(fd3, &line3) > 0) {
		printf("%s\n", line3);
		free(line3);
	}
	if (get_next_line(fd4, &line4) > 0) {
		printf("%s\n", line4);
		free(line4);
	}
/////** 4 line */
	if (get_next_line(fd0, &line0) > 0) {
		printf("%s\n", line0);
		free(line0);
	}
	if (get_next_line(fd2, &line2) > 0) {
		printf("%s\n", line2);
		free(line2);
	}
	if (get_next_line(fd3, &line3) > 0) {
		printf("%s\n", line3);
		free(line3);
	}
	if (get_next_line(fd4, &line4) > 0) {
		printf("%s\n", line4);
		free(line4);
	}
/////** 5 line */
	if (get_next_line(fd0, &line0) > 0) {
		printf("%s\n", line0);
		free(line0);
	}
	if (get_next_line(fd2, &line2) > 0) {
		printf("%s\n", line2);
		free(line2);
	}
	if (get_next_line(fd3, &line3) > 0) {
		printf("%s\n", line3);
		free(line3);
	}
	if (get_next_line(fd4, &line4) > 0) {
		printf("%s\n", line4);
		free(line4);
	}
//////** 6 line */
	if (get_next_line(fd0, &line0) > 0) {
		printf("%s\n", line0);
		free(line0);
	}
	if (get_next_line(fd2, &line2) > 0) {
		printf("%s\n", line2);
		free(line2);
	}
	if (get_next_line(fd3, &line3) > 0) {
		printf("%s\n", line3);
		free(line3);
	}
	if (get_next_line(fd4, &line4) > 0) {
		printf("%s\n", line4);
		free(line4);
	}
	close(fd0);
	close(fd2);
	close(fd3);
	close(fd4);
}
