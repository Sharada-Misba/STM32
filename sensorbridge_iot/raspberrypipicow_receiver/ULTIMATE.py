import network
import urequests
import random
from machine import UART, Pin
from time import sleep

# Network Initialization
ssid = "MN"
password = "23456789011"

def thisp():
    if num != 841:
          url = f"{server}/update?api_key={apikey}&field{field}={num}"
          request = urequests.post(url)
          request.close()
          
          
def ConnectWiFi():
    wlan = network.WLAN(network.STA_IF)
    wlan.active(True)
    wlan.connect(ssid, password)
    while not wlan.isconnected():
        print('Waiting for connection...')
        sleep(1)
    ip = wlan.ifconfig()[0]
    print(f'Connected on {ip}')
    return ip

# Connect to Network
ip = ConnectWiFi()

# ThingSpeak Initialization
server = "http://api.thingspeak.com"
apikey = "M2KU0P5FSRQCESQZ" # Z6L2CIQQHO4C6DTQ
field = 1

uart = UART(0, baudrate=9600, rx=Pin(1))

while True:
    if uart.any():
        #data = uart.read().decode('utf-8', 'ignore').strip()  # <- safe decode
        data = uart.readline().decode('utf-8', 'ignore').strip()
        print(f"Received from STM32: {data}")
        #uart.write(f"Echo: {data}\n")
        num=int(data)
        print(f"Number: {num}")
        thisp()
       # if num != 841:
          #  url = f"{server}/update?api_key={apikey}&field{field}={num}"
          #  request = urequests.post(url)
           # request.close() 
        print("---------------------------------")
    sleep(0.1)
    


    


