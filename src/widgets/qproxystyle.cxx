// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qproxystyle.h
// dst-file: /src/widgets/qproxystyle.cxx
//

// header block begin =>
#include <qproxystyle.h>

extern "C" {

int QProxyStyle_Class_Size()
{
  return sizeof(QProxyStyle);
}

// QProxyStyle(const class QString &)
QProxyStyle* dector_ZN11QProxyStyleC1ERK7QString(const QString & key)
{
  // static_assert(sizeof(QProxyStyle) == 32, "tyszerr");
  QProxyStyle* rthis = new QProxyStyle(key);
  return rthis;
}

// ~QProxyStyle()
void dedtor_ZN11QProxyStyleD0Ev(QProxyStyle* that)
{
  QProxyStyle* rthis = (QProxyStyle*)that;
  delete rthis;
}

// QProxyStyle(class QStyle *)
QProxyStyle* dector_ZN11QProxyStyleC1EP6QStyle(QStyle * style)
{
  // static_assert(sizeof(QProxyStyle) == 32, "tyszerr");
  QProxyStyle* rthis = new QProxyStyle(style);
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
// QProxyStyle_SlotProxy here
class QProxyStyle_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QProxyStyle_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qproxystyle.moc"

extern "C" {
  QProxyStyle_SlotProxy* QProxyStyle_SlotProxy_new()
  {
    return new QProxyStyle_SlotProxy();
  }
};

// <= body block end

