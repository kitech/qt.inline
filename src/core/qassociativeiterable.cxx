//  header block begin

// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

// QAssociativeIterable is pure virtual: false false
// QAssociativeIterable has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAssociativeIterable_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAssociativeIterable_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAssociativeIterable_t qt_meta_stringdata_MyQAssociativeIterable = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQAssociativeIterable"
  },
  "MyQAssociativeIterable"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAssociativeIterable[] = {
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
class Q_DECL_EXPORT MyQAssociativeIterable : public QAssociativeIterable {
public:
  virtual ~MyQAssociativeIterable() {}
// void QAssociativeIterable(QtMetaTypePrivate::QAssociativeIterableImpl)
MyQAssociativeIterable(QtMetaTypePrivate::QAssociativeIterableImpl impl) : QAssociativeIterable(impl) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qassociativeiterable(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:721
// [-2] void QAssociativeIterable(QtMetaTypePrivate::QAssociativeIterableImpl) 
// (11)qm837777242 (75)_ZN20QAssociativeIterableC2EN17QtMetaTypePrivate24QAssociativeIterableImplE
/*void* qm837777242(QtMetaTypePrivate::QAssociativeIterableImpl impl)*/{
  QtMetaTypePrivate::QAssociativeIterableImpl impl = *(QtMetaTypePrivate::QAssociativeIterableImpl*)this_;
  this_ =  new QAssociativeIterable(impl);
  this_ =  new MyQAssociativeIterable(impl);
}


/*void C_ZN20QAssociativeIterableD2Ev(void *this_)*/ {
  delete (QAssociativeIterable*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qassociativeiterable
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
