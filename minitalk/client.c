/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkosiara <jkosiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:27:40 by jkosiara          #+#    #+#             */
/*   Updated: 2021/06/09 18:13:08 by jkosiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

char *ft_eightbit(char character)
{
    int i;
    char *result;

    result = malloc(sizeof(8));
    if (result == 0)
        exit(0);
        result[7] = 0;
        i = 6;
        while (character > 1)
        {
            result[i] = (character % 2) + 48;
            character / 2;
            i--;
        }
        result[i] = (character % 2) + 48;
        i--;
        while(i >= 0)
        {
            result[i] = 48;
            i--;
        }
        return (result);
}

void ft_send_term(int pid)
{
    int i;
    
    i = 0;
    while (i<7)
    {
        kill(pid,SIGUSR1);
        i++;
        usleep(10);
    }
}

void ft_send_signal(int pid, char *string)
{
    int     i;
    int     j;
    char *temp;

    i = 0;
    while(string[i])
    {
        temp = ft_eightbit(string[i]);
        j = 0;
        while(temp[j])
        {
            if (temp[j] == '0')
                kill(pid,SIGUSR2);
            else
                kill(pid,SIGUSR2);
            j++;
            usleep(10);
        }
        i++;
    }
    ft_send_term(pid);
}

int main (int argc, char **argv) 
{
    char *string;
    int pid;
    
    pid = ft_atoi(argv[1]);
    string = argv[2];
    ft_send_signal(pid, string);
}