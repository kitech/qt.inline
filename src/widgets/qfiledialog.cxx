// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtWidgets/qfiledialog.h
// dst-file: /src/widgets/qfiledialog.cxx
//

// header block begin =>
#include <qfiledialog.h>

extern "C" {

int QFileDialog_Class_Size()
{
  return sizeof(QFileDialog);
}

// ~QFileDialog()
void dedtor_ZN11QFileDialogD0Ev(QFileDialog* that)
{
  QFileDialog* rthis = (QFileDialog*)that;
  delete rthis;
}

// QFileDialog(class QWidget *, const class QString &, const class QString &, const class QString &)
QFileDialog* dector_ZN11QFileDialogC1EP7QWidgetRK7QStringS4_S4_(QWidget * parent, const QString & caption, const QString & directory, const QString & filter)
{
  // static_assert(sizeof(QFileDialog) == 32, "tyszerr");
  QFileDialog* rthis = new QFileDialog(parent, caption, directory, filter);
  return rthis;
}

// QFileDialog(class QWidget *, Qt::WindowFlags)
QFileDialog* dector_ZN11QFileDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QFileDialog) == 32, "tyszerr");
  QFileDialog* rthis = new QFileDialog(parent, f);
  return rthis;
}

  // proto:  void QFileDialog::setDirectory(const QDir & directory);
void _ZN11QFileDialog12setDirectoryERK4QDir(void *that, const QDir & directory)
{
  QFileDialog *cthat = (QFileDialog *)that;
   cthat->setDirectory(directory);
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

