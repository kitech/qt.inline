//  header block begin
// /usr/include/qt/QtWidgets/qwidgetaction.h
#include <qwidgetaction.h>
#include <QtWidgets>

// QWidgetAction is pure virtual: false
// QWidgetAction has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:69
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN13QWidgetAction5eventEP6QEvent = 0;
extern "C" void set_callback_ZN13QWidgetAction5eventEP6QEvent(void*cbfn)
{ callback_ZN13QWidgetAction5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:70
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
void* callback_ZN13QWidgetAction11eventFilterEP7QObjectP6QEvent = 0;
extern "C" void set_callback_ZN13QWidgetAction11eventFilterEP7QObjectP6QEvent(void*cbfn)
{ callback_ZN13QWidgetAction11eventFilterEP7QObjectP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:71
// [8] QWidget * createWidget(class QWidget *)
extern "C"
void* callback_ZN13QWidgetAction12createWidgetEP7QWidget = 0;
extern "C" void set_callback_ZN13QWidgetAction12createWidgetEP7QWidget(void*cbfn)
{ callback_ZN13QWidgetAction12createWidgetEP7QWidget = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:72
// [-2] void deleteWidget(class QWidget *)
extern "C"
void* callback_ZN13QWidgetAction12deleteWidgetEP7QWidget = 0;
extern "C" void set_callback_ZN13QWidgetAction12deleteWidgetEP7QWidget(void*cbfn)
{ callback_ZN13QWidgetAction12deleteWidgetEP7QWidget = cbfn; }

class MyQWidgetAction : public QWidgetAction {
public:
  virtual ~MyQWidgetAction() {}
// void QWidgetAction(class QObject *)
MyQWidgetAction(QObject * parent) : QWidgetAction(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    if (callback_ZN13QWidgetAction5eventEP6QEvent != 0) {
      // callback_ZN13QWidgetAction5eventEP6QEvent(arg0);
    }
    return QWidgetAction::event(arg0);
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1) {
    if (callback_ZN13QWidgetAction11eventFilterEP7QObjectP6QEvent != 0) {
      // callback_ZN13QWidgetAction11eventFilterEP7QObjectP6QEvent(arg0, arg1);
    }
    return QWidgetAction::eventFilter(arg0, arg1);
  }
// QWidget * createWidget(class QWidget *)
  virtual QWidget * createWidget(QWidget * parent) {
    if (callback_ZN13QWidgetAction12createWidgetEP7QWidget != 0) {
      // callback_ZN13QWidgetAction12createWidgetEP7QWidget(parent);
    }
    return QWidgetAction::createWidget(parent);
  }
// void deleteWidget(class QWidget *)
  virtual void deleteWidget(QWidget * widget) {
    if (callback_ZN13QWidgetAction12deleteWidgetEP7QWidget != 0) {
      // callback_ZN13QWidgetAction12deleteWidgetEP7QWidget(widget);
    }
    QWidgetAction::deleteWidget(widget);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QWidgetAction10metaObjectEv(void *this_) {
  return (void*)((QWidgetAction*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:59
// [-2] void QWidgetAction(class QObject *)
extern "C"
void* C_ZN13QWidgetActionC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQWidgetAction*)(0);
  return  new MyQWidgetAction(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:60
// [-2] void ~QWidgetAction()
extern "C"
void C_ZN13QWidgetActionD2Ev(void *this_) {
  delete (QWidgetAction*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:62
// [-2] void setDefaultWidget(class QWidget *)
extern "C"
void C_ZN13QWidgetAction16setDefaultWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QWidgetAction*)this_)->setDefaultWidget(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:63
// [8] QWidget * defaultWidget()
extern "C"
void* C_ZNK13QWidgetAction13defaultWidgetEv(void *this_) {
  return (void*)((QWidgetAction*)this_)->defaultWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:65
// [8] QWidget * requestWidget(class QWidget *)
extern "C"
void* C_ZN13QWidgetAction13requestWidgetEP7QWidget(void *this_, QWidget * parent) {
  return (void*)((QWidgetAction*)this_)->requestWidget(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:66
// [-2] void releaseWidget(class QWidget *)
extern "C"
void C_ZN13QWidgetAction13releaseWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QWidgetAction*)this_)->releaseWidget(widget);
}
//  main block end
