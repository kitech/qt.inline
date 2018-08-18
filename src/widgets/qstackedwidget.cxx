//  header block begin
// /usr/include/qt/QtWidgets/qstackedwidget.h
#ifndef protected
#define protected public
#endif
#include <qstackedwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStackedWidget is pure virtual: false
// QStackedWidget has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStackedWidget : public QStackedWidget {
public:
  virtual ~MyQStackedWidget() {}
// void QStackedWidget(QWidget *)
MyQStackedWidget(QWidget * parent) : QStackedWidget(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QStackedWidget::event(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:82
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QStackedWidget5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QStackedWidget*)this_)->QStackedWidget::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedWidget10metaObjectEv(void *this_) {
  return (void*)((QStackedWidget*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:59
// [-2] void QStackedWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQStackedWidget*)(0);
  return  new MyQStackedWidget(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:60
// [-2] void ~QStackedWidget()
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidgetD2Ev(void *this_) {
  delete (QStackedWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:62
// [4] int addWidget(QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZN14QStackedWidget9addWidgetEP7QWidget(void *this_, QWidget * w) {
  return (int)((QStackedWidget*)this_)->addWidget(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:63
// [4] int insertWidget(int, QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZN14QStackedWidget12insertWidgetEiP7QWidget(void *this_, int index, QWidget * w) {
  return (int)((QStackedWidget*)this_)->insertWidget(index, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:64
// [-2] void removeWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidget12removeWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedWidget*)this_)->removeWidget(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:66
// [8] QWidget * currentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedWidget13currentWidgetEv(void *this_) {
  return (void*)((QStackedWidget*)this_)->currentWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:67
// [4] int currentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK14QStackedWidget12currentIndexEv(void *this_) {
  return (int)((QStackedWidget*)this_)->currentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:69
// [4] int indexOf(QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK14QStackedWidget7indexOfEP7QWidget(void *this_, QWidget * arg0) {
  return (int)((QStackedWidget*)this_)->indexOf(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:70
// [8] QWidget * widget(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedWidget6widgetEi(void *this_, int arg0) {
  return (void*)((QStackedWidget*)this_)->widget(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:71
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK14QStackedWidget5countEv(void *this_) {
  return (int)((QStackedWidget*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:74
// [-2] void setCurrentIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidget15setCurrentIndexEi(void *this_, int index) {
  ((QStackedWidget*)this_)->setCurrentIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:75
// [-2] void setCurrentWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidget16setCurrentWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedWidget*)this_)->setCurrentWidget(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:78
// [-2] void currentChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidget14currentChangedEi(void *this_, int arg0) {
  ((QStackedWidget*)this_)->currentChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:79
// [-2] void widgetRemoved(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidget13widgetRemovedEi(void *this_, int index) {
  ((QStackedWidget*)this_)->widgetRemoved(index);
}

//  main block end
