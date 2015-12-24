// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtWidgets/qmessagebox.h
// dst-file: /src/widgets/qmessagebox.cxx
//

// header block begin =>
#include <qmessagebox.h>

extern "C" {

  // proto: static int QMessageBox::question(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
int _ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(void *that, QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)

{
  QMessageBox *cthat = (QMessageBox *)that;
  return cthat->question(parent, title, text, button0, button1);
}

  // proto: static int QMessageBox::warning(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
int _ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(void *that, QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)

{
  QMessageBox *cthat = (QMessageBox *)that;
  return cthat->warning(parent, title, text, button0, button1);
}

  // proto: static int QMessageBox::critical(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
int _ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(void *that, QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)

{
  QMessageBox *cthat = (QMessageBox *)that;
  return cthat->critical(parent, title, text, button0, button1);
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

