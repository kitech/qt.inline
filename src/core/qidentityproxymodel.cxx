// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qidentityproxymodel.h
// dst-file: /src/core/qidentityproxymodel.cxx
//

// header block begin =>
#include <qidentityproxymodel.h>

extern "C" {

int QIdentityProxyModel_Class_Size()
{
  return sizeof(QIdentityProxyModel);
}

// ~QIdentityProxyModel()
void dedtor_ZN19QIdentityProxyModelD0Ev(QIdentityProxyModel* that)
{
  QIdentityProxyModel* rthis = (QIdentityProxyModel*)that;
  delete rthis;
}

// QIdentityProxyModel(class QObject *)
QIdentityProxyModel* dector_ZN19QIdentityProxyModelC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QIdentityProxyModel) == 32, "tyszerr");
  QIdentityProxyModel* rthis = new QIdentityProxyModel(parent);
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
// QIdentityProxyModel_SlotProxy here
class QIdentityProxyModel_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QIdentityProxyModel_SlotProxy():QObject(){}

};
#include "src/core/qidentityproxymodel.moc"

extern "C" {
  QIdentityProxyModel_SlotProxy* QIdentityProxyModel_SlotProxy_new()
  {
    return new QIdentityProxyModel_SlotProxy();
  }
};

// <= body block end

