//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qwidgetaction.h
#ifndef protected
#define protected public
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
// void QWidgetAction(class QObject *)
MyQWidgetAction(QObject * parent) : QWidgetAction(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QWidgetAction::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QWidgetAction::eventFilter(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QWidget * createWidget(class QWidget *)
  virtual QWidget * createWidget(QWidget * parent) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"createWidget", &handled, 1, (uint64_t)parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QWidget *)(irv);
      // PointerPointerQWidget *
    } else {
    return QWidgetAction::createWidget(parent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void deleteWidget(class QWidget *)
  virtual void deleteWidget(QWidget * widget) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"deleteWidget", &handled, 1, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QWidgetAction::deleteWidget(widget);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:69
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QWidgetAction5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QWidgetAction*)this_)->QWidgetAction::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:70
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QWidgetAction11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QWidgetAction*)this_)->QWidgetAction::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:71
// [8] QWidget * createWidget(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QWidgetAction12createWidgetEP7QWidget(void *this_, QWidget * parent) {
  return (void*)((QWidgetAction*)this_)->QWidgetAction::createWidget(parent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:72
// [-2] void deleteWidget(class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QWidgetAction12deleteWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QWidgetAction*)this_)->QWidgetAction::deleteWidget(widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QWidgetAction10metaObjectEv(void *this_) {
  return (void*)((QWidgetAction*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:59
// [-2] void QWidgetAction(class QObject *)
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
// [-2] void setDefaultWidget(class QWidget *)
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
// [8] QWidget * requestWidget(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QWidgetAction13requestWidgetEP7QWidget(void *this_, QWidget * parent) {
  return (void*)((QWidgetAction*)this_)->requestWidget(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:66
// [-2] void releaseWidget(class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QWidgetAction13releaseWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QWidgetAction*)this_)->releaseWidget(widget);
}

//  main block end
