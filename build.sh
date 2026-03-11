docker build -t ghcr.io/metax-sensors/musl-build-image . || exit 1
docker run -v ${PWD}:/data -t ghcr.io/metax-sensors/musl-build-image \
		/bin/tar -czvf /data/arm-bemos-linux-musleabihf.tar.gz /opt/x-tools/arm-bemos-linux-musleabihf/