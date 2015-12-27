// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qfontcombobox.h
// dst-file: /src/widgets/qfontcombobox.cxx
//

// header block begin =>
#include <qfontcombobox.h>

extern "C" {

int QFontComboBox_Class_Size()
{
  return sizeof(QFontComboBox);
}

// ~QFontComboBox()
void dedtor_ZN13QFontComboBoxD0Ev(QFontComboBox* that)
{
  QFontComboBox* rthis = (QFontComboBox*)that;
  delete rthis;
}

// QFontComboBox(class QWidget *)
QFontComboBox* dector_ZN13QFontComboBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QFontComboBox) == 32, "tyszerr");
  QFontComboBox* rthis = new QFontComboBox(parent);
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
// QFontComboBox_SlotProxy here
class QFontComboBox_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QFontComboBox_SlotProxy():QObject(){}

public slots:
  // currentFontChanged(const class QFont &)
  void slot_proxy_func__ZN13QFontComboBox18currentFontChangedERK5QFont(const QFont & arg0);
public:
  void (*slot_func__ZN13QFontComboBox18currentFontChangedERK5QFont)(const QFont & arg0) = NULL;
};
#include "src/widgets/qfontcombobox.moc"

extern "C" {
  QFontComboBox_SlotProxy* QFontComboBox_SlotProxy_new()
  {
    return new QFontComboBox_SlotProxy();
  }
};

void QFontComboBox_SlotProxy::slot_proxy_func__ZN13QFontComboBox18currentFontChangedERK5QFont(const QFont & arg0) {
  if (this->slot_func__ZN13QFontComboBox18currentFontChangedERK5QFont != NULL) {
    // do smth...
    this->slot_func__ZN13QFontComboBox18currentFontChangedERK5QFont(arg0);
  }
}
extern "C"
void* QFontComboBox_SlotProxy_connect__ZN13QFontComboBox18currentFontChangedERK5QFont(QObject* sender, void* fptr){
  auto that = new QFontComboBox_SlotProxy();
  that->slot_func__ZN13QFontComboBox18currentFontChangedERK5QFont = (decltype(that->slot_func__ZN13QFontComboBox18currentFontChangedERK5QFont))fptr;
  QObject::connect((QFontComboBox*)sender, SIGNAL(currentFontChanged(const class QFont &)), that, SLOT(slot_proxy_func__ZN13QFontComboBox18currentFontChangedERK5QFont(const QFont & arg0)));
  return that;
}
extern "C"
void QFontComboBox_SlotProxy_disconnect__ZN13QFontComboBox18currentFontChangedERK5QFont(QFontComboBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

