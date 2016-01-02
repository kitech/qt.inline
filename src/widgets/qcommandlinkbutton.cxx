// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qcommandlinkbutton.h
// dst-file: /src/widgets/qcommandlinkbutton.cxx
//

// header block begin =>
#include <qcommandlinkbutton.h>

extern "C" {

int QCommandLinkButton_Class_Size()
{
  return sizeof(QCommandLinkButton);
}

// QCommandLinkButton(const class QString &, const class QString &, class QWidget *)
QCommandLinkButton* dector_ZN18QCommandLinkButtonC1ERK7QStringS2_P7QWidget(const QString & text, const QString & description, QWidget * parent)
{
  // static_assert(sizeof(QCommandLinkButton) == 32, "tyszerr");
  QCommandLinkButton* rthis = new QCommandLinkButton(text, description, parent);
  return rthis;
}

// ~QCommandLinkButton()
void dedtor_ZN18QCommandLinkButtonD0Ev(QCommandLinkButton* that)
{
  QCommandLinkButton* rthis = (QCommandLinkButton*)that;
  delete rthis;
}

// QCommandLinkButton(class QWidget *)
QCommandLinkButton* dector_ZN18QCommandLinkButtonC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QCommandLinkButton) == 32, "tyszerr");
  QCommandLinkButton* rthis = new QCommandLinkButton(parent);
  return rthis;
}

// QCommandLinkButton(const class QString &, class QWidget *)
QCommandLinkButton* dector_ZN18QCommandLinkButtonC1ERK7QStringP7QWidget(const QString & text, QWidget * parent)
{
  // static_assert(sizeof(QCommandLinkButton) == 32, "tyszerr");
  QCommandLinkButton* rthis = new QCommandLinkButton(text, parent);
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
// QCommandLinkButton_SlotProxy here
class QCommandLinkButton_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCommandLinkButton_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qcommandlinkbutton.moc"

extern "C" {
  QCommandLinkButton_SlotProxy* QCommandLinkButton_SlotProxy_new()
  {
    return new QCommandLinkButton_SlotProxy();
  }
};

// <= body block end

