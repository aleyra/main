odocker build . -t ft_server
docker run -it -p 80:80 -p 443:443 --name test --rm ft_server
open http://0.0.0.0
echo "ouvrir https://0.0.0.0 puis http://0.0.0.0/wordpress et http://0.0.0.0/phpmyadmin"
echo "tester wordpress jusqu'a l'affichage de nouveaux elements et verifier leurs existance dans phpmyadmin"
echo "tester l'affichage de l'autoindex avec 0.0.0.0/phpmyadmin/templates par exemple"
