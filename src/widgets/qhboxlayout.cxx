//  header block begin
// /usr/include/qt/QtWidgets/qboxlayout.h
#ifndef protected
#define protected public
#endif
#include <qboxlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QHBoxLayout is pure virtual: false
// QHBoxLayout has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQHBoxLayout : public QHBoxLayout {
public:
  virtual ~MyQHBoxLayout() {}
// void QHBoxLayout()
MyQHBoxLayout() : QHBoxLayout() {}
// void QHBoxLayout(QWidget *)
MyQHBoxLayout(QWidget * parent) : QHBoxLayout(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:115
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHBoxLayout10metaObjectEv(void *this_) {
  return (void*)((QHBoxLayout*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:115
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHBoxLayout11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QHBoxLayout*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:115
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QHBoxLayout11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QHBoxLayout*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:115
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHBoxLayout2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QHBoxLayout::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:115
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHBoxLayout6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QHBoxLayout::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:117
// [-2] void QHBoxLayout()
extern "C" Q_DECL_EXPORT
void* C_ZN11QHBoxLayoutC2Ev() {
  return  new QHBoxLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:118
// [-2] void QHBoxLayout(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHBoxLayoutC2EP7QWidget(QWidget * parent) {
  return  new QHBoxLayout(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:119
// [-2] void ~QHBoxLayout()
extern "C" Q_DECL_EXPORT
void C_ZN11QHBoxLayoutD2Ev(void *this_) {
  delete (QHBoxLayout*)(this_);
}
//  main block end
