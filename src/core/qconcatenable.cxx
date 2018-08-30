//  header block begin
// /usr/include/qt/QtCore/qstringbuilder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QConcatenable is pure virtual: false
// QConcatenable has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQConcatenable_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQConcatenable_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQConcatenable_t qt_meta_stringdata_MyQConcatenable = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQConcatenable"
  },
  "MyQConcatenable"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQConcatenable[] = {
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
class Q_DECL_EXPORT MyQConcatenable : public QConcatenable<QByteArray> {
public:
  virtual ~MyQConcatenable() {}
};

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:333
// [4] int size(const QByteArray &)
extern "C" Q_DECL_EXPORT
int C_ZN13QConcatenableI10QByteArrayE4sizeERKS0_(QByteArray* ba) {
  return (int)QConcatenable<QByteArray>::size(*ba);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:335
// [-2] void appendTo(const QByteArray &, QChar *&)
extern "C" Q_DECL_EXPORT
void C_ZN13QConcatenableI10QByteArrayE8appendToERKS0_RP5QChar(QByteArray* ba, QChar *& out) {
  QConcatenable<QByteArray>::appendTo(*ba, out);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:340
// [-2] void appendTo(const QByteArray &, char *&)
extern "C" Q_DECL_EXPORT
void C_ZN13QConcatenableI10QByteArrayE8appendToERKS0_RPc(QByteArray* ba, char *& out) {
  QConcatenable<QByteArray>::appendTo(*ba, out);
}


extern "C" Q_DECL_EXPORT
void C_ZN13QConcatenableD2Ev(void *this_) {
  delete (QConcatenable<QByteArray>*)(this_);
}
//  main block end
