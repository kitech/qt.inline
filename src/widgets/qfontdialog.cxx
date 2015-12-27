// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qfontdialog.h
// dst-file: /src/widgets/qfontdialog.cxx
//

// header block begin =>
#include <qfontdialog.h>

extern "C" {

int QFontDialog_Class_Size()
{
  return sizeof(QFontDialog);
}

// QFontDialog(class QWidget *)
QFontDialog* dector_ZN11QFontDialogC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QFontDialog) == 32, "tyszerr");
  QFontDialog* rthis = new QFontDialog(parent);
  return rthis;
}

// QFontDialog(const class QFont &, class QWidget *)
QFontDialog* dector_ZN11QFontDialogC1ERK5QFontP7QWidget(const QFont & initial, QWidget * parent)
{
  // static_assert(sizeof(QFontDialog) == 32, "tyszerr");
  QFontDialog* rthis = new QFontDialog(initial, parent);
  return rthis;
}

// ~QFontDialog()
void dedtor_ZN11QFontDialogD0Ev(QFontDialog* that)
{
  QFontDialog* rthis = (QFontDialog*)that;
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
// QFontDialog_SlotProxy here
class QFontDialog_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QFontDialog_SlotProxy():QObject(){}

public slots:
  // currentFontChanged(const class QFont &)
  void slot_proxy_func__ZN11QFontDialog18currentFontChangedERK5QFont(const QFont & arg0);
public:
  void (*slot_func__ZN11QFontDialog18currentFontChangedERK5QFont)(const QFont & arg0) = NULL;
public slots:
  // fontSelected(const class QFont &)
  void slot_proxy_func__ZN11QFontDialog12fontSelectedERK5QFont(const QFont & arg0);
public:
  void (*slot_func__ZN11QFontDialog12fontSelectedERK5QFont)(const QFont & arg0) = NULL;
};
#include "src/widgets/qfontdialog.moc"

extern "C" {
  QFontDialog_SlotProxy* QFontDialog_SlotProxy_new()
  {
    return new QFontDialog_SlotProxy();
  }
};

void QFontDialog_SlotProxy::slot_proxy_func__ZN11QFontDialog18currentFontChangedERK5QFont(const QFont & arg0) {
  if (this->slot_func__ZN11QFontDialog18currentFontChangedERK5QFont != NULL) {
    // do smth...
    this->slot_func__ZN11QFontDialog18currentFontChangedERK5QFont(arg0);
  }
}
extern "C"
void* QFontDialog_SlotProxy_connect__ZN11QFontDialog18currentFontChangedERK5QFont(QObject* sender, void* fptr){
  auto that = new QFontDialog_SlotProxy();
  that->slot_func__ZN11QFontDialog18currentFontChangedERK5QFont = (decltype(that->slot_func__ZN11QFontDialog18currentFontChangedERK5QFont))fptr;
  QObject::connect((QFontDialog*)sender, SIGNAL(currentFontChanged(const class QFont &)), that, SLOT(slot_proxy_func__ZN11QFontDialog18currentFontChangedERK5QFont(const QFont & arg0)));
  return that;
}
extern "C"
void QFontDialog_SlotProxy_disconnect__ZN11QFontDialog18currentFontChangedERK5QFont(QFontDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFontDialog_SlotProxy::slot_proxy_func__ZN11QFontDialog12fontSelectedERK5QFont(const QFont & arg0) {
  if (this->slot_func__ZN11QFontDialog12fontSelectedERK5QFont != NULL) {
    // do smth...
    this->slot_func__ZN11QFontDialog12fontSelectedERK5QFont(arg0);
  }
}
extern "C"
void* QFontDialog_SlotProxy_connect__ZN11QFontDialog12fontSelectedERK5QFont(QObject* sender, void* fptr){
  auto that = new QFontDialog_SlotProxy();
  that->slot_func__ZN11QFontDialog12fontSelectedERK5QFont = (decltype(that->slot_func__ZN11QFontDialog12fontSelectedERK5QFont))fptr;
  QObject::connect((QFontDialog*)sender, SIGNAL(fontSelected(const class QFont &)), that, SLOT(slot_proxy_func__ZN11QFontDialog12fontSelectedERK5QFont(const QFont & arg0)));
  return that;
}
extern "C"
void QFontDialog_SlotProxy_disconnect__ZN11QFontDialog12fontSelectedERK5QFont(QFontDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

