g++ -Wall -Wextra -Werror -c -o Message.o Message.cpp
g++ -Wall -Wextra -Werror -c -o Photo.o Photo.cpp
g++ -Wall -Wextra -Werror -c -o Video.o Video.cpp
g++ -Wall -Wextra -Werror -c -o Audio.o Audio.cpp
g++ -Wall -Wextra -Werror -c -o Post.o Post.cpp
g++ -Wall -Wextra -Werror -c -o USocial.o USocial.cpp
g++ -Wall -Wextra -Werror -c -o User.o User.cpp
g++ -Wall -Wextra -Werror -c -o BusinessUser.o BusinessUser.cpp
g++ -Wall -Wextra -Werror -c -o Main.o Main.cpp 

gcc -o Main Audio.o BusinessUser.o Main.o Media.o Message.o Photo.o Post.o User.o USocial.o Video.o    