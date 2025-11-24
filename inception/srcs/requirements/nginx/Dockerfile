FROM debian:bullseye

RUN apt update -y 
RUN apt upgrade
RUN apt install -y nginx 
RUN mkdir -p /etc/nginx/ssl
RUN apt install openssl -y
RUN openssl req -x509 -nodes -out /etc/nginx/ssl/inception.crt -keyout /etc/nginx/ssl/inception.key -subj "/C=MO/L=BG/O=1337/OU=student/CN=kkouaz.42.fr"

COPY ./conf/nginx.conf /etc/nginx/conf.d/nginx.conf

RUN chmod 755 /var/www/html 

RUN chown -R www-data:www-data /var/www/html
CMD ["nginx","-g", "daemon off;"]
