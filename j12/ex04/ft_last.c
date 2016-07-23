
#include <stdio.h>
#include <fcntl.h>
#include <utmp.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}


int main()
{
	int fd;
	struct utmp cr;
	int reclen = sizeof(struct utmp);

	fd = open(WTMP_FILE, O_RDONLY);
	if (fd == -1)
		return (1);

 	char            fmt[64], buf[64];
    struct timeval  tv;
    struct tm       *tm;

    gettimeofday(&tv, NULL);
    if((tm = localtime(&tv.tv_sec)) != NULL)
    {
            strftime(fmt, sizeof fmt, "%Y-%m-%d %H:%M:%S.%%06u %z", tm);
            snprintf(buf, sizeof buf, fmt, tv.tv_usec);
            printf("'%s'\n", buf); 
    }

    



	while (read(fd, &cr, reclen) == reclen)
	{
		if (ft_strcmp(cr.ut_line, "tty7") == 0)
		{
			printf("%s ", cr.ut_user);
			printf("%s ", cr.ut_line);

			printf("%d ", cr.ut_type);
			printf("%d ", cr.ut_pid);
			
			printf("%s ", cr.ut_id);
			
			printf("%s ", cr.ut_host);
		 	printf("%d ", cr.ut_exit);
			printf("%d ", cr.ut_session);
			printf("%d ", cr.ut_tv);
			printf("%d \n", cr.ut_addr_v6);
		}
		if (ft_strcmp(cr.ut_user, "reboot") == 0)
		{
			printf("%s ", cr.ut_user);
			printf("%s ", cr.ut_host);
			printf("%d ", cr.ut_type);
			printf("%d ", cr.ut_pid);
			
			printf("%s ", cr.ut_id);
			
			
		 	printf("%d ", cr.ut_exit);
			printf("%d ", cr.ut_session);
			printf("%d ", cr.ut_tv);
			printf("%d \n", cr.ut_addr_v6);

			time_t c;
			c = strtoul( cr.ut_tv, NULL, 0 );
			ctime( &c );
			printf("\n");
		}
	}
	close (fd);
	return 0;
