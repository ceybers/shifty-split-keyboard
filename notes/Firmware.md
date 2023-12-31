# Firmware
## QMK and Vial
For the firmware I first used the official [QMK](https://docs.qmk.fm/) repo to ensure everything is working and wired up correctly. Once I had the QMK firmware working and flashed to the board, I installed the [Vial](https://get.vial.today/) fork of QMK, and created a Vial-compatible firmware using their instructions.

I managed to get the WS2812 LED on the RP2040-Zero sort of working, but I could only change it inside the Vial interface and not using the actual keys, so I disabled it. Plus the LED faces down so the glow is rather faint. 

Still, it's useful while experimenting to indicate whether the keyboard has been flashed correctly.

## Keymaps
My keymaps were heavily inspired by manna-harbour's [Miryoku](https://github.com/manna-harbour/miryoku) layout, as well as learnings from Precondition's [Guide to Home Row Mods](https://precondition.github.io/home-row-mods).

### Layer 0
![Keymap Layer 0](../images/screenshots/keymap-layer0.png)
### Layer 1
![Keymap Layer 1](../images/screenshots/keymap-layer1.png)
### Layer 2
![Keymap Layer 2](../images/screenshots/keymap-layer2.png)
### Layer 4
![Keymap Layer 4](../images/screenshots/keymap-layer4.png)
### Layer 5
![Keymap Layer 5](../images/screenshots/keymap-layer5.png)

The tap dances on the left half are mostly hotkeys such as Ctrl-C, Ctrl-X, Ctrl-V, Ctrl-A, and Ctrl-C. I have tap dances for the command and period keys because I like having question mark, exclamation mark, single quote and quotation marks there.

I'm happy with my numpad layout and the navigation, but I'm not too sold on the brackets. Layer 2's symbols on the numpad are okay, but the ones around it don't feel very intuitive.

Layer 4 is handy because I have media keys by hitting the 2u key once (one-shot) then one of the arrow keys.

Hitting the 2u RHS key twice takes you to a browser layer, where the usual browser hotkeys are all a single tap, with mouse buttons available for making using a trackball with the right hand a bit easier.

## Some extra sketches
![Sketch of preliminary base layer](../images/sketches/IMG_20231126_144518_1.jpg)
![Sketches of some tapdance ideas](../images/sketches/IMG_20231126_144541_1.jpg)
---

Back: [Construction](Construction.md) | Next: [Gallery](Gallery.md) | Back to [README.md](../README.md)