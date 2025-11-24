# Inception Project

This project is part of the 42 School curriculum. The goal is to set up a small infrastructure using Docker containers, including services like NGINX, WordPress, and MariaDB.

---

## Table of Contents
1. [Introduction](#introduction)
2. [Requirements](#requirements)
3. [Setup](#setup)
4. [Definitions](#definitions)
5. [Resources](#resources)



---

## Introduction
The Inception Project involves creating a virtualized infrastructure using Docker. The goal is to deploy a WordPress website connected to a MariaDB database, with NGINX as the web server. All services must run in separate Docker containers, and the setup must comply with specific requirements provided by 42 School.

---

## Requirements
- Docker and Docker Compose must be installed on your system.
- The infrastructure must include:
  - A Docker container for NGINX (with TLSv1.2 or TLSv1.3).
  - A Docker container for WordPress.
  - A Docker container for MariaDB.
- Each service must run in its own container.
- The WordPress website must be accessible via a domain name.
- Data persistence must be ensured (e.g., database data should not be lost when containers are restarted).

---

## Setup
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/inception-project.git
   ```
2. Navigate to the project directory:
    ```bash
    cd inception-project
    ```
3. Create and fill  the .env file with your environment variables (e.g., database credentials, domain name).
4. Build and start the Docker containers:
  ```bash
  make
  ```
5. Access the WordPress site at https://your-domain.com.

## Definitions
Here are some key terms used in this project:

- **Docker**: A platform for developing, shipping, and running applications in containers.
- **Docker Compose**: A tool for defining and running multi-container Docker applications.
- **NGINX**: A web server that can also be used as a reverse proxy, load balancer, and HTTP cache.
- **WordPress**: A content management system (CMS) used for building websites.
- **MariaDB**: A community-developed, open-source relational database management system.
- **TLS (Transport Layer Security)**: A cryptographic protocol designed to provide secure communication over a computer network.
- **Container**: A lightweight, standalone, and executable package that includes everything needed to run a piece of software.
- **Volume**: A Docker feature used to persist data outside of a container's filesystem.
- **Domain Name**: A human-readable address used to access websites (e.g., `example.com`).

## Resources
Here are some helpful resources to guide you through the project:

### Docker
- [Docker Documentation](https://docs.docker.com/)
- [Docker Compose Documentation](https://docs.docker.com/compose/)
- [Docker Hub](https://hub.docker.com/) (for official images like NGINX, WordPress, and MariaDB)

### NGINX
- [NGINX Official Documentation](https://nginx.org/en/docs/)
- [Configuring NGINX with SSL/TLS](https://nginx.org/en/docs/http/configuring_https_servers.html)

### WordPress
- [WordPress Documentation](https://wordpress.org/support/)
- [WordPress Docker Image](https://hub.docker.com/_/wordpress)

### MariaDB
- [MariaDB Documentation](https://mariadb.com/kb/en/documentation/)
- [MariaDB Docker Image](https://hub.docker.com/_/mariadb)

### SSL/TLS Certificates
- [OpenSSL Documentation](https://www.openssl.org/docs/)

