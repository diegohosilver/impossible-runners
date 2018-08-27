#include "inicia.h"
#include <allegro.h>

void inicia_allegro(){
   allegro_init();
   install_keyboard();
   set_color_depth(32);
   set_gfx_mode(GFX_AUTODETECT_WINDOWED, ScreenAncho, ScreenAlto, 0, 0);
   set_window_title("Impossible Runner 1.2");
}

int inicia_audio(){
    if (install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, "A") != 0) {
       allegro_message("Error: inicializando sistema de sonido\n%s\n", allegro_error);
       return 1;
    }

	set_volume(70, 70);
}
