OVERRIDES .= ":agl-container-host"
DISTRO_FEATURES_append = " agl-container-host"

#
# QEMU + VirGL(GPU acceleration) + Multiple monitors
#
# using GTK UI frontend
PACKAGECONFIG_append_pn-qemu-system-native = " gtk+"
# enable GPU acceleration
PACKAGECONFIG_append_pn-qemu-system-native = " glx virglrenderer"
#  
# Following use cases are tested.
#
# GTK UI Frontend
#   OK: 1 monitor + GPU accelerated
#     -device virtio-vga,virgl=on -display gtk,gl=on
#   OK: 2 monitors
#     -device virtio-vga,max_outputs=2 -display gtk
#   NG: 2 monitors + GPU accelerated (result QEMU not launched)
#     -device virtio-vga,virgl=on,max_outputs=2 -display gtk,gl=on
#
# SDL2 UI Frontend
#   OK: 1 monitor + GPU accelerated
#     -device virtio-vga,virgl=on -display sdl,gl=on 
#   NG: 2 monitors (result: only 1 monitor is on)
#     -device virtio-vga,max_outputs=2 -display sdl
#   NG: 2 monitors + GPU accelerated (result QEMU not launched)
#     -device virtio-vga,virgl=on,max_outputs=2 -display sdl,gl=on
#