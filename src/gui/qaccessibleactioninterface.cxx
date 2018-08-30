//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleActionInterface is pure virtual: true
// QAccessibleActionInterface has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAccessibleActionInterface_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleActionInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleActionInterface_t qt_meta_stringdata_MyQAccessibleActionInterface = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAccessibleActionInterface"
  },
  "MyQAccessibleActionInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleActionInterface[] = {
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
class Q_DECL_EXPORT MyQAccessibleActionInterface : public QAccessibleActionInterface {
public:
  virtual ~MyQAccessibleActionInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList actionNames()
  virtual QStringList actionNames() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"actionNames", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void doAction(const QString &)
  virtual void doAction(const QString & actionName)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"doAction", &handled, 1, (uint64_t)&actionName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAccessibleActionInterface::doAction(actionName);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList keyBindingsForAction(const QString &)
  virtual QStringList keyBindingsForAction(const QString & actionName) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyBindingsForAction", &handled, 1, (uint64_t)&actionName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:632
// [8] QStringList actionNames()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:635
// [-2] void doAction(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:636
// [8] QStringList keyBindingsForAction(const QString &)
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:628
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface2trEPKcS1_i(const char * sourceText, const char * disambiguation, int n) {
  auto rv = QAccessibleActionInterface::tr(sourceText, disambiguation, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:628
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface6trUtf8EPKcS1_i(const char * sourceText, const char * disambiguation, int n) {
  auto rv = QAccessibleActionInterface::trUtf8(sourceText, disambiguation, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:630
// [-2] void ~QAccessibleActionInterface()
extern "C" Q_DECL_EXPORT
void C_ZN26QAccessibleActionInterfaceD2Ev(void *this_) {
  delete (QAccessibleActionInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:632
// [8] QStringList actionNames()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAccessibleActionInterface11actionNamesEv(void *this_) {
  auto rv = ((QAccessibleActionInterface*)this_)->actionNames();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:633
// [8] QString localizedActionName(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAccessibleActionInterface19localizedActionNameERK7QString(void *this_, QString* name) {
  auto rv = ((QAccessibleActionInterface*)this_)->localizedActionName(*name);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:634
// [8] QString localizedActionDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAccessibleActionInterface26localizedActionDescriptionERK7QString(void *this_, QString* name) {
  auto rv = ((QAccessibleActionInterface*)this_)->localizedActionDescription(*name);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:635
// [-2] void doAction(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN26QAccessibleActionInterface8doActionERK7QString(void *this_, QString* actionName) {
  ((QAccessibleActionInterface*)this_)->doAction(*actionName);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:636
// [8] QStringList keyBindingsForAction(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAccessibleActionInterface20keyBindingsForActionERK7QString(void *this_, QString* actionName) {
  auto rv = ((QAccessibleActionInterface*)this_)->keyBindingsForAction(*actionName);
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:638
// [8] const QString & pressAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface11pressActionEv() {
  auto& rv = QAccessibleActionInterface::pressAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:639
// [8] const QString & increaseAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface14increaseActionEv() {
  auto& rv = QAccessibleActionInterface::increaseAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:640
// [8] const QString & decreaseAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface14decreaseActionEv() {
  auto& rv = QAccessibleActionInterface::decreaseAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:641
// [8] const QString & showMenuAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface14showMenuActionEv() {
  auto& rv = QAccessibleActionInterface::showMenuAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:642
// [8] const QString & setFocusAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface14setFocusActionEv() {
  auto& rv = QAccessibleActionInterface::setFocusAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:643
// [8] const QString & toggleAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface12toggleActionEv() {
  auto& rv = QAccessibleActionInterface::toggleAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:644
// [8] QString scrollLeftAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface16scrollLeftActionEv() {
  auto rv = QAccessibleActionInterface::scrollLeftAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:645
// [8] QString scrollRightAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface17scrollRightActionEv() {
  auto rv = QAccessibleActionInterface::scrollRightAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:646
// [8] QString scrollUpAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface14scrollUpActionEv() {
  auto rv = QAccessibleActionInterface::scrollUpAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:647
// [8] QString scrollDownAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface16scrollDownActionEv() {
  auto rv = QAccessibleActionInterface::scrollDownAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:648
// [8] QString nextPageAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface14nextPageActionEv() {
  auto rv = QAccessibleActionInterface::nextPageAction();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:649
// [8] QString previousPageAction()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleActionInterface18previousPageActionEv() {
  auto rv = QAccessibleActionInterface::previousPageAction();
return new QString(rv);
}

//  main block end
