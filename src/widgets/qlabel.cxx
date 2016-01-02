// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qlabel.h
// dst-file: /src/widgets/qlabel.cxx
//

// header block begin =>
#include <qlabel.h>

extern "C" {

int QLabel_Class_Size()
{
  return sizeof(QLabel);
}

// QLabel(const class QString &, class QWidget *, Qt::WindowFlags)
QLabel* dector_ZN6QLabelC1ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & text, QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QLabel) == 32, "tyszerr");
  QLabel* rthis = new QLabel(text, parent, f);
  return rthis;
}

// ~QLabel()
void dedtor_ZN6QLabelD0Ev(QLabel* that)
{
  QLabel* rthis = (QLabel*)that;
  delete rthis;
}

// QLabel(class QWidget *, Qt::WindowFlags)
QLabel* dector_ZN6QLabelC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QLabel) == 32, "tyszerr");
  QLabel* rthis = new QLabel(parent, f);
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
// QLabel_SlotProxy here
class QLabel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLabel_SlotProxy():QObject(){}

public slots:
  // linkActivated(const class QString &)
  void slot_proxy_func__ZN6QLabel13linkActivatedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN6QLabel13linkActivatedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // linkHovered(const class QString &)
  void slot_proxy_func__ZN6QLabel11linkHoveredERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN6QLabel11linkHoveredERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qlabel.moc"

extern "C" {
  QLabel_SlotProxy* QLabel_SlotProxy_new()
  {
    return new QLabel_SlotProxy();
  }
};

void QLabel_SlotProxy::slot_proxy_func__ZN6QLabel13linkActivatedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN6QLabel13linkActivatedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN6QLabel13linkActivatedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QLabel_SlotProxy_connect__ZN6QLabel13linkActivatedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLabel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QLabel13linkActivatedERK7QString = (decltype(that->slot_func__ZN6QLabel13linkActivatedERK7QString))ffifptr;
  QObject::connect((QLabel*)sender, SIGNAL(linkActivated(const class QString &)), that, SLOT(slot_proxy_func__ZN6QLabel13linkActivatedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QLabel_SlotProxy_disconnect__ZN6QLabel13linkActivatedERK7QString(QLabel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLabel_SlotProxy::slot_proxy_func__ZN6QLabel11linkHoveredERK7QString(const QString & arg0) {
  if (this->slot_func__ZN6QLabel11linkHoveredERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN6QLabel11linkHoveredERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QLabel_SlotProxy_connect__ZN6QLabel11linkHoveredERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLabel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QLabel11linkHoveredERK7QString = (decltype(that->slot_func__ZN6QLabel11linkHoveredERK7QString))ffifptr;
  QObject::connect((QLabel*)sender, SIGNAL(linkHovered(const class QString &)), that, SLOT(slot_proxy_func__ZN6QLabel11linkHoveredERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QLabel_SlotProxy_disconnect__ZN6QLabel11linkHoveredERK7QString(QLabel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

