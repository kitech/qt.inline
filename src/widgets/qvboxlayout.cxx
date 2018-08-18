//  header block begin
// /usr/include/qt/QtWidgets/qboxlayout.h
#ifndef protected
#define protected public
#endif
#include <qboxlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QVBoxLayout is pure virtual: false
// QVBoxLayout has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVBoxLayout : public QVBoxLayout {
public:
  virtual ~MyQVBoxLayout() {}
// void QVBoxLayout()
MyQVBoxLayout() : QVBoxLayout() {}
// void QVBoxLayout(QWidget *)
MyQVBoxLayout(QWidget * parent) : QVBoxLayout(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:128
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QVBoxLayout10metaObjectEv(void *this_) {
  return (void*)((QVBoxLayout*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:128
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVBoxLayout11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QVBoxLayout*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:128
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QVBoxLayout11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QVBoxLayout*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:128
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVBoxLayout2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVBoxLayout::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:128
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVBoxLayout6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVBoxLayout::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:130
// [-2] void QVBoxLayout()
extern "C" Q_DECL_EXPORT
void* C_ZN11QVBoxLayoutC2Ev() {
  return  new QVBoxLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:131
// [-2] void QVBoxLayout(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVBoxLayoutC2EP7QWidget(QWidget * parent) {
  return  new QVBoxLayout(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:132
// [-2] void ~QVBoxLayout()
extern "C" Q_DECL_EXPORT
void C_ZN11QVBoxLayoutD2Ev(void *this_) {
  delete (QVBoxLayout*)(this_);
}
//  main block end
