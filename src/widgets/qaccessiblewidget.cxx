//  header block begin

// /usr/include/qt/QtWidgets/qaccessiblewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessiblewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAccessibleWidget is pure virtual: false
// QAccessibleWidget has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleWidget_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleWidget_t qt_meta_stringdata_MyQAccessibleWidget = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQAccessibleWidget"
  },
  "MyQAccessibleWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleWidget[] = {
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
class Q_DECL_EXPORT MyQAccessibleWidget : public QAccessibleWidget {
public:
// void QAccessibleWidget(QWidget *, QAccessible::Role, const QString &)
MyQAccessibleWidget(QWidget * o, QAccessible::Role r, const QString & name) : QAccessibleWidget(o, r, name) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:56
// [-2] void QAccessibleWidget(QWidget *, QAccessible::Role, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAccessibleWidgetC2EP7QWidgetN11QAccessible4RoleERK7QString(QWidget * o, QAccessible::Role r, QString* name) {
  return  new QAccessibleWidget(o, r, *name);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:57
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAccessibleWidget7isValidEv(void *this_) {
  return (bool)((QAccessibleWidget*)this_)->isValid();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:59
// [8] QWindow * window()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleWidget6windowEv(void *this_) {
  return (void*)((QAccessibleWidget*)this_)->window();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:60
// [4] int childCount()
extern "C" Q_DECL_EXPORT
int C_ZNK17QAccessibleWidget10childCountEv(void *this_) {
  return (int)((QAccessibleWidget*)this_)->childCount();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:61
// [4] int indexOfChild(const QAccessibleInterface *)
extern "C" Q_DECL_EXPORT
int C_ZNK17QAccessibleWidget12indexOfChildEPK20QAccessibleInterface(void *this_, const QAccessibleInterface * child) {
  return (int)((QAccessibleWidget*)this_)->indexOfChild(child);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:62
// [-2] QVector<QPair<QAccessibleInterface *, QAccessible::Relation> > relations(QAccessible::Relation)
extern "C" Q_DECL_EXPORT
void C_ZNK17QAccessibleWidget9relationsE6QFlagsIN11QAccessible12RelationFlagEE(void *this_, QFlags<QAccessible::RelationFlag> match_) {
  auto rv = ((QAccessibleWidget*)this_)->relations(match_);
/*return rv;*/
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:63
// [8] QAccessibleInterface * focusChild()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleWidget10focusChildEv(void *this_) {
  return (void*)((QAccessibleWidget*)this_)->focusChild();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:65
// [16] QRect rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleWidget4rectEv(void *this_) {
  auto rv = ((QAccessibleWidget*)this_)->rect();
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:67
// [8] QAccessibleInterface * parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleWidget6parentEv(void *this_) {
  return (void*)((QAccessibleWidget*)this_)->parent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:68
// [8] QAccessibleInterface * child(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleWidget5childEi(void *this_, int index) {
  return (void*)((QAccessibleWidget*)this_)->child(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:70
// [8] QString text(QAccessible::Text)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleWidget4textEN11QAccessible4TextE(void *this_, QAccessible::Text t) {
  auto rv = ((QAccessibleWidget*)this_)->text(t);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:71
// [4] QAccessible::Role role()
extern "C" Q_DECL_EXPORT
QAccessible::Role C_ZNK17QAccessibleWidget4roleEv(void *this_) {
  return (QAccessible::Role)((QAccessibleWidget*)this_)->role();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:72
// [8] QAccessible::State state()
extern "C" Q_DECL_EXPORT
QAccessible::State C_ZNK17QAccessibleWidget5stateEv(void *this_) {
  return (QAccessible::State)((QAccessibleWidget*)this_)->state();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:74
// [16] QColor foregroundColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleWidget15foregroundColorEv(void *this_) {
  auto rv = ((QAccessibleWidget*)this_)->foregroundColor();
return new QColor(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:75
// [16] QColor backgroundColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleWidget15backgroundColorEv(void *this_) {
  auto rv = ((QAccessibleWidget*)this_)->backgroundColor();
return new QColor(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:77
// [8] void * interface_cast(QAccessible::InterfaceType)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAccessibleWidget14interface_castEN11QAccessible13InterfaceTypeE(void *this_, QAccessible::InterfaceType t) {
  return (void*)((QAccessibleWidget*)this_)->interface_cast(t);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:80
// [8] QStringList actionNames()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleWidget11actionNamesEv(void *this_) {
  auto rv = ((QAccessibleWidget*)this_)->actionNames();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:81
// [-2] void doAction(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleWidget8doActionERK7QString(void *this_, QString* actionName) {
  ((QAccessibleWidget*)this_)->doAction(*actionName);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaccessiblewidget.h:82
// [8] QStringList keyBindingsForAction(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleWidget20keyBindingsForActionERK7QString(void *this_, QString* actionName) {
  auto rv = ((QAccessibleWidget*)this_)->keyBindingsForAction(*actionName);
return new QStringList(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
