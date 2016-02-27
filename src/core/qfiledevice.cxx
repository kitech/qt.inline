// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qfiledevice.h
// dst-file: /src/core/qfiledevice.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfiledevice.h>


#include <qglobal.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qfiledevice_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFileDevice_Class_Size()
{
  return sizeof(QFileDevice);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 101, column 12>
//   // proto:  qint64 QFileDevice::size();
// _ZNK11QFileDevice4sizeEv size()
extern "C"
long long
C_ZNK11QFileDevice4sizeEv(void *qthis) {
  auto ret =
  ((QFileDevice*)qthis)->size();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 97, column 10>
//   // proto:  bool QFileDevice::seek(qint64 offset);
// _ZN11QFileDevice4seekEx seek(qint64)
extern "C"
bool
C_ZN11QFileDevice4seekEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QFileDevice*)qthis)->seek(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 114, column 10>
//   // proto:  bool QFileDevice::unmap(uchar * address);
// _ZN11QFileDevice5unmapEPh unmap(uchar *)
extern "C"
bool
C_ZN11QFileDevice5unmapEPh(void *qthis,
uchar * arg1) {
  auto ret =
  ((QFileDevice*)qthis)->unmap(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 89, column 18>
//   // proto:  void QFileDevice::close();
// _ZN11QFileDevice5closeEv close()
extern "C"
void
C_ZN11QFileDevice5closeEv(void *qthis) {
  ((QFileDevice*)qthis)->close();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 96, column 12>
//   // proto:  qint64 QFileDevice::pos();
// _ZNK11QFileDevice3posEv pos()
extern "C"
long long
C_ZNK11QFileDevice3posEv(void *qthis) {
  auto ret =
  ((QFileDevice*)qthis)->pos();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 93, column 9>
//   // proto:  int QFileDevice::handle();
// _ZNK11QFileDevice6handleEv handle()
extern "C"
int
C_ZNK11QFileDevice6handleEv(void *qthis) {
  auto ret =
  ((QFileDevice*)qthis)->handle();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 94, column 21>
//   // proto:  QString QFileDevice::fileName();
// _ZNK11QFileDevice8fileNameEv fileName()
extern "C"
QString*
C_ZNK11QFileDevice8fileNameEv(void *qthis) {
  auto ret =
  ((QFileDevice*)qthis)->fileName();
  return new QString(ret); // 5
}
//   // proto:  void QFileDevice::~QFileDevice();
extern "C"
void C_ZN11QFileDeviceD2Ev(void *qthis) {
  delete (QFileDevice*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 98, column 10>
//   // proto:  bool QFileDevice::atEnd();
// _ZNK11QFileDevice5atEndEv atEnd()
extern "C"
bool
C_ZNK11QFileDevice5atEndEv(void *qthis) {
  auto ret =
  ((QFileDevice*)qthis)->atEnd();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 91, column 10>
//   // proto:  bool QFileDevice::isSequential();
// _ZNK11QFileDevice12isSequentialEv isSequential()
extern "C"
bool
C_ZNK11QFileDevice12isSequentialEv(void *qthis) {
  auto ret =
  ((QFileDevice*)qthis)->isSequential();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 99, column 10>
//   // proto:  bool QFileDevice::flush();
// _ZN11QFileDevice5flushEv flush()
extern "C"
bool
C_ZN11QFileDevice5flushEv(void *qthis) {
  auto ret =
  ((QFileDevice*)qthis)->flush();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 113, column 12>
//   // proto:  uchar * QFileDevice::map(qint64 offset, qint64 size, QFileDevice::MemoryMapFlags flags);
// _ZN11QFileDevice3mapExxNS_14MemoryMapFlagsE map(qint64, qint64, enum QFileDevice::MemoryMapFlags)
extern "C"
void*
C_ZN11QFileDevice3mapExxNS_14MemoryMapFlagsE(void *qthis,
qint64 arg1,
qint64 arg2,
QFileDevice::MemoryMapFlags arg3) {
  auto ret =
  ((QFileDevice*)qthis)->map(arg1,
arg2,
arg3);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 87, column 10>
//   // proto:  void QFileDevice::unsetError();
// _ZN11QFileDevice10unsetErrorEv unsetError()
extern "C"
void
C_ZN11QFileDevice10unsetErrorEv(void *qthis) {
  ((QFileDevice*)qthis)->unsetError();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 104, column 25>
//   // proto:  Permissions QFileDevice::permissions();
// _ZNK11QFileDevice11permissionsEv permissions()
extern "C"
QFlags<QFileDevice::Permission>*
C_ZNK11QFileDevice11permissionsEv(void *qthis) {
  auto ret =
  ((QFileDevice*)qthis)->permissions();
  return new QFlags<QFileDevice::Permission>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 86, column 15>
//   // proto:  QFileDevice::FileError QFileDevice::error();
// _ZNK11QFileDevice5errorEv error()
extern "C"
QFileDevice::FileError
C_ZNK11QFileDevice5errorEv(void *qthis) {
  auto ret =
  ((QFileDevice*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 47, column 5>
//   // proto:  const QMetaObject * QFileDevice::metaObject();
// _ZNK11QFileDevice10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QFileDevice10metaObjectEv(void *qthis) {
  auto ret =
  ((QFileDevice*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 105, column 18>
//   // proto:  bool QFileDevice::setPermissions(Permissions permissionSpec);
// _ZN11QFileDevice14setPermissionsE6QFlagsINS_10PermissionEE setPermissions(Permissions)
extern "C"
bool
C_ZN11QFileDevice14setPermissionsE6QFlagsINS_10PermissionEE(void *qthis,
QFileDevice::Permissions arg1) {
  auto ret =
  ((QFileDevice*)qthis)->setPermissions(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfiledevice.h', line 103, column 18>
//   // proto:  bool QFileDevice::resize(qint64 sz);
// _ZN11QFileDevice6resizeEx resize(qint64)
extern "C"
bool
C_ZN11QFileDevice6resizeEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QFileDevice*)qthis)->resize(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QFileDevice_SlotProxy here
class QFileDevice_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFileDevice_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qfiledevice.moc"

extern "C" {
  QFileDevice_SlotProxy* QFileDevice_SlotProxy_new()
  {
    return new QFileDevice_SlotProxy();
  }
};

// <= body block end

