SUMMARY = "main recipe to build border-router image"
LICENSE = "MIT"

inherit extrausers

require recipes-core/images/rpi-hwup-image.bb

IMAGE_FEATURES += "ssh-server-dropbear"

EXTRA_USERS_PARAMS = "\
                    usermod -P 1ns4n1ty root;\
"

######################################################
# Development tools, not needed in a "release" image #
######################################################
IMAGE_INSTALL_append = "\
                        vim \
                        opkg \
"
do_install_append () {
    echo "Override in base recipe : ${OVERRIDES}"
}
