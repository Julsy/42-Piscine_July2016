# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iiliuk <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/12 16:22:55 by iiliuk            #+#    #+#              #
#    Updated: 2016/07/13 19:40:59 by iiliuk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

find . -name "*.sh" | rev | cut -d'/' -f 1 | cut -c 4- | rev
