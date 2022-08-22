# Ultra Sonics Sensor
Dealing with the Ultra Sonic sensor

## Idea of operation
<img width="344" alt="Idea of operation" src="https://user-images.githubusercontent.com/72309546/186000956-d56350a6-7c18-4518-85ef-2425e0a7118d.png">
<h4>The trigger pin is an output pin from the Ardunio it is set high for 10 Micro secs then the receiver part of the sensor trigger the echo pin to high until the whole signal transmitted from the transmitter is returned
so the duration that echoes is HIGH is the time of go and return of the wave signal so its half is the time of go or return using speed  of sound we can calculate the distance</h4>

## 🎥 Demo

https://user-images.githubusercontent.com/72309546/186000541-5b5f6077-85b2-4932-82e7-460fed8ec36e.mp4


## 🛠️ Components:
<img align="left" alt="Arduino UNO" width="80px" src="https://upload.wikimedia.org/wikipedia/commons/thumb/3/38/Arduino_Uno_-_R3.jpg/220px-Arduino_Uno_-_R3.jpg" draggable="false"/>
 
<img align="left" alt="Ultra sonic Sensor" width="80px" src="https://cdn.shopify.com/s/files/1/0672/9409/products/hc-sr04-ultrasonic-module-ultrasonic-sensor_1024x1024.jpg?v=1564132976" draggable="false"/>
   
<img align="left" alt="Jumper male-male wires" width="110px" src="https://potentiallabs.com/cart/image/cache/catalog/nov-dec/m-m-800x600.jpg" draggable="false"/>
 
<img align="left" alt="Bread Board/" width="80px" src="https://www.ubuy.com.bh/productimg/?image=aHR0cHM6Ly9tLm1lZGlhLWFtYXpvbi5jb20vaW1hZ2VzL0kvNjFwK1FUYk1mNUwuX1NMMTAxMF8uanBn.jpg" draggable="false"/>
<br><br><br><br><br>
 
 <ol>
 <li>Arduino UNO</li>
 <li>Ultra Sonic Sensor</li>
 <li>Jumper male-male wires</li>
 <li>Bread Board</li>
 </ol>

## 🔌 Connections:
 <img alt="Connection" width="300px" src="https://github.com/BasmaElhoseny01/Basic_Arduino_projects/blob/main/10.UltraSonic%20Sensor/UltraSonic%20Sensor%20Connection.png"/>

### Notes:
<ul>
<li><h2>Calcuating distance<h2></li>
Speed of sound in 20 celsuis is 343.5m/sec=343.5*100 cm/10^6 Microsec
        =0.03435 cm/Microsec
so, distance(cm)=0.03435 * (time(Micro sec time of go and return)/2) 
</ul>
