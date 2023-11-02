#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int	g_fd;

static int	print(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	return 1;
}

static int builtincd(char** argv){
	if (argv[2] && strcmp(argv[2], "|") && strcmp(argv[2], ";"))
		return (print("error: cd: bad arguments\n"));
	if (chdir(argv[1]) == -1)
	{
		print("error: cd: cannot change directory to ");
		print(argv[1]);
		print("\n");
	}
}

static int executer(char **argv, int i, char **env){
	
}

int main(int argc, char** argv, char** env){
	int i = 1;
	if (argc == 1)
		return 0;
	argv[argc] = 0;
	while (argv[i - 1] && argv[i]){
		argv = argv + i;
		i = 0;
		while (argv[i] && strcmp(argv[i],"|") != 0 && strcmp(argv[i], ";") != 0)
			i++;
		if (!strcmp(*argv, "cd"))
			builtincd(argv);
		else
			executer(argv, i, env);
		i++;
	}
}

