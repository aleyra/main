docker build . -t ft_server
docker run -it -p 80:80 -p 443:443 --name test --rm ft_server
open http://0.0.0.0
open https://0.0.0.0
open http://0.0.0.0/wordpress
open http://0.0.0.0/phpmyadmin
