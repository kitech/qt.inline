//  header block begin
// /usr/include/qt/QtCore/qfiledevice.h
#include <qfiledevice.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileDevice is pure virtual: false
// QFileDevice has virtual projected: true
//  header block end

//  main block begin

class MyQFileDevice : public QFileDevice {
public:
  virtual ~MyQFileDevice() {}
// void QFileDevice()
MyQFileDevice() : QFileDevice() {}
// void QFileDevice(class QObject *)
MyQFileDevice(QObject * parent) : QFileDevice(parent) {}
// Protected virtual Visibility=Default Availability=Available
// qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"readData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QFileDevice::readData(data, maxlen);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QFileDevice::writeData(data, len_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// qint64 readLineData(char *, qint64)
  virtual qint64 readLineData(char * data, qint64 maxlen) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"readLineData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QFileDevice::readLineData(data, maxlen);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QFileDevice10metaObjectEv(void *this_) {
  return (void*)((QFileDevice*)this_)->metaObject();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:98
// [-2] void ~QFileDevice()
extern "C"
void C_ZN11QFileDeviceD2Ev(void *this_) {
  delete (QFileDevice*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:100
// [4] QFileDevice::FileError error()
extern "C"
QFileDevice::FileError C_ZNK11QFileDevice5errorEv(void *this_) {
  return (QFileDevice::FileError)((QFileDevice*)this_)->error();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:101
// [-2] void unsetError()
extern "C"
void C_ZN11QFileDevice10unsetErrorEv(void *this_) {
  ((QFileDevice*)this_)->unsetError();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:103
// [-2] void close()
extern "C"
void C_ZN11QFileDevice5closeEv(void *this_) {
  ((QFileDevice*)this_)->close();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:105
// [1] bool isSequential()
extern "C"
bool C_ZNK11QFileDevice12isSequentialEv(void *this_) {
  return (bool)((QFileDevice*)this_)->isSequential();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:107
// [4] int handle()
extern "C"
int C_ZNK11QFileDevice6handleEv(void *this_) {
  return (int)((QFileDevice*)this_)->handle();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:108
// [8] QString fileName()
extern "C"
void* C_ZNK11QFileDevice8fileNameEv(void *this_) {
  auto rv = ((QFileDevice*)this_)->fileName();
return new QString(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:110
// [8] qint64 pos()
extern "C"
qint64 C_ZNK11QFileDevice3posEv(void *this_) {
  return (qint64)((QFileDevice*)this_)->pos();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:111
// [1] bool seek(qint64)
extern "C"
bool C_ZN11QFileDevice4seekEx(void *this_, qint64 offset) {
  return (bool)((QFileDevice*)this_)->seek(offset);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:112
// [1] bool atEnd()
extern "C"
bool C_ZNK11QFileDevice5atEndEv(void *this_) {
  return (bool)((QFileDevice*)this_)->atEnd();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:113
// [1] bool flush()
extern "C"
bool C_ZN11QFileDevice5flushEv(void *this_) {
  return (bool)((QFileDevice*)this_)->flush();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:115
// [8] qint64 size()
extern "C"
qint64 C_ZNK11QFileDevice4sizeEv(void *this_) {
  return (qint64)((QFileDevice*)this_)->size();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:117
// [1] bool resize(qint64)
extern "C"
bool C_ZN11QFileDevice6resizeEx(void *this_, qint64 sz) {
  return (bool)((QFileDevice*)this_)->resize(sz);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:118
// [4] QFileDevice::Permissions permissions()
extern "C"
QFileDevice::Permissions* C_ZNK11QFileDevice11permissionsEv(void *this_) {
  auto rv = ((QFileDevice*)this_)->permissions();
return new QFileDevice::Permissions(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:119
// [1] bool setPermissions(QFileDevice::Permissions)
extern "C"
bool C_ZN11QFileDevice14setPermissionsE6QFlagsINS_10PermissionEE(void *this_, QFlags<QFileDevice::Permission> permissionSpec) {
  return (bool)((QFileDevice*)this_)->setPermissions(permissionSpec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:127
// [8] uchar * map(qint64, qint64, enum QFileDevice::MemoryMapFlags)
extern "C"
void* C_ZN11QFileDevice3mapExxNS_14MemoryMapFlagsE(void *this_, qint64 offset, qint64 size, QFileDevice::MemoryMapFlags flags) {
  return (void*)((QFileDevice*)this_)->map(offset, size, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:128
// [1] bool unmap(uchar *)
extern "C"
bool C_ZN11QFileDevice5unmapEPh(void *this_, uchar * address) {
  return (bool)((QFileDevice*)this_)->unmap(address);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:130
// [8] QDateTime fileTime(class QFileDevice::FileTime)
extern "C"
void* C_ZNK11QFileDevice8fileTimeENS_8FileTimeE(void *this_, QFileDevice::FileTime time) {
  auto rv = ((QFileDevice*)this_)->fileTime(time);
return new QDateTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:131
// [1] bool setFileTime(const class QDateTime &, class QFileDevice::FileTime)
extern "C"
bool C_ZN11QFileDevice11setFileTimeERK9QDateTimeNS_8FileTimeE(void *this_, QDateTime* newDate, QFileDevice::FileTime fileTime) {
  return (bool)((QFileDevice*)this_)->setFileTime(*newDate, fileTime);
}
//  main block end
