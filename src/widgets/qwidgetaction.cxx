//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qwidgetaction.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwidgetaction.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetAction is pure virtual: false
// QWidgetAction has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWidgetAction : public QWidgetAction {
public:
  virtual ~MyQWidgetAction() {}
// void QWidgetAction(QObject *)
MyQWidgetAction(QObject * parent) : QWidgetAction(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWidgetAction::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWidgetAction::eventFilter(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QWidget * createWidget(QWidget *)
  virtual QWidget * createWidget(QWidget * parent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createWidget", &handled, 1, (uint64_t)parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QWidget *)(irv);
      // Pointer Pointer QWidget *
    } else {
    return QWidgetAction::createWidget(parent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void deleteWidget(QWidget *)
  virtual void deleteWidget(QWidget * widget) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deleteWidget", &handled, 1, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidgetAction::deleteWidget(widget);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] QList<QWidget *> createdWidgets()
  virtual QList<QWidget *> createdWidgets() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createdWidgets", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QWidget *>){};}
    auto prv = (QList<QWidget *>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QWidget *>
    } else {
    return QWidgetAction::createdWidgets();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:69
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QWidgetAction5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QWidgetAction*)this_)->QWidgetAction::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:70
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QWidgetAction11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QWidgetAction*)this_)->QWidgetAction::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:71
// [8] QWidget * createWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QWidgetAction12createWidgetEP7QWidget(void *this_, QWidget * parent) {
  return (void*)((QWidgetAction*)this_)->QWidgetAction::createWidget(parent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:72
// [-2] void deleteWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QWidgetAction12deleteWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QWidgetAction*)this_)->QWidgetAction::deleteWidget(widget);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:73
// [-2] QList<QWidget *> createdWidgets()
extern "C" Q_DECL_EXPORT
QList<QWidget *>* C_ZNK13QWidgetAction14createdWidgetsEv(void *this_) {
  auto rv = ((QWidgetAction*)this_)->QWidgetAction::createdWidgets();
return new QList<QWidget *>(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QWidgetAction10metaObjectEv(void *this_) {
  return (void*)((QWidgetAction*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QWidgetAction11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QWidgetAction*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QWidgetAction11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QWidgetAction*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QWidgetAction2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWidgetAction::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QWidgetAction6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QWidgetAction::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:59
// [-2] void QWidgetAction(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QWidgetActionC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQWidgetAction*)(0);
  return  new MyQWidgetAction(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:60
// [-2] void ~QWidgetAction()
extern "C" Q_DECL_EXPORT
void C_ZN13QWidgetActionD2Ev(void *this_) {
  delete (QWidgetAction*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:62
// [-2] void setDefaultWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QWidgetAction16setDefaultWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QWidgetAction*)this_)->setDefaultWidget(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:63
// [8] QWidget * defaultWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QWidgetAction13defaultWidgetEv(void *this_) {
  return (void*)((QWidgetAction*)this_)->defaultWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:65
// [8] QWidget * requestWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QWidgetAction13requestWidgetEP7QWidget(void *this_, QWidget * parent) {
  return (void*)((QWidgetAction*)this_)->requestWidget(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:66
// [-2] void releaseWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QWidgetAction13releaseWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QWidgetAction*)this_)->releaseWidget(widget);
}

//  main block end
