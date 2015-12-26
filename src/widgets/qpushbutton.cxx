// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qpushbutton.h
// dst-file: /src/widgets/qpushbutton.cxx
//

// header block begin =>
#include <qpushbutton.h>

extern "C" {

int QPushButton_Class_Size()
{
  return sizeof(QPushButton);
}

// ~QPushButton()
void dedtor_ZN11QPushButtonD0Ev(QPushButton* that)
{
  QPushButton* rthis = (QPushButton*)that;
  delete rthis;
}

// QPushButton(const class QIcon &, const class QString &, class QWidget *)
QPushButton* dector_ZN11QPushButtonC1ERK5QIconRK7QStringP7QWidget(const QIcon & icon, const QString & text, QWidget * parent)
{
  // static_assert(sizeof(QPushButton) == 32, "tyszerr");
  QPushButton* rthis = new QPushButton(icon, text, parent);
  return rthis;
}

// QPushButton(class QWidget *)
QPushButton* dector_ZN11QPushButtonC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QPushButton) == 32, "tyszerr");
  QPushButton* rthis = new QPushButton(parent);
  return rthis;
}

// QPushButton(const class QString &, class QWidget *)
QPushButton* dector_ZN11QPushButtonC1ERK7QStringP7QWidget(const QString & text, QWidget * parent)
{
  // static_assert(sizeof(QPushButton) == 32, "tyszerr");
  QPushButton* rthis = new QPushButton(text, parent);
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

