// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qaccessiblewidget.h
// dst-file: /src/widgets/qaccessiblewidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qaccessiblewidget.h>


#include <qrect.h>
#include <qcolor.h>
#include <qstring.h>
#include <qaccessible.h>
#include <qstringlist.h>
#include <qvector.h>
#include <qregion.h>
// <= header block end

// main block begin =>
void __keep_qaccessiblewidget_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAccessibleWidget_Class_Size()
{
  return sizeof(QAccessibleWidget);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 53, column 9>
//   // proto:  int QAccessibleWidget::childCount();
// _ZNK17QAccessibleWidget10childCountEv childCount()
extern "C"
int
C_ZNK17QAccessibleWidget10childCountEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->childCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 49, column 14>
//   // proto:  void QAccessibleWidget::QAccessibleWidget(QWidget * o, QAccessible::Role r, const QString & name);
extern "C"
QAccessibleWidget*
C_ZN17QAccessibleWidgetC2EP7QWidgetN11QAccessible4RoleERK7QString(QWidget * arg1,
QAccessible::Role* arg2,
const QString* arg3) {
  auto ret = new QAccessibleWidget(arg1, *((QAccessible::Role*)arg2), *((const QString*)arg3));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 61, column 27>
//   // proto:  QAccessibleInterface * QAccessibleWidget::child(int index);
// _ZNK17QAccessibleWidget5childEi child(int)
extern "C"
void*
C_ZNK17QAccessibleWidget5childEi(void *qthis,
int arg1) {
  auto ret =
  ((QAccessibleWidget*)qthis)->child(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 52, column 14>
//   // proto:  QWindow * QAccessibleWidget::window();
// _ZNK17QAccessibleWidget6windowEv window()
extern "C"
void*
C_ZNK17QAccessibleWidget6windowEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->window();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 58, column 11>
//   // proto:  QRect QAccessibleWidget::rect();
// _ZNK17QAccessibleWidget4rectEv rect()
extern "C"
QRect*
C_ZNK17QAccessibleWidget4rectEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->rect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 67, column 12>
//   // proto:  QColor QAccessibleWidget::foregroundColor();
// _ZNK17QAccessibleWidget15foregroundColorEv foregroundColor()
extern "C"
QColor*
C_ZNK17QAccessibleWidget15foregroundColorEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->foregroundColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 63, column 13>
//   // proto:  QString QAccessibleWidget::text(QAccessible::Text t);
// _ZNK17QAccessibleWidget4textEN11QAccessible4TextE text(class QAccessible::Text)
extern "C"
QString*
C_ZNK17QAccessibleWidget4textEN11QAccessible4TextE(void *qthis,
QAccessible::Text* arg1) {
  auto ret =
  ((QAccessibleWidget*)qthis)->text(*((QAccessible::Text*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 50, column 10>
//   // proto:  bool QAccessibleWidget::isValid();
// _ZNK17QAccessibleWidget7isValidEv isValid()
extern "C"
bool
C_ZNK17QAccessibleWidget7isValidEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 56, column 27>
//   // proto:  QAccessibleInterface * QAccessibleWidget::focusChild();
// _ZNK17QAccessibleWidget10focusChildEv focusChild()
extern "C"
void*
C_ZNK17QAccessibleWidget10focusChildEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->focusChild();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 65, column 24>
//   // proto:  QAccessible::State QAccessibleWidget::state();
// _ZNK17QAccessibleWidget5stateEv state()
extern "C"
QAccessible::State*
C_ZNK17QAccessibleWidget5stateEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->state();
  return new QAccessible::State(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 68, column 12>
//   // proto:  QColor QAccessibleWidget::backgroundColor();
// _ZNK17QAccessibleWidget15backgroundColorEv backgroundColor()
extern "C"
QColor*
C_ZNK17QAccessibleWidget15backgroundColorEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->backgroundColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 73, column 17>
//   // proto:  QStringList QAccessibleWidget::actionNames();
// _ZNK17QAccessibleWidget11actionNamesEv actionNames()
extern "C"
QStringList*
C_ZNK17QAccessibleWidget11actionNamesEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->actionNames();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 55, column 67>
//   // proto:  QVector<QPair<QAccessibleInterface *, QAccessible::Relation> > QAccessibleWidget::relations(QAccessible::Relation match);
// _ZNK17QAccessibleWidget9relationsE6QFlagsIN11QAccessible12RelationFlagEE relations(class QAccessible::Relation)
extern "C"
QVector<QPair<QAccessibleInterface *, QFlags<QAccessible::RelationFlag> > >*
C_ZNK17QAccessibleWidget9relationsE6QFlagsIN11QAccessible12RelationFlagEE(void *qthis,
QAccessible::Relation* arg1) {
  auto ret =
  ((QAccessibleWidget*)qthis)->relations(*((QAccessible::Relation*)arg1));
  return new QVector<QPair<QAccessibleInterface *, QFlags<QAccessible::RelationFlag> > >(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 64, column 23>
//   // proto:  QAccessible::Role QAccessibleWidget::role();
// _ZNK17QAccessibleWidget4roleEv role()
extern "C"
QAccessible::Role
C_ZNK17QAccessibleWidget4roleEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->role();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 60, column 27>
//   // proto:  QAccessibleInterface * QAccessibleWidget::parent();
// _ZNK17QAccessibleWidget6parentEv parent()
extern "C"
void*
C_ZNK17QAccessibleWidget6parentEv(void *qthis) {
  auto ret =
  ((QAccessibleWidget*)qthis)->parent();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 74, column 10>
//   // proto:  void QAccessibleWidget::doAction(const QString & actionName);
// _ZN17QAccessibleWidget8doActionERK7QString doAction(const class QString &)
extern "C"
void
C_ZN17QAccessibleWidget8doActionERK7QString(void *qthis,
const QString* arg1) {
  ((QAccessibleWidget*)qthis)->doAction(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 75, column 17>
//   // proto:  QStringList QAccessibleWidget::keyBindingsForAction(const QString & actionName);
// _ZNK17QAccessibleWidget20keyBindingsForActionERK7QString keyBindingsForAction(const class QString &)
extern "C"
QStringList*
C_ZNK17QAccessibleWidget20keyBindingsForActionERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QAccessibleWidget*)qthis)->keyBindingsForAction(*((const QString*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 70, column 11>
//   // proto:  void * QAccessibleWidget::interface_cast(QAccessible::InterfaceType t);
// _ZN17QAccessibleWidget14interface_castEN11QAccessible13InterfaceTypeE interface_cast(class QAccessible::InterfaceType)
extern "C"
void*
C_ZN17QAccessibleWidget14interface_castEN11QAccessible13InterfaceTypeE(void *qthis,
QAccessible::InterfaceType* arg1) {
  auto ret =
  ((QAccessibleWidget*)qthis)->interface_cast(*((QAccessible::InterfaceType*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaccessiblewidget.h', line 54, column 9>
//   // proto:  int QAccessibleWidget::indexOfChild(const QAccessibleInterface * child);
// _ZNK17QAccessibleWidget12indexOfChildEPK20QAccessibleInterface indexOfChild(const class QAccessibleInterface *)
extern "C"
int
C_ZNK17QAccessibleWidget12indexOfChildEPK20QAccessibleInterface(void *qthis,
const QAccessibleInterface * arg1) {
  auto ret =
  ((QAccessibleWidget*)qthis)->indexOfChild(arg1);
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// <= body block end

