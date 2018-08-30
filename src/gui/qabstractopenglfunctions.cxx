//  header block begin
// since 0x050100
// /usr/include/qt/QtGui/qopenglversionfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglversionfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractOpenGLFunctions is pure virtual: true
// QAbstractOpenGLFunctions has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractOpenGLFunctions_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractOpenGLFunctions_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractOpenGLFunctions_t qt_meta_stringdata_MyQAbstractOpenGLFunctions = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQAbstractOpenGLFunctions"
  },
  "MyQAbstractOpenGLFunctions"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractOpenGLFunctions[] = {
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
class Q_DECL_EXPORT MyQAbstractOpenGLFunctions : public QAbstractOpenGLFunctions {
public:
  virtual ~MyQAbstractOpenGLFunctions() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:213
// [-2] void ~QAbstractOpenGLFunctions()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractOpenGLFunctionsD2Ev(void *this_) {
  delete (QAbstractOpenGLFunctions*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:215
// [1] bool initializeOpenGLFunctions()
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractOpenGLFunctions25initializeOpenGLFunctionsEv(void *this_) {
  return (bool)((QAbstractOpenGLFunctions*)this_)->initializeOpenGLFunctions();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:217
// [8] QAbstractOpenGLFunctionsPrivate * d_func()
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractOpenGLFunctions6d_funcEv(void *this_) {
  return (void*)((QAbstractOpenGLFunctions*)this_)->d_func();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:217
// [8] const QAbstractOpenGLFunctionsPrivate * d_func()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractOpenGLFunctions6d_funcEv(void *this_) {
  return (void*)((QAbstractOpenGLFunctions*)this_)->d_func();
}

//  main block end
