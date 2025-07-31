---
title: "Endev Board"
author: "Sophia"
description: "A dev board with sensors and features designed to monitor a 3D printer"
created_at: "2024-6-27"
---
**Running hour total: 70.5**

This project isn't deserving of its high hour count, but I was extremely new to electronics and PCB design when I began. Now i'm a bit less new.

# June 27th: Planning + basic schematic

**Total time spent: ~0.5h**

Followed this [hackclub jam](https://jams.hackclub.com/batch/sparkletilt-pcb/part-1) tutorial to begin my dev board

![image](https://github.com/user-attachments/assets/3bca894f-c0d4-4432-b39c-99ea2ac58be9)

Planned out possible features:
- Volume detection
- Filament extrusion dectection
- Accelerometer for vibrations
- Temperature and humidity sensor
- Wi-Fi remote monitoring 
- I/O pins for testing
- Removable magnets to mount it
- LiPo powered

# June 28th: Finishing the schematic
**Total time spent: 9h**

I continued the tutorial and then added additional periferals and features that are specific to monitoring my printer.
Here is the temporary schematic: The pictures are of features I personally added or modified
![image](https://github.com/user-attachments/assets/477216e3-4908-437e-a89c-879c7d0cb5f1)
![image](https://github.com/user-attachments/assets/dbecd5ad-6cf7-4fdc-b46f-41a142abce0b)
![image](https://github.com/user-attachments/assets/edcca544-4d19-4092-9254-b73aad3ae426)

Lots of time was spent today learning different concepts. I think this is my v1 schematic finished, I just need to make sure everything will work, then i'll start searching for more footprints...

I added the ESP-12 for WiFi connection, so if something went wrong, and I am at home, I can receive a notification. (However, 
# June 29th: Beginning the PCB
**Total time spent: 5.5h**

I slightly modified my design, having the LEDs be a separate pcb for my bar light that can be connected to the main pcb, and chose to switch to the SK6812 for a greater brightness. 

Most of today was spent chosing parts, learning how to add custom symbols/footprints/3d models, PCB editor features (alignment was a game changer) and fixing my schematic from feedback I received.

I only managed to begin the layout of the led strip:

![image](https://github.com/user-attachments/assets/c357dccb-04d9-40db-a0b4-0b31c7ebe402)
# June 30th: The LED strip
**Total time spent: 1.5h**

Somewhat finished the LED strip pcb and that case. 
I plan on pausing the print midway through, inserting the neodymium magnets then resuming, since they are really brittle I don't want to damage them. 
![image](https://github.com/user-attachments/assets/57b4939b-2392-406a-8e6e-de6c1352a259)
![image](https://github.com/user-attachments/assets/9f97d6a8-0332-4be1-a3fc-67620b09172f)

# July 1st: Footprints and PCB
Happy Canada Day!
**Total time spent: 5h**
Today I worked through an ERC error and found footprints, I began routing but I think i'll start from scratch tomorrow. 

This was my first time laying out something that wasn't extremely simple and it takes so, so, so long for me to do. I don't think I got 5 hours worth of work done, but I definitely tried for 5h.

![image](https://github.com/user-attachments/assets/bc1808bd-31e6-4525-b42d-32ee87a053e1)

^^^ That was how far I got on my like 3rd attempt before I realized it got too chaotic and I need to restart tomorrow.

Tomorrow I hope I can finish the PCB, and its case.

# July 3rd: 

**Total time spent: 1h**
Today I worked more on the final PCB, but honestly no progress was made, I just did more research and came up with a different layout and did poor routing.


# July 7th: PCB traces

**Total time spent: 2h**

JPEG is over, so I am back to locking in on this project. Today I changed the layout one again, this time i think is the last time before manufacturing v1 of the pcb. I am nearly finished my PCB, just need to:
- add ground pour
- switch some footprints
- wire a couple more compnonents (mostly the connectors)
- modify trace widths

  ![image](https://github.com/user-attachments/assets/6253d5c2-6d2e-467c-b897-e1ca96c37c06)

Today I learned more about klipper and realized it does most of the work my project does aswell, oops. 
# July 8th: Many many DRC errors

**Total time spent: 7h**

![image](https://github.com/user-attachments/assets/6fb0ae3f-96f5-4984-b88b-695677505b25)

However, I completed the PCB and fixed like 112 DRC Errors (most were due to some footprints with clearance issues). I added some stiching vias, mounting holes, fillets, then called it a day.
There were a few things I temporarily fixed that I will have to review before getting this manufactured, such as the pads on the accelerometer and mag. rotary encoder. 

My routing is probably very bad and the PCB probably won't work first try. Its truely my first time making traces that weren't literally connecting some leds and resistors.

I also finally split up my PCBs, originally my led strip and main pcb were in one kicad project, but that was causing some issues in the PCB editor. 

My PCB wasn't built for compactness, but I may remake it in the future with that in mind. Its now 4am and i'll finish and submit my project tomorrow (hopefully).

Finally its green: (the exclusions are genuinely fine and should be ignored, like some silkscreen stuff)

![image](https://github.com/user-attachments/assets/6d49bf33-6d48-41b8-b778-3eecefe339ff)

# July 9th: Many many DRC errors

**Total time spent: 4h**

I kinda need to submit this asap so I'm going to make my filament movement tracking with the magnetic rotary encoder much simpler. Originally, the filament would feed through two groove bearings with a magnet attached to one, and the encoder reads that the bearing is moving. Instead, I will just attach some magnets to my filament spools; This way is much less accurate but it is enough for now. 

I started off by making an enclosure, but I don't love how bulky it looks. So, I opted for a only a mounting plate, that also helps my mag. rotary encoder register the magnets on the spool. 

![image](https://github.com/user-attachments/assets/d47f2e94-b3e0-4e8b-8c2a-80e604907a91)

I also worked with sheet metal for the first time in Fusion, modeling the bracket my board will be mounted on

Tomorrow I just need to work on my BOM and make some final tweaks to my cad

# July 10th: Finished?

**Total time spent: 2h**

I accidentally deleted what I previously wrote. So, in short, on the 10th I was nearly ready to submit my project; Adding production files, creating my BOM, finding all the LCSC parts and making final tweaks to my PCB. However, as of the 11th, I am no longer in a rush and I have loads of time on my hands. 
I'm going to remake it properly, the right way. Get myself out of all the technical debt that piled up, and learn what I need to make this PCB as I originally envisoned it. I did more research on my components and simplified the amount of different components I needed. 

# July 11th & 12th: Hell no

**Total time spent: 3h**

There wasn't too much progress so I clumped these two days together. I started off by getting rid of my bad imported footprints. Then I followed this guide on schematic best practices, and I finally switched to two slide switches and one 2 digit DIP switch. 

Now I am working on a new PCB that aligns nicely with my spool holder, has correct trace widths, proper via sizes, accounts for impedance...  

<img width="415" height="752" alt="image" src="https://github.com/user-attachments/assets/5271bc4e-8b3a-417e-9589-d496801147af" />

# July 22nd: Oops?

**Total time spent: 9h**

I changed a footprints that I realized were incorrect, the ICSP (Pin sockets) and my 2 pos DIP switches. 
Got rid of the references and moved them to F.Fab, they were taking up too much space. 
I dropped my copper pour on front as my components were too cramped to make use of it. 

The first part of today was spent making this monstrosity:
<img width="1033" height="685" alt="Screenshot 2025-07-23 185845" src="https://github.com/user-attachments/assets/54e9bd9e-7f4b-4fed-ae78-b5f9e9cd2121" />

I wasn't happy with this as I really freaked up the integrity of my ground pour of the bottom layer as I have so many traces there. Also there are so. many. vias. 
So I restarted. 
The biggest change I made was dropping my magnetic rotary encoder idea for a regular (and infintely rotating) rotary encoder. I realized the area I planned on mounting my PCB was quite cramped, and a bit too sketchy to put so many metal components. (Though, I haven't begun implemeting it)

# July 23rd: More work

**Total time spent: 9h**

I sketched out ideas and finalized on how my filament feeder would be attached. I finalized on having another PCB (3 i know is a lot), on the opposite side as the encoder is pretty big. I spent too much time finding the ideal rotary encoder and settled on the TK

I did an immense amount of routing
<img width="355" height="665" alt="image" src="https://github.com/user-attachments/assets/90dd06b4-9fdd-4bcc-89de-4cc2080f26b5" />

# July 24rd: CAAAAAD

**Total time spent: 3h**

More routing (no photo again oops, all you have to know is that it was frustrating). 
Finally I went back to something I was more familiar with, 3d modeling!!!! I created the plates that the PCBs will be attached to: adding M2 threaded inserts/screws, added space for magnets on the back of the plate (didn't conceal them as I want to get my hands on the magnets to test their brittleness first)

<img width="471" height="627" alt="image" src="https://github.com/user-attachments/assets/4339ab43-eed7-471b-8188-7f13f2e1610b" />

<img width="451" height="594" alt="image" src="https://github.com/user-attachments/assets/d34d04cf-83f5-421a-a90d-37896f5e3696" />

# July 27th: Almost there...

**Total time spent: 4h**

Cadded the filament movement section:

<img width="299" height="314" alt="image" src="https://github.com/user-attachments/assets/ec9bd534-04d6-4f32-b375-e8a9da9f5135" />

<img width="357" height="307" alt="image" src="https://github.com/user-attachments/assets/258fc230-cdf1-4201-b41d-a61edbe13768" />


Finished the routing but I still have DRC errors, need to add silkscreen text, need stitching vias, etc. 

<img width="426" height="725" alt="image" src="https://github.com/user-attachments/assets/0f0b52db-cbf0-43b6-b786-d551a950f4e9" />

# July 30th: Finishing up

**Total time spent: 5h**

Finished my PCB, found all the JLC parts, created my BOM, and got this project ready to submit!

Also recadded my LED strip as some components changed since I originally made it 

<img width="1239" height="360" alt="image" src="https://github.com/user-attachments/assets/fa50eb87-5e0d-4cdb-ab8b-26be83cf678b" />

Finished photos are in the images folder and my readme
