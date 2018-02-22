FROM base/archlinux

ADD run.sh /root/
RUN chmod +x /root/run.sh

ADD CMakeLists.txt /root/
ADD src /root/src

ENTRYPOINT ["/root/run.sh"]
