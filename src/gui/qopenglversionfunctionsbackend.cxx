//  header block begin
// /usr/include/qt/QtGui/qopenglversionfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglversionfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVersionFunctionsBackend is pure virtual: false
// QOpenGLVersionFunctionsBackend has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQOpenGLVersionFunctionsBackend_t {
  QByteArrayData data[1];
  char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLVersionFunctionsBackend_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLVersionFunctionsBackend_t qt_meta_stringdata_MyQOpenGLVersionFunctionsBackend = {
   {
  QT_MOC_LITERAL(0, 0, 32), // "MyQOpenGLVersionFunctionsBackend"
  },
  "MyQOpenGLVersionFunctionsBackend"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLVersionFunctionsBackend[] = {
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
class Q_DECL_EXPORT MyQOpenGLVersionFunctionsBackend : public QOpenGLVersionFunctionsBackend {
public:
  virtual ~MyQOpenGLVersionFunctionsBackend() {}
// void QOpenGLVersionFunctionsBackend(QOpenGLContext *)
MyQOpenGLVersionFunctionsBackend(QOpenGLContext * ctx) : QOpenGLVersionFunctionsBackend(ctx) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:171
// [-2] void QOpenGLVersionFunctionsBackend(QOpenGLContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN30QOpenGLVersionFunctionsBackendC2EP14QOpenGLContext(QOpenGLContext * ctx) {
  return  new QOpenGLVersionFunctionsBackend(ctx);
}


extern "C" Q_DECL_EXPORT
void C_ZN30QOpenGLVersionFunctionsBackendD2Ev(void *this_) {
  delete (QOpenGLVersionFunctionsBackend*)(this_);
}
//  main block end
