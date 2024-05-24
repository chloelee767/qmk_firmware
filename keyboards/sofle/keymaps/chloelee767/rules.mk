LTO_ENABLE = yes

NKRO_ENABLE = yes
ENCODER_ENABLE = yes
OLED_ENABLE = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
CAPS_WORD_ENABLE = yes

# using commit aeff57309fa5d4634eb58e1e22bc963ddfea7dc7
# commit with latest achordion changes: 694894e63bc5699a55be8178d3618d01f7bf7d7c
# https://github.com/getreuer/qmk-keymap/commit/694894e63bc5699a55be8178d3618d01f7bf7d7c
SRC += features/achordion.c
