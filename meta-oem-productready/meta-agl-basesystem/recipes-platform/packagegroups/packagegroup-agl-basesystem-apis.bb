DESCRIPTION = "Native Service Package Groups"
LICENSE = "Apache-2.0"

inherit packagegroup

PACKAGES = "\
        packagegroup-agl-basesystem-apis \
        "

RDEPENDS_${PN} += " \
    "