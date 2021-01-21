## THE PROJECT
The main point of this project is that it generates sound. There are not many components necessary, however- it's the code that matters.
The components used in this project is an Arduino UNO board, a speaker and connecting wires. It is possible to use a breadboard, resistors
and more. I tested this, but found that less is more, and the result was really the same. 




## HOW IT WORKS
The speaker is connected to the Arduino UNO through the red wire leading to GND, and the black wire leading to pin 3. The Arduino connects to
the computer through a connecting wire, leading from the power-port of the Arduino, to the USB port of the computer. Now, the code from
the computer can generate tones of different frequencies through the speaker. As signals are being created, the Arduino receives it and then
flows through pin 3, where the speaker is connected. This causes the speaker to play the sound, initiated from the code. Why the circuit is grounded (GND)
is mainly because of safety reasons, but generally it controls the voltage in the circuit. One way to see it is that the output pin, 3, is the entrance
and the GND is the exit. In order for the circuit to flow, an entrance and an exit is necessary. The electrons need to have somewhere to go.




## THE CODE
The main function for this project is the tone function, tone(). What this does is that it creates a square wave of the specified frequency on a pin.
The wave can be stopped with the function noTone(). Otherwise it keeps going. To get that little extra out of the tones, a pitches.h file is being used.
These types of tones are more specific and broad, like a piano. This is crucial in order to make a good sounding track. To make this file, simply make a
new window. Shift, cmd, N for mac, which I use. I found a note table made by Brett Hagman, which i copied and pasted in to this file. Then I pressed save as,
shift, command, S for mac. I named the file pitches.h. This is what it refers to when I write #include "pitches.h" in my main coding file. All of the
specified tones in the pitches.h file becomes accessible. 

In order to create the song there has to be tones, and duration of tones. The pitches.h file brings the tones, but they have to be put in through a 
integer array called melody[]. An integer is basically a number, positive, negative or zero. An integer array is a set of integers. The other integer
array is called noteDurations[], which is the duration of tones. A higher number here creates a longer note out of the speaker. 

The song I originally planned to replicate was Careless Whisper by George Michael, but it did not turn out well. I could not even finish it. I changed my mind
and went for the Swedish national anthem. To find the right tones, I took a seat at my piano at home as I watched a tutorial on how to play the song.
I pointed out the chords and translated them in to the pitches.h tones. The notes are pretty logical, NOTE_F4 is the fourth note F, from the left of the 
piano. And so on. Otherwise you can test it out as I did. See what works and what doesn't. It takes some time to get it right.




# DOWNSIDES
This system is simple. The amount of components are few, making it easy and accessible for the majority of people, which is good! However, this also makes the
potential limited. It is not possible to reach the sound of "real music", where there are high-quality beats, sound effects, guitar playing and what not. This 
sound is more digital, and it is one-sided. Maybe with more components, you could have multiple sounds at the same time making it more like music.
 
