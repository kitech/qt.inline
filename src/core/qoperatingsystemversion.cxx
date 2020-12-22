//  header block begin

// /usr/include/qt/QtCore/qoperatingsystemversion.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qoperatingsystemversion.h>
#include <QtCore>
#include "callback_inherit.h"

// QOperatingSystemVersion is pure virtual: false false
// QOperatingSystemVersion has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOperatingSystemVersion_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOperatingSystemVersion_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOperatingSystemVersion_t qt_meta_stringdata_MyQOperatingSystemVersion = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQOperatingSystemVersion"
  },
  "MyQOperatingSystemVersion"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOperatingSystemVersion[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQOperatingSystemVersion : public QOperatingSystemVersion {
public:
  virtual ~MyQOperatingSystemVersion() {}
// void QOperatingSystemVersion(QOperatingSystemVersion::OSType, int, int, int)
MyQOperatingSystemVersion(QOperatingSystemVersion::OSType osType, int vmajor, int vminor, int vmicro) : QOperatingSystemVersion(osType, vmajor, vminor, vmicro) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qoperatingsystemversion(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:88
// [-2] void QOperatingSystemVersion(QOperatingSystemVersion::OSType, int, int, int) 
// (12)qm3511452327 (45)_ZN23QOperatingSystemVersionC2ENS_6OSTypeEiii
/*void* qm3511452327(QOperatingSystemVersion::OSType osType, int vmajor, int vminor, int vmicro)*/{
  QOperatingSystemVersion::OSType osType = *(QOperatingSystemVersion::OSType*)this_; int vmajor = *(int*)this_; int vminor = *(int*)this_; int vmicro = *(int*)this_;
  this_ =  new QOperatingSystemVersion(osType, vmajor, vminor, vmicro);
  this_ =  new MyQOperatingSystemVersion(osType, vmajor, vminor, vmicro);
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:98
// [4] QOperatingSystemVersion::OSType currentType() 
// (12)qm1121548221 (43)_ZN23QOperatingSystemVersion11currentTypeEv
//static
/*void qm1121548221()*/ {
  ;
  (void) QOperatingSystemVersion::currentType();
   auto xptr = (QOperatingSystemVersion::OSType (*)() ) &QOperatingSystemVersion::currentType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:117
// [4] int majorVersion() const
// (12)qm3435482074 (45)_ZNK23QOperatingSystemVersion12majorVersionEv
//static
/*void qm3435482074()*/ {
  ;
  (void) ((QOperatingSystemVersion*)this_)->majorVersion();
   auto xptr = (int (QOperatingSystemVersion::*)() const ) &QOperatingSystemVersion::majorVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:118
// [4] int minorVersion() const
// (12)qm2512430024 (45)_ZNK23QOperatingSystemVersion12minorVersionEv
//static
/*void qm2512430024()*/ {
  ;
  (void) ((QOperatingSystemVersion*)this_)->minorVersion();
   auto xptr = (int (QOperatingSystemVersion::*)() const ) &QOperatingSystemVersion::minorVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:119
// [4] int microVersion() const
// (12)qm3160220082 (45)_ZNK23QOperatingSystemVersion12microVersionEv
//static
/*void qm3160220082()*/ {
  ;
  (void) ((QOperatingSystemVersion*)this_)->microVersion();
   auto xptr = (int (QOperatingSystemVersion::*)() const ) &QOperatingSystemVersion::microVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:121
// [4] int segmentCount() const
// (12)qm4043402791 (45)_ZNK23QOperatingSystemVersion12segmentCountEv
//static
/*void qm4043402791()*/ {
  ;
  (void) ((QOperatingSystemVersion*)this_)->segmentCount();
   auto xptr = (int (QOperatingSystemVersion::*)() const ) &QOperatingSystemVersion::segmentCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:125
// [4] QOperatingSystemVersion::OSType type() const
// (12)qm2422311540 (36)_ZNK23QOperatingSystemVersion4typeEv
//static
/*void qm2422311540()*/ {
  ;
  (void) ((QOperatingSystemVersion*)this_)->type();
   auto xptr = (QOperatingSystemVersion::OSType (QOperatingSystemVersion::*)() const ) &QOperatingSystemVersion::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QOperatingSystemVersionD2Ev(void *this_)*/ {
  delete (QOperatingSystemVersion*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qoperatingsystemversion
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
