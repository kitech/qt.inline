// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qshortcut.h
// dst-file: /src/widgets/qshortcut.cxx
//

// header block begin =>
#include <qshortcut.h>

extern "C" {

int QShortcut_Class_Size()
{
  return sizeof(QShortcut);
}

// QShortcut(const class QKeySequence &, class QWidget *, const char *, const char *, Qt::ShortcutContext)
QShortcut* dector_ZN9QShortcutC1ERK12QKeySequenceP7QWidgetPKcS6_N2Qt15ShortcutContextE(const QKeySequence & key, QWidget * parent, const char * member, const char * ambiguousMember, Qt::ShortcutContext context)
{
  // static_assert(sizeof(QShortcut) == 32, "tyszerr");
  QShortcut* rthis = new QShortcut(key, parent, member, ambiguousMember, context);
  return rthis;
}

// ~QShortcut()
void dedtor_ZN9QShortcutD0Ev(QShortcut* that)
{
  QShortcut* rthis = (QShortcut*)that;
  delete rthis;
}

// QShortcut(class QWidget *)
QShortcut* dector_ZN9QShortcutC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QShortcut) == 32, "tyszerr");
  QShortcut* rthis = new QShortcut(parent);
  return rthis;
}

  // proto:  QWidget * QShortcut::parentWidget();
QWidget * demth_ZNK9QShortcut12parentWidgetEv(void *that)
{
  QShortcut *cthat = (QShortcut *)that;
  return cthat->parentWidget();
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
// QShortcut_SlotProxy here
class QShortcut_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QShortcut_SlotProxy():QObject(){}

public slots:
  // activated()
  void slot_proxy_func__ZN9QShortcut9activatedEv();
public:
  void (*slot_func__ZN9QShortcut9activatedEv)(void* rsfptr) = NULL;
public slots:
  // activatedAmbiguously()
  void slot_proxy_func__ZN9QShortcut20activatedAmbiguouslyEv();
public:
  void (*slot_func__ZN9QShortcut20activatedAmbiguouslyEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qshortcut.moc"

extern "C" {
  QShortcut_SlotProxy* QShortcut_SlotProxy_new()
  {
    return new QShortcut_SlotProxy();
  }
};

void QShortcut_SlotProxy::slot_proxy_func__ZN9QShortcut9activatedEv() {
  if (this->slot_func__ZN9QShortcut9activatedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QShortcut9activatedEv(this->rsfptr);
  }
}
extern "C"
void* QShortcut_SlotProxy_connect__ZN9QShortcut9activatedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QShortcut_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QShortcut9activatedEv = (decltype(that->slot_func__ZN9QShortcut9activatedEv))ffifptr;
  QObject::connect((QShortcut*)sender, SIGNAL(activated()), that, SLOT(slot_proxy_func__ZN9QShortcut9activatedEv()));
  return that;
}
extern "C"
void QShortcut_SlotProxy_disconnect__ZN9QShortcut9activatedEv(QShortcut_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QShortcut_SlotProxy::slot_proxy_func__ZN9QShortcut20activatedAmbiguouslyEv() {
  if (this->slot_func__ZN9QShortcut20activatedAmbiguouslyEv != NULL) {
    // do smth...
    this->slot_func__ZN9QShortcut20activatedAmbiguouslyEv(this->rsfptr);
  }
}
extern "C"
void* QShortcut_SlotProxy_connect__ZN9QShortcut20activatedAmbiguouslyEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QShortcut_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QShortcut20activatedAmbiguouslyEv = (decltype(that->slot_func__ZN9QShortcut20activatedAmbiguouslyEv))ffifptr;
  QObject::connect((QShortcut*)sender, SIGNAL(activatedAmbiguously()), that, SLOT(slot_proxy_func__ZN9QShortcut20activatedAmbiguouslyEv()));
  return that;
}
extern "C"
void QShortcut_SlotProxy_disconnect__ZN9QShortcut20activatedAmbiguouslyEv(QShortcut_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

