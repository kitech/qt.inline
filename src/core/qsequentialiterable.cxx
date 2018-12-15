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

// QSequentialIterable is pure virtual: false
// QSequentialIterable has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSequentialIterable_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSequentialIterable_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSequentialIterable_t qt_meta_stringdata_MyQSequentialIterable = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQSequentialIterable"
  },
  "MyQSequentialIterable"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSequentialIterable[] = {
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
class Q_DECL_EXPORT MyQSequentialIterable : public QSequentialIterable {
public:
  virtual ~MyQSequentialIterable() {}
// void QSequentialIterable(QtMetaTypePrivate::QSequentialIterableImpl)
MyQSequentialIterable(QtMetaTypePrivate::QSequentialIterableImpl impl) : QSequentialIterable(impl) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:642
// [-2] void QSequentialIterable(QtMetaTypePrivate::QSequentialIterableImpl)
extern "C" Q_DECL_EXPORT
void* C_ZN19QSequentialIterableC2EN17QtMetaTypePrivate23QSequentialIterableImplE(QtMetaTypePrivate::QSequentialIterableImpl impl) {
  return  new QSequentialIterable(impl);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:647
// [112] QSequentialIterable::const_iterator begin()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QSequentialIterable5beginEv(void *this_) {
  auto rv = ((QSequentialIterable*)this_)->begin();
return new QSequentialIterable::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:648
// [112] QSequentialIterable::const_iterator end()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QSequentialIterable3endEv(void *this_) {
  auto rv = ((QSequentialIterable*)this_)->end();
return new QSequentialIterable::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:650
// [16] QVariant at(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QSequentialIterable2atEi(void *this_, int idx) {
  auto rv = ((QSequentialIterable*)this_)->at(idx);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:651
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK19QSequentialIterable4sizeEv(void *this_) {
  return (int)((QSequentialIterable*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:653
// [1] bool canReverseIterate()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QSequentialIterable17canReverseIterateEv(void *this_) {
  return (bool)((QSequentialIterable*)this_)->canReverseIterate();
}


extern "C" Q_DECL_EXPORT
void C_ZN19QSequentialIterableD2Ev(void *this_) {
  delete (QSequentialIterable*)(this_);
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
