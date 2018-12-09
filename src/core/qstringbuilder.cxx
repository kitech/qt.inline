//  header block begin

// /usr/include/qt/QtCore/qstringbuilder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringBuilder is pure virtual: false
// QStringBuilder has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStringBuilder_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStringBuilder_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStringBuilder_t qt_meta_stringdata_MyQStringBuilder = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQStringBuilder"
  },
  "MyQStringBuilder"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStringBuilder[] = {
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
class Q_DECL_EXPORT MyQStringBuilder : public QStringBuilder<QByteArray, QByteArray> {
public:
  virtual ~MyQStringBuilder() {}
// void QStringBuilder(const QByteArray &, const QByteArray &)
MyQStringBuilder(const QByteArray & a_, const QByteArray & b_) : QStringBuilder<QByteArray, QByteArray>(a_, b_) {}
// void QStringBuilder(const QStringBuilder<QByteArray, QByteArray> &)
MyQStringBuilder(const QStringBuilder<QByteArray, QByteArray> & other) : QStringBuilder<QByteArray, QByteArray>(other) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:160
// [-2] void QStringBuilder(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStringBuilderI10QByteArrayS0_EC2ERKS0_S3_(QByteArray* a_, QByteArray* b_) {
  return  new QStringBuilder<QByteArray, QByteArray>(*a_, *b_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:161
// [-2] void QStringBuilder(const QStringBuilder<QByteArray, QByteArray> &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStringBuilderI10QByteArrayS0_EC2ERKS1_(const QStringBuilder<QByteArray, QByteArray>* other) {
  return  new QStringBuilder<QByteArray, QByteArray>(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN14QStringBuilderD2Ev(void *this_) {
  delete (QStringBuilder<QByteArray, QByteArray>*)(this_);
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
