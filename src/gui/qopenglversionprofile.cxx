//  header block begin

// /usr/include/qt/QtGui/qopenglcontext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglcontext.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVersionProfile is pure virtual: false false
// QOpenGLVersionProfile has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLVersionProfile_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLVersionProfile_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLVersionProfile_t qt_meta_stringdata_MyQOpenGLVersionProfile = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQOpenGLVersionProfile"
  },
  "MyQOpenGLVersionProfile"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLVersionProfile[] = {
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
class Q_DECL_EXPORT MyQOpenGLVersionProfile : public QOpenGLVersionProfile {
public:
  virtual ~MyQOpenGLVersionProfile() {}
// void QOpenGLVersionProfile()
MyQOpenGLVersionProfile() : QOpenGLVersionProfile() {}
// void QOpenGLVersionProfile(const QSurfaceFormat &)
MyQOpenGLVersionProfile(const QSurfaceFormat & format) : QOpenGLVersionProfile(format) {}
// void QOpenGLVersionProfile(const QOpenGLVersionProfile &)
MyQOpenGLVersionProfile(const QOpenGLVersionProfile & other) : QOpenGLVersionProfile(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglversionprofile(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN21QOpenGLVersionProfileD2Ev(void *this_)*/ {
  delete (QOpenGLVersionProfile*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglversionprofile
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
