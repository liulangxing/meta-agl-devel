SUMMARY     = "4A - Softmixer"
DESCRIPTION = "4A Softmixer (AGL Advanced Audio Agent)"
HOMEPAGE    = "https://github.com/iotbzh/4a-softmixer/"
SECTION     = "apps"

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

SRC_URI = "gitsm://github.com/iotbzh/4a-softmixer/;protocol=https;branch=${AGL_BRANCH}"
SRCREV = "e173f942334e741714ac45924554552b5511de1d"

DEPENDS += "lua"

PV = "0.1+git${SRCPV}"
S  = "${WORKDIR}/git"

inherit afb-system-cmake

#FIXME:
#FILES_${PN}-dev += "${INSTALL_PREFIX}/4a-softmixer/htdocs"
#FILES_${PN} += "${INSTALL_PREFIX}/afb-aaaa"
#FILES_${PN} += "${INSTALL_PREFIX}/lib"