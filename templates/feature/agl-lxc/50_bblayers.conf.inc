AGL_META_PYTHON = "${METADIR}/external/meta-openembedded/meta-python"
AGL_META_NETWORKING = "${METADIR}/external/meta-openembedded/meta-networking"
AGL_META_FILESYSTEMS = "${METADIR}/external/meta-openembedded/meta-filesystems"

BBLAYERS =+ " \
  ${METADIR}/external/meta-qt5 \
  ${METADIR}/external/meta-virtualization \
  ${METADIR}/meta-agl-devel/meta-agl-lxc \
"
