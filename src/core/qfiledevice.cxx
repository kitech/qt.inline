//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qfiledevice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfiledevice.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileDevice is pure virtual: false
// QFileDevice has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFileDevice : public QFileDevice {
public:
  virtual ~MyQFileDevice() {}
// Protected virtual Visibility=Default Availability=Available
// [8] qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QFileDevice::readData(data, maxlen);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QFileDevice::writeData(data, len_);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] qint64 readLineData(char *, qint64)
  virtual qint64 readLineData(char * data, qint64 maxlen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readLineData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QFileDevice::readLineData(data, maxlen);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:142
// [8] qint64 readData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN11QFileDevice8readDataEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QFileDevice*)this_)->QFileDevice::readData(data, maxlen);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:143
// [8] qint64 writeData(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN11QFileDevice9writeDataEPKcx(void *this_, const char * data, qint64 len_) {
  return (qint64)((QFileDevice*)this_)->QFileDevice::writeData(data, len_);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:144
// [8] qint64 readLineData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN11QFileDevice12readLineDataEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QFileDevice*)this_)->QFileDevice::readLineData(data, maxlen);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDevice10metaObjectEv(void *this_) {
  return (void*)((QFileDevice*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDevice11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFileDevice*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QFileDevice11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFileDevice*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDevice2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileDevice::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDevice6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileDevice::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:98
// [-2] void ~QFileDevice()
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDeviceD2Ev(void *this_) {
  delete (QFileDevice*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:100
// [4] QFileDevice::FileError error()
extern "C" Q_DECL_EXPORT
QFileDevice::FileError C_ZNK11QFileDevice5errorEv(void *this_) {
  return (QFileDevice::FileError)((QFileDevice*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:101
// [-2] void unsetError()
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDevice10unsetErrorEv(void *this_) {
  ((QFileDevice*)this_)->unsetError();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:103
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN11QFileDevice5closeEv(void *this_) {
  ((QFileDevice*)this_)->close();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:105
// [1] bool isSequential()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFileDevice12isSequentialEv(void *this_) {
  return (bool)((QFileDevice*)this_)->isSequential();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:107
// [4] int handle()
extern "C" Q_DECL_EXPORT
int C_ZNK11QFileDevice6handleEv(void *this_) {
  return (int)((QFileDevice*)this_)->handle();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:108
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDevice8fileNameEv(void *this_) {
  auto rv = ((QFileDevice*)this_)->fileName();
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:110
// [8] qint64 pos()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK11QFileDevice3posEv(void *this_) {
  return (qint64)((QFileDevice*)this_)->pos();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:111
// [1] bool seek(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice4seekEx(void *this_, qint64 offset) {
  return (bool)((QFileDevice*)this_)->seek(offset);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:112
// [1] bool atEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFileDevice5atEndEv(void *this_) {
  return (bool)((QFileDevice*)this_)->atEnd();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:113
// [1] bool flush()
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice5flushEv(void *this_) {
  return (bool)((QFileDevice*)this_)->flush();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:115
// [8] qint64 size()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK11QFileDevice4sizeEv(void *this_) {
  return (qint64)((QFileDevice*)this_)->size();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:117
// [1] bool resize(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice6resizeEx(void *this_, qint64 sz) {
  return (bool)((QFileDevice*)this_)->resize(sz);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:118
// [4] QFileDevice::Permissions permissions()
extern "C" Q_DECL_EXPORT
QFileDevice::Permissions* C_ZNK11QFileDevice11permissionsEv(void *this_) {
  auto rv = ((QFileDevice*)this_)->permissions();
return new QFileDevice::Permissions(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:119
// [1] bool setPermissions(QFileDevice::Permissions)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice14setPermissionsE6QFlagsINS_10PermissionEE(void *this_, QFlags<QFileDevice::Permission> permissionSpec) {
  return (bool)((QFileDevice*)this_)->setPermissions(permissionSpec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:127
// [8] uchar * map(qint64, qint64, QFileDevice::MemoryMapFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFileDevice3mapExxNS_14MemoryMapFlagsE(void *this_, qint64 offset, qint64 size, QFileDevice::MemoryMapFlags flags) {
  return (void*)((QFileDevice*)this_)->map(offset, size, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:128
// [1] bool unmap(uchar *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice5unmapEPh(void *this_, uchar * address) {
  return (bool)((QFileDevice*)this_)->unmap(address);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qfiledevice.h:130
// [8] QDateTime fileTime(QFileDevice::FileTime)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFileDevice8fileTimeENS_8FileTimeE(void *this_, QFileDevice::FileTime time) {
  auto rv = ((QFileDevice*)this_)->fileTime(time);
return new QDateTime(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qfiledevice.h:131
// [1] bool setFileTime(const QDateTime &, QFileDevice::FileTime)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZN11QFileDevice11setFileTimeERK9QDateTimeNS_8FileTimeE(void *this_, QDateTime* newDate, QFileDevice::FileTime fileTime) {
  return (bool)((QFileDevice*)this_)->setFileTime(*newDate, fileTime);
}
#endif // QT_VERSION >= 0x050a00

//  main block end
