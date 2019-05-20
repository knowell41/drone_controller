# drone_controller

Format "!Lbutton@Rbutton#LanalogX$LanalogY%RanalogX^RanalogY"
Analog Values is from 0 to 2.

0 denotes -axis
1 denotes +axis
2 denotes Center

Digital Values is 0 or 1;
0 button not pressed
1 button pressed

Example;
!0@0#2$2%2^2

Lbutton = not pressed
Rbutton = not pressed
LanalogX = center
LanalogY = center
RanalogX = center
RanalogY center

Example;
!1@1#1$1%1^1

Lbutton = pressed
Rbutton = pressed
LanalogX = +x axis (right)
LanalogY = +y axis (up)
RanalogX = +x axis (right)
RanalogY = +y axis (up)
