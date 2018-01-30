//  header block begin
// /usr/include/qt/QtWidgets/qstackedwidget.h
#include <qstackedwidget.h>
#include <QtWidgets>

// QStackedWidget is pure virtual: false
// QStackedWidget has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:82
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN14QStackedWidget5eventEP6QEvent = 0;
extern "C" void set_callback_ZN14QStackedWidget5eventEP6QEvent(void*cbfn)
{ callback_ZN14QStackedWidget5eventEP6QEvent = cbfn; }

class MyQStackedWidget : public QStackedWidget {
public:
  virtual ~MyQStackedWidget() {}
// void QStackedWidget(class QWidget *)
MyQStackedWidget(QWidget * parent) : QStackedWidget(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    if (callback_ZN14QStackedWidget5eventEP6QEvent != 0) {
      // callback_ZN14QStackedWidget5eventEP6QEvent(e);
    }
    return QStackedWidget::event(e);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK14QStackedWidget10metaObjectEv(void *this_) {
  return (void*)((QStackedWidget*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:59
// [-2] void QStackedWidget(class QWidget *)
extern "C"
void* C_ZN14QStackedWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQStackedWidget*)(0);
  return  new MyQStackedWidget(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:60
// [-2] void ~QStackedWidget()
extern "C"
void C_ZN14QStackedWidgetD2Ev(void *this_) {
  delete (QStackedWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:62
// [4] int addWidget(class QWidget *)
extern "C"
int C_ZN14QStackedWidget9addWidgetEP7QWidget(void *this_, QWidget * w) {
  return (int)((QStackedWidget*)this_)->addWidget(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:63
// [4] int insertWidget(int, class QWidget *)
extern "C"
int C_ZN14QStackedWidget12insertWidgetEiP7QWidget(void *this_, int index, QWidget * w) {
  return (int)((QStackedWidget*)this_)->insertWidget(index, w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:64
// [-2] void removeWidget(class QWidget *)
extern "C"
void C_ZN14QStackedWidget12removeWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedWidget*)this_)->removeWidget(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:66
// [8] QWidget * currentWidget()
extern "C"
void* C_ZNK14QStackedWidget13currentWidgetEv(void *this_) {
  return (void*)((QStackedWidget*)this_)->currentWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:67
// [4] int currentIndex()
extern "C"
int C_ZNK14QStackedWidget12currentIndexEv(void *this_) {
  return (int)((QStackedWidget*)this_)->currentIndex();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:69
// [4] int indexOf(class QWidget *)
extern "C"
int C_ZNK14QStackedWidget7indexOfEP7QWidget(void *this_, QWidget * arg0) {
  return (int)((QStackedWidget*)this_)->indexOf(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:70
// [8] QWidget * widget(int)
extern "C"
void* C_ZNK14QStackedWidget6widgetEi(void *this_, int arg0) {
  return (void*)((QStackedWidget*)this_)->widget(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:71
// [4] int count()
extern "C"
int C_ZNK14QStackedWidget5countEv(void *this_) {
  return (int)((QStackedWidget*)this_)->count();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:74
// [-2] void setCurrentIndex(int)
extern "C"
void C_ZN14QStackedWidget15setCurrentIndexEi(void *this_, int index) {
  ((QStackedWidget*)this_)->setCurrentIndex(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:75
// [-2] void setCurrentWidget(class QWidget *)
extern "C"
void C_ZN14QStackedWidget16setCurrentWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedWidget*)this_)->setCurrentWidget(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:78
// [-2] void currentChanged(int)
extern "C"
void C_ZN14QStackedWidget14currentChangedEi(void *this_, int arg0) {
  ((QStackedWidget*)this_)->currentChanged(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:79
// [-2] void widgetRemoved(int)
extern "C"
void C_ZN14QStackedWidget13widgetRemovedEi(void *this_, int index) {
  ((QStackedWidget*)this_)->widgetRemoved(index);
}
//  main block end
