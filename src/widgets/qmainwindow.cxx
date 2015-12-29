// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qmainwindow.h
// dst-file: /src/widgets/qmainwindow.cxx
//

// header block begin =>
#include <qmainwindow.h>

extern "C" {

int QMainWindow_Class_Size()
{
  return sizeof(QMainWindow);
}

// QMainWindow(class QWidget *, Qt::WindowFlags)
QMainWindow* dector_ZN11QMainWindowC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QMainWindow) == 32, "tyszerr");
  QMainWindow* rthis = new QMainWindow(parent, flags);
  return rthis;
}

// ~QMainWindow()
void dedtor_ZN11QMainWindowD0Ev(QMainWindow* that)
{
  QMainWindow* rthis = (QMainWindow*)that;
  delete rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QMainWindow_SlotProxy here
class QMainWindow_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMainWindow_SlotProxy():QObject(){}

public slots:
  // toolButtonStyleChanged(Qt::ToolButtonStyle)
  void slot_proxy_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0);
public:
  void (*slot_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE)(void* rsfptr, Qt::ToolButtonStyle arg0) = NULL;
public slots:
  // iconSizeChanged(const class QSize &)
  void slot_proxy_func__ZN11QMainWindow15iconSizeChangedERK5QSize(const QSize & arg0);
public:
  void (*slot_func__ZN11QMainWindow15iconSizeChangedERK5QSize)(void* rsfptr, const QSize & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmainwindow.moc"

extern "C" {
  QMainWindow_SlotProxy* QMainWindow_SlotProxy_new()
  {
    return new QMainWindow_SlotProxy();
  }
};

void QMainWindow_SlotProxy::slot_proxy_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0) {
  if (this->slot_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE != NULL) {
    // do smth...
    this->slot_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(this->rsfptr, arg0);
  }
}
extern "C"
void* QMainWindow_SlotProxy_connect__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMainWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE = (decltype(that->slot_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE))ffifptr;
  QObject::connect((QMainWindow*)sender, SIGNAL(toolButtonStyleChanged(Qt::ToolButtonStyle)), that, SLOT(slot_proxy_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0)));
  return that;
}
extern "C"
void QMainWindow_SlotProxy_disconnect__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(QMainWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMainWindow_SlotProxy::slot_proxy_func__ZN11QMainWindow15iconSizeChangedERK5QSize(const QSize & arg0) {
  if (this->slot_func__ZN11QMainWindow15iconSizeChangedERK5QSize != NULL) {
    // do smth...
    this->slot_func__ZN11QMainWindow15iconSizeChangedERK5QSize(this->rsfptr, arg0);
  }
}
extern "C"
void* QMainWindow_SlotProxy_connect__ZN11QMainWindow15iconSizeChangedERK5QSize(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMainWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QMainWindow15iconSizeChangedERK5QSize = (decltype(that->slot_func__ZN11QMainWindow15iconSizeChangedERK5QSize))ffifptr;
  QObject::connect((QMainWindow*)sender, SIGNAL(iconSizeChanged(const class QSize &)), that, SLOT(slot_proxy_func__ZN11QMainWindow15iconSizeChangedERK5QSize(const QSize & arg0)));
  return that;
}
extern "C"
void QMainWindow_SlotProxy_disconnect__ZN11QMainWindow15iconSizeChangedERK5QSize(QMainWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

