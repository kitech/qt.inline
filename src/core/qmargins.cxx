//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qmargins.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmargins.h>
#include <QtCore>
#include "callback_inherit.h"

// QMargins is pure virtual: false
// QMargins has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMargins_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMargins_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMargins_t qt_meta_stringdata_MyQMargins = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQMargins"
  },
  "MyQMargins"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMargins[] = {
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
class Q_DECL_EXPORT MyQMargins : public QMargins {
public:
  virtual ~MyQMargins() {}
// void QMargins()
MyQMargins() : QMargins() {}
// void QMargins(int, int, int, int)
MyQMargins(int left, int top, int right, int bottom) : QMargins(left, top, right, bottom) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:54
// [-2] void QMargins()
extern "C" Q_DECL_EXPORT
void* C_ZN8QMarginsC2Ev() {
  return  new QMargins();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:55
// [-2] void QMargins(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMarginsC2Eiiii(int left, int top, int right, int bottom) {
  return  new QMargins(left, top, right, bottom);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:57
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QMargins6isNullEv(void *this_) {
  return (bool)((QMargins*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:59
// [4] int left()
extern "C" Q_DECL_EXPORT
int C_ZNK8QMargins4leftEv(void *this_) {
  return (int)((QMargins*)this_)->left();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:60
// [4] int top()
extern "C" Q_DECL_EXPORT
int C_ZNK8QMargins3topEv(void *this_) {
  return (int)((QMargins*)this_)->top();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:61
// [4] int right()
extern "C" Q_DECL_EXPORT
int C_ZNK8QMargins5rightEv(void *this_) {
  return (int)((QMargins*)this_)->right();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:62
// [4] int bottom()
extern "C" Q_DECL_EXPORT
int C_ZNK8QMargins6bottomEv(void *this_) {
  return (int)((QMargins*)this_)->bottom();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:64
// [-2] void setLeft(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QMargins7setLeftEi(void *this_, int left) {
  ((QMargins*)this_)->setLeft(left);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:65
// [-2] void setTop(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QMargins6setTopEi(void *this_, int top) {
  ((QMargins*)this_)->setTop(top);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:66
// [-2] void setRight(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QMargins8setRightEi(void *this_, int right) {
  ((QMargins*)this_)->setRight(right);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:67
// [-2] void setBottom(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QMargins9setBottomEi(void *this_, int bottom) {
  ((QMargins*)this_)->setBottom(bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:69
// [16] QMargins & operator+=(const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMarginspLERKS_(void *this_, QMargins* margins) {
  auto& rv = ((QMargins*)this_)->operator+=(*margins);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:70
// [16] QMargins & operator-=(const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMarginsmIERKS_(void *this_, QMargins* margins) {
  auto& rv = ((QMargins*)this_)->operator-=(*margins);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:71
// [16] QMargins & operator+=(int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMarginspLEi(void *this_, int arg0) {
  auto& rv = ((QMargins*)this_)->operator+=(arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:72
// [16] QMargins & operator-=(int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMarginsmIEi(void *this_, int arg0) {
  auto& rv = ((QMargins*)this_)->operator-=(arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:73
// [16] QMargins & operator*=(int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMarginsmLEi(void *this_, int arg0) {
  auto& rv = ((QMargins*)this_)->operator*=(arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:74
// [16] QMargins & operator/=(int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMarginsdVEi(void *this_, int arg0) {
  auto& rv = ((QMargins*)this_)->operator/=(arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:75
// [16] QMargins & operator*=(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMarginsmLEd(void *this_, qreal arg0) {
  auto& rv = ((QMargins*)this_)->operator*=(arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:76
// [16] QMargins & operator/=(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN8QMarginsdVEd(void *this_, qreal arg0) {
  auto& rv = ((QMargins*)this_)->operator/=(arg0);
return &rv;
}


extern "C" Q_DECL_EXPORT
void C_ZN8QMarginsD2Ev(void *this_) {
  delete (QMargins*)(this_);
}
//  main block end
