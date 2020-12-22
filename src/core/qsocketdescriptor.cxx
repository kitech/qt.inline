//  header block begin

// /usr/include/qt/QtCore/qsocketnotifier.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsocketnotifier.h>
#include <QtCore>
#include "callback_inherit.h"

// QSocketDescriptor is pure virtual: false false
// QSocketDescriptor has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSocketDescriptor_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSocketDescriptor_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSocketDescriptor_t qt_meta_stringdata_MyQSocketDescriptor = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQSocketDescriptor"
  },
  "MyQSocketDescriptor"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSocketDescriptor[] = {
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
class Q_DECL_EXPORT MyQSocketDescriptor : public QSocketDescriptor {
public:
  virtual ~MyQSocketDescriptor() {}
// void QSocketDescriptor(QSocketDescriptor::DescriptorType)
MyQSocketDescriptor(QSocketDescriptor::DescriptorType descriptor) : QSocketDescriptor(descriptor) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsocketdescriptor(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:106
// [-2] void QSocketDescriptor(QSocketDescriptor::DescriptorType) 
// (12)qm4154457918 (26)_ZN17QSocketDescriptorC2Ei
/*void* qm4154457918(int descriptor)*/{
  int descriptor = *(int*)this_;
  this_ =  new QSocketDescriptor(descriptor);
  this_ =  new MyQSocketDescriptor(descriptor);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:117
// [1] bool isValid() const
// (12)qm3216593142 (33)_ZNK17QSocketDescriptor7isValidEv
//static
/*void qm3216593142()*/ {
  ;
  (void) ((QSocketDescriptor*)this_)->isValid();
   auto xptr = (bool (QSocketDescriptor::*)() const ) &QSocketDescriptor::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QSocketDescriptorD2Ev(void *this_)*/ {
  delete (QSocketDescriptor*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsocketdescriptor
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
