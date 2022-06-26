import socket

ClientSocket = socket.socket()
host = '192.168.56.105'
port = 8889

print('Waiting for connection')
try:
    ClientSocket.connect((host, port))
except socket.error as e:
    print(str(e))

Response = ClientSocket.recv(2048)
print(Response)
while True:
    Input = input('Say Something: ')
    ClientSocket.send(str.encode(Input))
    Response = ServerSocket.recv(2048)
    print(Response.decode('utf-8'))

ClientSocket.close()
