//  header block begin
// /usr/include/qt/QtWidgets/qactiongroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qactiongroup.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QActionGroup is pure virtual: false
// QActionGroup has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQActionGroup : public QActionGroup {
public:
  virtual ~MyQActionGroup() {}
// void QActionGroup(QObject *)
MyQActionGroup(QObject * parent) : QActionGroup(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QActionGroup10metaObjectEv(void *this_) {
  return (void*)((QActionGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QActionGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QActionGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QActionGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QActionGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QActionGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:63
// [-2] void QActionGroup(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroupC2EP7QObject(QObject * parent) {
  return  new QActionGroup(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:64
// [-2] void ~QActionGroup()
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroupD2Ev(void *this_) {
  delete (QActionGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:66
// [8] QAction * addAction(QAction *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup9addActionEP7QAction(void *this_, QAction * a) {
  return (void*)((QActionGroup*)this_)->addAction(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:67
// [8] QAction * addAction(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup9addActionERK7QString(void *this_, QString* text) {
  return (void*)((QActionGroup*)this_)->addAction(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:68
// [8] QAction * addAction(const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QActionGroup9addActionERK5QIconRK7QString(void *this_, QIcon* icon, QString* text) {
  return (void*)((QActionGroup*)this_)->addAction(*icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:69
// [-2] void removeAction(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup12removeActionEP7QAction(void *this_, QAction * a) {
  ((QActionGroup*)this_)->removeAction(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:70
// [-2] QList<QAction *> actions()
extern "C" Q_DECL_EXPORT
QList<QAction *>* C_ZNK12QActionGroup7actionsEv(void *this_) {
  auto rv = ((QActionGroup*)this_)->actions();
return new QList<QAction *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:72
// [8] QAction * checkedAction()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QActionGroup13checkedActionEv(void *this_) {
  return (void*)((QActionGroup*)this_)->checkedAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:73
// [1] bool isExclusive()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QActionGroup11isExclusiveEv(void *this_) {
  return (bool)((QActionGroup*)this_)->isExclusive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:74
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QActionGroup9isEnabledEv(void *this_) {
  return (bool)((QActionGroup*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:75
// [1] bool isVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QActionGroup9isVisibleEv(void *this_) {
  return (bool)((QActionGroup*)this_)->isVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:79
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup10setEnabledEb(void *this_, bool arg0) {
  ((QActionGroup*)this_)->setEnabled(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:80
// [-2] void setDisabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup11setDisabledEb(void *this_, bool b) {
  ((QActionGroup*)this_)->setDisabled(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:81
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup10setVisibleEb(void *this_, bool arg0) {
  ((QActionGroup*)this_)->setVisible(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:82
// [-2] void setExclusive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup12setExclusiveEb(void *this_, bool arg0) {
  ((QActionGroup*)this_)->setExclusive(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:85
// [-2] void triggered(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup9triggeredEP7QAction(void *this_, QAction * arg0) {
  ((QActionGroup*)this_)->triggered(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qactiongroup.h:86
// [-2] void hovered(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN12QActionGroup7hoveredEP7QAction(void *this_, QAction * arg0) {
  ((QActionGroup*)this_)->hovered(arg0);
}

//  main block end
