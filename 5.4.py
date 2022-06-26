from netmiko import ConnectHandler

myserver = {
    'device_type': 'linux',
    'host':   '192.168.56.105',  #Your Server IP
    'username': 'user', #your Server Username
    'password': 'password123', #your server password
    'port' : 22,
    'secret': '',
}

net_connect = ConnectHandler(**myserver)
output = net_connect.send_command('uname -a')
print(output)
