//  header block begin
// /usr/include/qt/QtWidgets/qdesktopwidget.h
#include <qdesktopwidget.h>
#include <QtWidgets>

// QDesktopWidget is pure virtual: false
// QDesktopWidget has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:90
// [-2] void resizeEvent(class QResizeEvent *)
extern "C"
void* callback_ZN14QDesktopWidget11resizeEventEP12QResizeEvent = 0;
extern "C" void set_callback_ZN14QDesktopWidget11resizeEventEP12QResizeEvent(void*cbfn)
{ callback_ZN14QDesktopWidget11resizeEventEP12QResizeEvent = cbfn; }

class MyQDesktopWidget : public QDesktopWidget {
public:
  virtual ~MyQDesktopWidget() {}
// void QDesktopWidget()
MyQDesktopWidget() : QDesktopWidget() {}
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e) {
    if (callback_ZN14QDesktopWidget11resizeEventEP12QResizeEvent != 0) {
      // callback_ZN14QDesktopWidget11resizeEventEP12QResizeEvent(e);
    }
    QDesktopWidget::resizeEvent(e);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK14QDesktopWidget10metaObjectEv(void *this_) {
  return (void*)((QDesktopWidget*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:59
// [-2] void QDesktopWidget()
extern "C"
void* C_ZN14QDesktopWidgetC2Ev() {
  auto _nilp = (MyQDesktopWidget*)(0);
  return  new MyQDesktopWidget();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:60
// [-2] void ~QDesktopWidget()
extern "C"
void C_ZN14QDesktopWidgetD2Ev(void *this_) {
  delete (QDesktopWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:62
// [1] bool isVirtualDesktop()
extern "C"
bool C_ZNK14QDesktopWidget16isVirtualDesktopEv(void *this_) {
  return (bool)((QDesktopWidget*)this_)->isVirtualDesktop();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:64
// [4] int numScreens()
extern "C"
int C_ZNK14QDesktopWidget10numScreensEv(void *this_) {
  return (int)((QDesktopWidget*)this_)->numScreens();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:65
// [4] int screenCount()
extern "C"
int C_ZNK14QDesktopWidget11screenCountEv(void *this_) {
  return (int)((QDesktopWidget*)this_)->screenCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:66
// [4] int primaryScreen()
extern "C"
int C_ZNK14QDesktopWidget13primaryScreenEv(void *this_) {
  return (int)((QDesktopWidget*)this_)->primaryScreen();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:68
// [4] int screenNumber(const class QWidget *)
extern "C"
int C_ZNK14QDesktopWidget12screenNumberEPK7QWidget(void *this_, const QWidget * widget) {
  return (int)((QDesktopWidget*)this_)->screenNumber(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:69
// [4] int screenNumber(const class QPoint &)
extern "C"
int C_ZNK14QDesktopWidget12screenNumberERK6QPoint(void *this_, const QPoint & arg0) {
  return (int)((QDesktopWidget*)this_)->screenNumber(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:71
// [8] QWidget * screen(int)
extern "C"
void* C_ZN14QDesktopWidget6screenEi(void *this_, int screen) {
  return (void*)((QDesktopWidget*)this_)->screen(screen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:73
// [16] const QRect screenGeometry(int)
extern "C"
void* C_ZNK14QDesktopWidget14screenGeometryEi(void *this_, int screen) {
  auto rv = ((QDesktopWidget*)this_)->screenGeometry(screen);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:74
// [16] const QRect screenGeometry(const class QWidget *)
extern "C"
void* C_ZNK14QDesktopWidget14screenGeometryEPK7QWidget(void *this_, const QWidget * widget) {
  auto rv = ((QDesktopWidget*)this_)->screenGeometry(widget);
return new QRect(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:75
// [16] const QRect screenGeometry(const class QPoint &)
extern "C"
void* C_ZNK14QDesktopWidget14screenGeometryERK6QPoint(void *this_, const QPoint & point) {
  auto rv = ((QDesktopWidget*)this_)->screenGeometry(point);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:78
// [16] const QRect availableGeometry(int)
extern "C"
void* C_ZNK14QDesktopWidget17availableGeometryEi(void *this_, int screen) {
  auto rv = ((QDesktopWidget*)this_)->availableGeometry(screen);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:79
// [16] const QRect availableGeometry(const class QWidget *)
extern "C"
void* C_ZNK14QDesktopWidget17availableGeometryEPK7QWidget(void *this_, const QWidget * widget) {
  auto rv = ((QDesktopWidget*)this_)->availableGeometry(widget);
return new QRect(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:80
// [16] const QRect availableGeometry(const class QPoint &)
extern "C"
void* C_ZNK14QDesktopWidget17availableGeometryERK6QPoint(void *this_, const QPoint & point) {
  auto rv = ((QDesktopWidget*)this_)->availableGeometry(point);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:84
// [-2] void resized(int)
extern "C"
void C_ZN14QDesktopWidget7resizedEi(void *this_, int arg0) {
  ((QDesktopWidget*)this_)->resized(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:85
// [-2] void workAreaResized(int)
extern "C"
void C_ZN14QDesktopWidget15workAreaResizedEi(void *this_, int arg0) {
  ((QDesktopWidget*)this_)->workAreaResized(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:86
// [-2] void screenCountChanged(int)
extern "C"
void C_ZN14QDesktopWidget18screenCountChangedEi(void *this_, int arg0) {
  ((QDesktopWidget*)this_)->screenCountChanged(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdesktopwidget.h:87
// [-2] void primaryScreenChanged()
extern "C"
void C_ZN14QDesktopWidget20primaryScreenChangedEv(void *this_) {
  ((QDesktopWidget*)this_)->primaryScreenChanged();
}
//  main block end
