// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qcolordialog.h
// dst-file: /src/widgets/qcolordialog.cxx
//

// header block begin =>
#include <qcolordialog.h>

extern "C" {

int QColorDialog_Class_Size()
{
  return sizeof(QColorDialog);
}

// QColorDialog(const class QColor &, class QWidget *)
QColorDialog* dector_ZN12QColorDialogC1ERK6QColorP7QWidget(const QColor & initial, QWidget * parent)
{
  // static_assert(sizeof(QColorDialog) == 32, "tyszerr");
  QColorDialog* rthis = new QColorDialog(initial, parent);
  return rthis;
}

// ~QColorDialog()
void dedtor_ZN12QColorDialogD0Ev(QColorDialog* that)
{
  QColorDialog* rthis = (QColorDialog*)that;
  delete rthis;
}

// QColorDialog(class QWidget *)
QColorDialog* dector_ZN12QColorDialogC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QColorDialog) == 32, "tyszerr");
  QColorDialog* rthis = new QColorDialog(parent);
  return rthis;
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
// QColorDialog_SlotProxy here
class QColorDialog_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QColorDialog_SlotProxy():QObject(){}

public slots:
  // currentColorChanged(const class QColor &)
  void slot_proxy_func__ZN12QColorDialog19currentColorChangedERK6QColor(const QColor & arg0);
public:
  void (*slot_func__ZN12QColorDialog19currentColorChangedERK6QColor)(void* rsfptr, const QColor & arg0) = NULL;
public slots:
  // colorSelected(const class QColor &)
  void slot_proxy_func__ZN12QColorDialog13colorSelectedERK6QColor(const QColor & arg0);
public:
  void (*slot_func__ZN12QColorDialog13colorSelectedERK6QColor)(void* rsfptr, const QColor & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcolordialog.moc"

extern "C" {
  QColorDialog_SlotProxy* QColorDialog_SlotProxy_new()
  {
    return new QColorDialog_SlotProxy();
  }
};

void QColorDialog_SlotProxy::slot_proxy_func__ZN12QColorDialog19currentColorChangedERK6QColor(const QColor & arg0) {
  if (this->slot_func__ZN12QColorDialog19currentColorChangedERK6QColor != NULL) {
    // do smth...
    this->slot_func__ZN12QColorDialog19currentColorChangedERK6QColor(this->rsfptr, arg0);
  }
}
extern "C"
void* QColorDialog_SlotProxy_connect__ZN12QColorDialog19currentColorChangedERK6QColor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QColorDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QColorDialog19currentColorChangedERK6QColor = (decltype(that->slot_func__ZN12QColorDialog19currentColorChangedERK6QColor))ffifptr;
  QObject::connect((QColorDialog*)sender, SIGNAL(currentColorChanged(const class QColor &)), that, SLOT(slot_proxy_func__ZN12QColorDialog19currentColorChangedERK6QColor(const QColor & arg0)));
  return that;
}
extern "C"
void QColorDialog_SlotProxy_disconnect__ZN12QColorDialog19currentColorChangedERK6QColor(QColorDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QColorDialog_SlotProxy::slot_proxy_func__ZN12QColorDialog13colorSelectedERK6QColor(const QColor & arg0) {
  if (this->slot_func__ZN12QColorDialog13colorSelectedERK6QColor != NULL) {
    // do smth...
    this->slot_func__ZN12QColorDialog13colorSelectedERK6QColor(this->rsfptr, arg0);
  }
}
extern "C"
void* QColorDialog_SlotProxy_connect__ZN12QColorDialog13colorSelectedERK6QColor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QColorDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QColorDialog13colorSelectedERK6QColor = (decltype(that->slot_func__ZN12QColorDialog13colorSelectedERK6QColor))ffifptr;
  QObject::connect((QColorDialog*)sender, SIGNAL(colorSelected(const class QColor &)), that, SLOT(slot_proxy_func__ZN12QColorDialog13colorSelectedERK6QColor(const QColor & arg0)));
  return that;
}
extern "C"
void QColorDialog_SlotProxy_disconnect__ZN12QColorDialog13colorSelectedERK6QColor(QColorDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

