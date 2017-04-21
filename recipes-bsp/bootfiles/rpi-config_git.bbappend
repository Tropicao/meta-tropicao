ENABLE_SPI_BUS = "1"

do_deploy_append_raspberrypi3 () {
	echo "enable_uart=1" >>${DEPLOYDIR}/bcm2835-bootfiles/config.txt
}
