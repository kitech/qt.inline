//  header block begin
// /usr/include/qt/QtGui/qaccessibleobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessibleobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleObject is pure virtual: true
// QAccessibleObject has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleObject : public QAccessibleObject {
public:
  virtual ~MyQAccessibleObject() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAccessibleInterface * parent()
  virtual QAccessibleInterface * parent() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"parent", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessibleInterface *)(irv);
      // Pointer Pointer QAccessibleInterface *
    } else {
    return (QAccessibleInterface *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAccessibleInterface * child(int)
  virtual QAccessibleInterface * child(int index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"child", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessibleInterface *)(irv);
      // Pointer Pointer QAccessibleInterface *
    } else {
    return (QAccessibleInterface *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int childCount()
  virtual int childCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int indexOfChild(const QAccessibleInterface *)
  virtual int indexOfChild(const QAccessibleInterface * arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"indexOfChild", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString text(QAccessible::Text)
  virtual QString text(QAccessible::Text t) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"text", &handled, 1, (uint64_t)t, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QAccessible::Role role()
  virtual QAccessible::Role role() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"role", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessible::Role)(int)(irv);
      // Elaborated Enum QAccessible::Role
    } else {
    return (QAccessible::Role){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAccessible::State state()
  virtual QAccessible::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QAccessible::State*)(&irv);
      // Elaborated Record QAccessible::State
    } else {
    return (QAccessible::State){};
  }
  }

// void QAccessibleObject(QObject *)
MyQAccessibleObject(QObject * object) : QAccessibleObject(object) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:475
// [8] QAccessibleInterface * parent()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:476
// [8] QAccessibleInterface * child(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:477
// [4] int childCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:478
// [4] int indexOfChild(const QAccessibleInterface *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:481
// [8] QString text(QAccessible::Text)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:484
// [4] QAccessible::Role role()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:485
// [8] QAccessible::State state()
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:57
// [-2] void QAccessibleObject(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAccessibleObjectC2EP7QObject(QObject * object) {
  return 0; // new QAccessibleObject(object);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:59
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAccessibleObject7isValidEv(void *this_) {
  return (bool)((QAccessibleObject*)this_)->isValid();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:60
// [8] QObject * object()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleObject6objectEv(void *this_) {
  return (void*)((QAccessibleObject*)this_)->object();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:63
// [16] QRect rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleObject4rectEv(void *this_) {
  auto rv = ((QAccessibleObject*)this_)->rect();
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:64
// [-2] void setText(QAccessible::Text, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleObject7setTextEN11QAccessible4TextERK7QString(void *this_, QAccessible::Text t, QString* text) {
  ((QAccessibleObject*)this_)->setText(t, *text);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleobject.h:65
// [8] QAccessibleInterface * childAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessibleObject7childAtEii(void *this_, int x, int y) {
  return (void*)((QAccessibleObject*)this_)->childAt(x, y);
}


extern "C" Q_DECL_EXPORT
void C_ZN17QAccessibleObjectD2Ev(void *this_) {
  delete (QAccessibleObject*)(this_);
}
//  main block end
