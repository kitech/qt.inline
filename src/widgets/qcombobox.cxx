// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtWidgets/qcombobox.h
// dst-file: /src/widgets/qcombobox.cxx
//

// header block begin =>
#include <qcombobox.h>

extern "C" {

int QComboBox_Class_Size()
{
  return sizeof(QComboBox);
}

// QComboBox(class QWidget *)
QComboBox* dector_ZN9QComboBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QComboBox) == 32, "tyszerr");
  QComboBox* rthis = new QComboBox(parent);
  return rthis;
}

// ~QComboBox()
void dedtor_ZN9QComboBoxD0Ev(QComboBox* that)
{
  QComboBox* rthis = (QComboBox*)that;
  delete rthis;
}

  // proto:  void QComboBox::addItem(const QIcon & icon, const QString & text, const QVariant & userData);
void _ZN9QComboBox7addItemERK5QIconRK7QStringRK8QVariant(void *that, const QIcon & icon, const QString & text, const QVariant & userData)
{
  QComboBox *cthat = (QComboBox *)that;
   cthat->addItem(icon, text, userData);
}

  // proto:  void QComboBox::addItem(const QString & text, const QVariant & userData);
void _ZN9QComboBox7addItemERK7QStringRK8QVariant(void *that, const QString & text, const QVariant & userData)
{
  QComboBox *cthat = (QComboBox *)that;
   cthat->addItem(text, userData);
}

  // proto:  void QComboBox::insertItem(int index, const QString & text, const QVariant & userData);
void _ZN9QComboBox10insertItemEiRK7QStringRK8QVariant(void *that, int index, const QString & text, const QVariant & userData)
{
  QComboBox *cthat = (QComboBox *)that;
   cthat->insertItem(index, text, userData);
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
// <= body block end

