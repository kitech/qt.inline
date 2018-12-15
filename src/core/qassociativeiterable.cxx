//  header block begin

// since 0x050200
// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

// QAssociativeIterable is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:700
// [-2] void QAssociativeIterable(QtMetaTypePrivate::QAssociativeIterableImpl)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAssociativeIterableC2EN17QtMetaTypePrivate24QAssociativeIterableImplE(QtMetaTypePrivate::QAssociativeIterableImpl impl) {
  return  new QAssociativeIterable(impl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:705
// [120] QAssociativeIterable::const_iterator begin()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAssociativeIterable5beginEv(void *this_) {
  auto rv = ((QAssociativeIterable*)this_)->begin();
return new QAssociativeIterable::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:706
// [120] QAssociativeIterable::const_iterator end()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAssociativeIterable3endEv(void *this_) {
  auto rv = ((QAssociativeIterable*)this_)->end();
return new QAssociativeIterable::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtCore/qvariant.h:707
// [120] QAssociativeIterable::const_iterator find(const QVariant &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAssociativeIterable4findERK8QVariant(void *this_, QVariant* key) {
  auto rv = ((QAssociativeIterable*)this_)->find(*key);
return new QAssociativeIterable::const_iterator(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:709
// [16] QVariant value(const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAssociativeIterable5valueERK8QVariant(void *this_, QVariant* key) {
  auto rv = ((QAssociativeIterable*)this_)->value(*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:711
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK20QAssociativeIterable4sizeEv(void *this_) {
  return (int)((QAssociativeIterable*)this_)->size();
}


extern "C" Q_DECL_EXPORT
void C_ZN20QAssociativeIterableD2Ev(void *this_) {
  delete (QAssociativeIterable*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
