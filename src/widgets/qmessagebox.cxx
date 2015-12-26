// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtWidgets/qmessagebox.h
// dst-file: /src/widgets/qmessagebox.cxx
//

// header block begin =>
#include <qmessagebox.h>

extern "C" {

int QMessageBox_Class_Size()
{
  return sizeof(QMessageBox);
}

// ~QMessageBox()
void dedtor_ZN11QMessageBoxD0Ev(QMessageBox* that)
{
  QMessageBox* rthis = (QMessageBox*)that;
  delete rthis;
}

// QMessageBox(class QWidget *)
QMessageBox* dector_ZN11QMessageBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QMessageBox) == 32, "tyszerr");
  QMessageBox* rthis = new QMessageBox(parent);
  return rthis;
}

// QMessageBox(const class QString &, const class QString &, enum QMessageBox::Icon, int, int, int, class QWidget *, Qt::WindowFlags)
QMessageBox* dector_ZN11QMessageBoxC1ERK7QStringS2_NS_4IconEiiiP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & title, const QString & text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QMessageBox) == 32, "tyszerr");
  QMessageBox* rthis = new QMessageBox(title, text, icon, button0, button1, button2, parent, f);
  return rthis;
}

// QMessageBox(enum QMessageBox::Icon, const class QString &, const class QString &, StandardButtons, class QWidget *, Qt::WindowFlags)
QMessageBox* dector_ZN11QMessageBoxC1ENS_4IconERK7QStringS3_6QFlagsINS_14StandardButtonEEP7QWidgetS4_IN2Qt10WindowTypeEE(QMessageBox::Icon icon, const QString & title, const QString & text, QMessageBox::StandardButton buttons, QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QMessageBox) == 32, "tyszerr");
  QMessageBox* rthis = new QMessageBox(icon, title, text, buttons, parent, flags);
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
// <= body block end

