// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qsystemtrayicon.h
// dst-file: /src/widgets/qsystemtrayicon.cxx
//

// header block begin =>
#include <qsystemtrayicon.h>

extern "C" {

int QSystemTrayIcon_Class_Size()
{
  return sizeof(QSystemTrayIcon);
}

// ~QSystemTrayIcon()
void dedtor_ZN15QSystemTrayIconD0Ev(QSystemTrayIcon* that)
{
  QSystemTrayIcon* rthis = (QSystemTrayIcon*)that;
  delete rthis;
}

// QSystemTrayIcon(const class QIcon &, class QObject *)
QSystemTrayIcon* dector_ZN15QSystemTrayIconC1ERK5QIconP7QObject(const QIcon & icon, QObject * parent)
{
  // static_assert(sizeof(QSystemTrayIcon) == 32, "tyszerr");
  QSystemTrayIcon* rthis = new QSystemTrayIcon(icon, parent);
  return rthis;
}

// QSystemTrayIcon(class QObject *)
QSystemTrayIcon* dector_ZN15QSystemTrayIconC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QSystemTrayIcon) == 32, "tyszerr");
  QSystemTrayIcon* rthis = new QSystemTrayIcon(parent);
  return rthis;
}

  // proto:  void QSystemTrayIcon::hide();
void demth_ZN15QSystemTrayIcon4hideEv(void *that)
{
  QSystemTrayIcon *cthat = (QSystemTrayIcon *)that;
   cthat->hide();
}

  // proto:  void QSystemTrayIcon::show();
void demth_ZN15QSystemTrayIcon4showEv(void *that)
{
  QSystemTrayIcon *cthat = (QSystemTrayIcon *)that;
   cthat->show();
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

