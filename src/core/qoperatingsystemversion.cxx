//  header block begin
// since 0x050900
// /usr/include/qt/QtCore/qoperatingsystemversion.h
#ifndef protected
#define protected public
#endif
#include <qoperatingsystemversion.h>
#include <QtCore>
#include "callback_inherit.h"

// QOperatingSystemVersion is pure virtual: false
// QOperatingSystemVersion has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQOperatingSystemVersion : public QOperatingSystemVersion {
public:
  virtual ~MyQOperatingSystemVersion() {}
// void QOperatingSystemVersion(enum QOperatingSystemVersion::OSType, int, int, int)
MyQOperatingSystemVersion(QOperatingSystemVersion::OSType osType, int vmajor, int vminor, int vmicro) : QOperatingSystemVersion(osType, vmajor, vminor, vmicro) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:85
// [-2] void QOperatingSystemVersion(enum QOperatingSystemVersion::OSType, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QOperatingSystemVersionC2ENS_6OSTypeEiii(QOperatingSystemVersion::OSType osType, int vmajor, int vminor, int vmicro) {
  return  new QOperatingSystemVersion(osType, vmajor, vminor, vmicro);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:93
// [16] QOperatingSystemVersion current()
extern "C" Q_DECL_EXPORT
void C_ZN23QOperatingSystemVersion7currentEv() {
  auto rv = QOperatingSystemVersion::current();
/*return rv;*/
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:95
// [4] QOperatingSystemVersion::OSType currentType()
extern "C" Q_DECL_EXPORT
QOperatingSystemVersion::OSType C_ZN23QOperatingSystemVersion11currentTypeEv() {
  return (QOperatingSystemVersion::OSType)QOperatingSystemVersion::currentType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:114
// [4] int majorVersion()
extern "C" Q_DECL_EXPORT
int C_ZNK23QOperatingSystemVersion12majorVersionEv(void *this_) {
  return (int)((QOperatingSystemVersion*)this_)->majorVersion();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:115
// [4] int minorVersion()
extern "C" Q_DECL_EXPORT
int C_ZNK23QOperatingSystemVersion12minorVersionEv(void *this_) {
  return (int)((QOperatingSystemVersion*)this_)->minorVersion();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:116
// [4] int microVersion()
extern "C" Q_DECL_EXPORT
int C_ZNK23QOperatingSystemVersion12microVersionEv(void *this_) {
  return (int)((QOperatingSystemVersion*)this_)->microVersion();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:118
// [4] int segmentCount()
extern "C" Q_DECL_EXPORT
int C_ZNK23QOperatingSystemVersion12segmentCountEv(void *this_) {
  return (int)((QOperatingSystemVersion*)this_)->segmentCount();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:124
// [4] QOperatingSystemVersion::OSType type()
extern "C" Q_DECL_EXPORT
QOperatingSystemVersion::OSType C_ZNK23QOperatingSystemVersion4typeEv(void *this_) {
  return (QOperatingSystemVersion::OSType)((QOperatingSystemVersion*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:125
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QOperatingSystemVersion4nameEv(void *this_) {
  auto rv = ((QOperatingSystemVersion*)this_)->name();
return new QString(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN23QOperatingSystemVersionD2Ev(void *this_) {
  delete (QOperatingSystemVersion*)(this_);
}
//  main block end
