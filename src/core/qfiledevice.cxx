// /usr/include/qt/QtCore/qfiledevice.h
#include <qfiledevice.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qfiledevice.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QFileDevice10metaObjectEv(void *this_) {
  /*return*/ ((QFileDevice*)this_)->metaObject();
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:90
// void ~QFileDevice()
extern "C"
void C_ZN11QFileDeviceD1Ev(void *this_) {
  delete (QFileDevice*)(this_);
}
// /usr/include/qt/QtCore/qfiledevice.h:92
// QFileDevice::FileError error()
extern "C"
void C_ZNK11QFileDevice5errorEv(void *this_) {
  /*return*/ ((QFileDevice*)this_)->error();
}
// /usr/include/qt/QtCore/qfiledevice.h:93
// void unsetError()
extern "C"
void C_ZN11QFileDevice10unsetErrorEv(void *this_) {
  ((QFileDevice*)this_)->unsetError();
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:95
// void close()
extern "C"
void C_ZN11QFileDevice5closeEv(void *this_) {
  ((QFileDevice*)this_)->close();
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:97
// bool isSequential()
extern "C"
void C_ZNK11QFileDevice12isSequentialEv(void *this_) {
  /*return*/ ((QFileDevice*)this_)->isSequential();
}
// /usr/include/qt/QtCore/qfiledevice.h:99
// int handle()
extern "C"
void C_ZNK11QFileDevice6handleEv(void *this_) {
  /*return*/ ((QFileDevice*)this_)->handle();
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:100
// QString fileName()
extern "C"
void C_ZNK11QFileDevice8fileNameEv(void *this_) {
  /*return*/ ((QFileDevice*)this_)->fileName();
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:102
// qint64 pos()
extern "C"
void C_ZNK11QFileDevice3posEv(void *this_) {
  /*return*/ ((QFileDevice*)this_)->pos();
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:103
// bool seek(qint64)
extern "C"
void C_ZN11QFileDevice4seekEx(void *this_, qint64 offset) {
  /*return*/ ((QFileDevice*)this_)->seek(offset);
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:104
// bool atEnd()
extern "C"
void C_ZNK11QFileDevice5atEndEv(void *this_) {
  /*return*/ ((QFileDevice*)this_)->atEnd();
}
// /usr/include/qt/QtCore/qfiledevice.h:105
// bool flush()
extern "C"
void C_ZN11QFileDevice5flushEv(void *this_) {
  /*return*/ ((QFileDevice*)this_)->flush();
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:107
// qint64 size()
extern "C"
void C_ZNK11QFileDevice4sizeEv(void *this_) {
  /*return*/ ((QFileDevice*)this_)->size();
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:109
// bool resize(qint64)
extern "C"
void C_ZN11QFileDevice6resizeEx(void *this_, qint64 sz) {
  /*return*/ ((QFileDevice*)this_)->resize(sz);
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:110
// Permissions permissions()
extern "C"
void C_ZNK11QFileDevice11permissionsEv(void *this_) {
  /*return*/ ((QFileDevice*)this_)->permissions();
}
// virtual
// /usr/include/qt/QtCore/qfiledevice.h:111
// bool setPermissions(Permissions)
extern "C"
void C_ZN11QFileDevice14setPermissionsE6QFlagsINS_10PermissionEE(void *this_, QFlags<QFileDevice::Permission> permissionSpec) {
  /*return*/ ((QFileDevice*)this_)->setPermissions(permissionSpec);
}
// /usr/include/qt/QtCore/qfiledevice.h:119
// uchar * map(qint64, qint64, enum QFileDevice::MemoryMapFlags)
extern "C"
void C_ZN11QFileDevice3mapExxNS_14MemoryMapFlagsE(void *this_, qint64 offset, qint64 size, QFileDevice::MemoryMapFlags flags) {
  /*return*/ ((QFileDevice*)this_)->map(offset, size, flags);
}
// /usr/include/qt/QtCore/qfiledevice.h:120
// bool unmap(uchar *)
extern "C"
void C_ZN11QFileDevice5unmapEPh(void *this_, uchar * address) {
  /*return*/ ((QFileDevice*)this_)->unmap(address);
}