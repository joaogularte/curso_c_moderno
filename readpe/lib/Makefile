all:
	gcc -shared -fPIC -o libpetest.so petest.c

install:
	install -m 0644 libpetest.so /usr/local/lib/libpetest.so	
	ldconfig
uninstall:
	rm -rf /usr/local/lib/libpetest.so

clean:
	rm -rf libpetest.so

