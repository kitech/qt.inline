// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qaccessibleobject.h
// dst-file: /src/gui/qaccessibleobject.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qaccessibleobject.h>


#include <qstring.h>
#include <qaccessible.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qaccessibleobject_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAccessibleApplication_Class_Size()
{
  return sizeof(QAccessibleApplication);
}

extern "C"
int QAccessibleObject_Class_Size()
{
  return sizeof(QAccessibleObject);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 71, column 5>
//   // proto:  void QAccessibleApplication::QAccessibleApplication();
extern "C"
QAccessibleApplication*
C_ZN22QAccessibleApplicationC2Ev() {
  auto ret = new QAccessibleApplication();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 84, column 13>
//   // proto:  QString QAccessibleApplication::text(QAccessible::Text t);
// _ZNK22QAccessibleApplication4textEN11QAccessible4TextE text(class QAccessible::Text)
extern "C"
QString*
C_ZNK22QAccessibleApplication4textEN11QAccessible4TextE(void *qthis,
QAccessible::Text* arg1) {
  auto ret =
  ((QAccessibleApplication*)qthis)->text(*((QAccessible::Text*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 73, column 14>
//   // proto:  QWindow * QAccessibleApplication::window();
// _ZNK22QAccessibleApplication6windowEv window()
extern "C"
void*
C_ZNK22QAccessibleApplication6windowEv(void *qthis) {
  auto ret =
  ((QAccessibleApplication*)qthis)->window();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 86, column 24>
//   // proto:  QAccessible::State QAccessibleApplication::state();
// _ZNK22QAccessibleApplication5stateEv state()
extern "C"
QAccessible::State*
C_ZNK22QAccessibleApplication5stateEv(void *qthis) {
  auto ret =
  ((QAccessibleApplication*)qthis)->state();
  return new QAccessible::State(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 81, column 27>
//   // proto:  QAccessibleInterface * QAccessibleApplication::child(int index);
// _ZNK22QAccessibleApplication5childEi child(int)
extern "C"
void*
C_ZNK22QAccessibleApplication5childEi(void *qthis,
int arg1) {
  auto ret =
  ((QAccessibleApplication*)qthis)->child(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 75, column 9>
//   // proto:  int QAccessibleApplication::childCount();
// _ZNK22QAccessibleApplication10childCountEv childCount()
extern "C"
int
C_ZNK22QAccessibleApplication10childCountEv(void *qthis) {
  auto ret =
  ((QAccessibleApplication*)qthis)->childCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 80, column 27>
//   // proto:  QAccessibleInterface * QAccessibleApplication::parent();
// _ZNK22QAccessibleApplication6parentEv parent()
extern "C"
void*
C_ZNK22QAccessibleApplication6parentEv(void *qthis) {
  auto ret =
  ((QAccessibleApplication*)qthis)->parent();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 77, column 27>
//   // proto:  QAccessibleInterface * QAccessibleApplication::focusChild();
// _ZNK22QAccessibleApplication10focusChildEv focusChild()
extern "C"
void*
C_ZNK22QAccessibleApplication10focusChildEv(void *qthis) {
  auto ret =
  ((QAccessibleApplication*)qthis)->focusChild();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 85, column 23>
//   // proto:  QAccessible::Role QAccessibleApplication::role();
// _ZNK22QAccessibleApplication4roleEv role()
extern "C"
QAccessible::Role
C_ZNK22QAccessibleApplication4roleEv(void *qthis) {
  auto ret =
  ((QAccessibleApplication*)qthis)->role();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 76, column 9>
//   // proto:  int QAccessibleApplication::indexOfChild(const QAccessibleInterface * );
// _ZNK22QAccessibleApplication12indexOfChildEPK20QAccessibleInterface indexOfChild(const class QAccessibleInterface *)
extern "C"
int
C_ZNK22QAccessibleApplication12indexOfChildEPK20QAccessibleInterface(void *qthis,
const QAccessibleInterface * arg1) {
  auto ret =
  ((QAccessibleApplication*)qthis)->indexOfChild(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 57, column 10>
//   // proto:  void QAccessibleObject::setText(QAccessible::Text t, const QString & text);
// _ZN17QAccessibleObject7setTextEN11QAccessible4TextERK7QString setText(class QAccessible::Text, const class QString &)
extern "C"
void
C_ZN17QAccessibleObject7setTextEN11QAccessible4TextERK7QString(void *qthis,
QAccessible::Text* arg1,
const QString* arg2) {
  ((QAccessibleObject*)qthis)->setText(*((QAccessible::Text*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 53, column 14>
//   // proto:  QObject * QAccessibleObject::object();
// _ZNK17QAccessibleObject6objectEv object()
extern "C"
void*
C_ZNK17QAccessibleObject6objectEv(void *qthis) {
  auto ret =
  ((QAccessibleObject*)qthis)->object();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 56, column 11>
//   // proto:  QRect QAccessibleObject::rect();
// _ZNK17QAccessibleObject4rectEv rect()
extern "C"
QRect*
C_ZNK17QAccessibleObject4rectEv(void *qthis) {
  auto ret =
  ((QAccessibleObject*)qthis)->rect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 58, column 27>
//   // proto:  QAccessibleInterface * QAccessibleObject::childAt(int x, int y);
// _ZNK17QAccessibleObject7childAtEii childAt(int, int)
extern "C"
void*
C_ZNK17QAccessibleObject7childAtEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QAccessibleObject*)qthis)->childAt(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qaccessibleobject.h', line 52, column 10>
//   // proto:  bool QAccessibleObject::isValid();
// _ZNK17QAccessibleObject7isValidEv isValid()
extern "C"
bool
C_ZNK17QAccessibleObject7isValidEv(void *qthis) {
  auto ret =
  ((QAccessibleObject*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

