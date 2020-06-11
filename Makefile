
all: libhookgethost.so testgethost

libhookgethost.so: hookgethost.c
	gcc -shared -ldl -fPIC  hookgethost.c -o libhookgethost.so
testgethost: testgethost.c
	gcc -o testgethost testgethost.c

test: testgethost libhookgethost.so
	@echo "Test without LD_PRELOAD..."
	./testgethost
	@echo "Test with LD_PRELOAD..."
	LD_PRELOAD=$$PWD/libhookgethost.so ./testgethost

clean:
	rm -f libhookgethost.so testgethost
