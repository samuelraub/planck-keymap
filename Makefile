visualize:
	keymapviz keymap.c

compile:
	qmk compile -kb planck/rev6_drop -km samuelraub
	cp ~/qmk_firmware/planck_rev6_drop_samuelraub.bin .
	qmk c2json -kb planck/rev6_drop -km samuelraub -o keymap.json keymap.c
	keymapviz -r keymap.c
