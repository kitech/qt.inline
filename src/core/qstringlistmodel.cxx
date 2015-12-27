// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qstringlistmodel.h
// dst-file: /src/core/qstringlistmodel.cxx
//

// header block begin =>
#include <qstringlistmodel.h>

extern "C" {

int QStringListModel_Class_Size()
{
  return sizeof(QStringListModel);
}

// QStringListModel(const class QStringList &, class QObject *)
QStringListModel* dector_ZN16QStringListModelC1ERK11QStringListP7QObject(const QStringList & strings, QObject * parent)
{
  // static_assert(sizeof(QStringListModel) == 32, "tyszerr");
  QStringListModel* rthis = new QStringListModel(strings, parent);
  return rthis;
}

// QStringListModel(class QObject *)
QStringListModel* dector_ZN16QStringListModelC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QStringListModel) == 32, "tyszerr");
  QStringListModel* rthis = new QStringListModel(parent);
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
// QStringListModel_SlotProxy here
class QStringListModel_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QStringListModel_SlotProxy():QObject(){}

};
#include "src/core/qstringlistmodel.moc"

extern "C" {
  QStringListModel_SlotProxy* QStringListModel_SlotProxy_new()
  {
    return new QStringListModel_SlotProxy();
  }
};

// <= body block end

