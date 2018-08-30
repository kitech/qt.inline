//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextLength is pure virtual: false
// QTextLength has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTextLength_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextLength_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextLength_t qt_meta_stringdata_MyQTextLength = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextLength"
  },
  "MyQTextLength"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextLength[] = {
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
class Q_DECL_EXPORT MyQTextLength : public QTextLength {
public:
  virtual ~MyQTextLength() {}
// void QTextLength()
MyQTextLength() : QTextLength() {}
// void QTextLength(QTextLength::Type, qreal)
MyQTextLength(QTextLength::Type type_, qreal value) : QTextLength(type_, value) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:89
// [-2] void QTextLength()
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextLengthC2Ev() {
  return  new QTextLength();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:91
// [-2] void QTextLength(QTextLength::Type, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextLengthC2ENS_4TypeEd(QTextLength::Type type_, qreal value) {
  return  new QTextLength(type_, value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:93
// [4] QTextLength::Type type()
extern "C" Q_DECL_EXPORT
QTextLength::Type C_ZNK11QTextLength4typeEv(void *this_) {
  return (QTextLength::Type)((QTextLength*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:94
// [8] qreal value(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QTextLength5valueEd(void *this_, qreal maximumLength) {
  return (qreal)((QTextLength*)this_)->value(maximumLength);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:104
// [8] qreal rawValue()
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QTextLength8rawValueEv(void *this_) {
  return (qreal)((QTextLength*)this_)->rawValue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:106
// [1] bool operator==(const QTextLength &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextLengtheqERKS_(void *this_, QTextLength* other) {
  return (bool)((QTextLength*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:109
// [1] bool operator!=(const QTextLength &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextLengthneERKS_(void *this_, QTextLength* other) {
  return (bool)((QTextLength*)this_)->operator!=(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QTextLengthD2Ev(void *this_) {
  delete (QTextLength*)(this_);
}
//  main block end
