//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(listwidget)
// /usr/include/qt/QtWidgets/qlistwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlistwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QListWidget is pure virtual: false false
// QListWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQListWidget_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQListWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQListWidget_t qt_meta_stringdata_MyQListWidget = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQListWidget"
  },
  "MyQListWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQListWidget[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQListWidget : public QListWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QListWidget::staticMetaObject,
  qt_meta_stringdata_MyQListWidget.data,
  qt_meta_data_MyQListWidget,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQListWidget.stringdata0))
      return static_cast<void*>(this);
  return QListWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QListWidget::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQListWidget() {}
// void QListWidget(QWidget *)
MyQListWidget(QWidget * parent) : QListWidget(parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QListWidget::event(e);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [8] QStringList mimeTypes()
  virtual QStringList mimeTypes() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mimeTypes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return QListWidget::mimeTypes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QMimeData * mimeData(const QList<QListWidgetItem *>)
  virtual QMimeData * mimeData(const QList<QListWidgetItem *> items) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mimeData", &handled, 1, (uint64_t)&items, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMimeData *)(irv);
      // Pointer Pointer QMimeData *
    } else {
    return QListWidget::mimeData(items);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool dropMimeData(int, const QMimeData *, Qt::DropAction)
  virtual bool dropMimeData(int index, const QMimeData * data, Qt::DropAction action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropMimeData", &handled, 3, (uint64_t)index, (uint64_t)data, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QListWidget::dropMimeData(index, data, action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] Qt::DropActions supportedDropActions()
  virtual Qt::DropActions supportedDropActions() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedDropActions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (Qt::DropActions)(int)(irv);
      // Elaborated Record QFlags<Qt::DropAction>
    } else {
    return QListWidget::supportedDropActions();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QListWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQListWidget* qo = (MyQListWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlistwidget(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:209
// [8] QString tr(const char *, const char *, int) 
// (10)qm58638437 (27)_ZN11QListWidget2trEPKcS1_i
//static
/*void qm58638437(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QListWidget::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QListWidget::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:217
// [-2] void QListWidget(QWidget *) 
// (12)qm1111472893 (28)_ZN11QListWidgetC2EP7QWidget
/*void* qm1111472893(QWidget * parent)*/{
  auto _nilp = (MyQListWidget*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QListWidget(parent);
  this_ =  new MyQListWidget(parent);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:227
// [-2] void addItem(const QString &) 
// (11)qm495607962 (35)_ZN11QListWidget7addItemERK7QString
//static
/*void qm495607962(const QString & label)*/ {
  const QString & label = *(const QString *)this_;
  (void) ((QListWidget*)this_)->addItem(label);
   auto xptr = (void (QListWidget::*)(QString const&) ) &QListWidget::addItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:228
// [-2] void addItem(QListWidgetItem *) 
// (11)qm305899775 (43)_ZN11QListWidget7addItemEP15QListWidgetItem
//static
/*void qm305899775(QListWidgetItem * item)*/ {
  QListWidgetItem * item = *(QListWidgetItem **)this_;
  (void) ((QListWidget*)this_)->addItem(item);
   auto xptr = (void (QListWidget::*)(QListWidgetItem*) ) &QListWidget::addItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:229
// [-2] void addItems(const QStringList &) 
// (12)qm4041625188 (41)_ZN11QListWidget8addItemsERK11QStringList
//static
/*void qm4041625188(const QStringList & labels)*/ {
  const QStringList & labels = *(const QStringList *)this_;
  (void) ((QListWidget*)this_)->addItems(labels);
   auto xptr = (void (QListWidget::*)(QStringList const&) ) &QListWidget::addItems;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:242
// [8] QListWidgetItem * itemAt(int, int) const
// (12)qm3741386768 (27)_ZNK11QListWidget6itemAtEii
//static
/*void qm3741386768(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QListWidget*)this_)->itemAt(x, y);
   auto xptr = (QListWidgetItem * (QListWidget::*)(int, int) const ) &QListWidget::itemAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:257
// [-2] void removeItemWidget(QListWidgetItem *) 
// (12)qm2928360352 (53)_ZN11QListWidget16removeItemWidgetEP15QListWidgetItem
//static
/*void qm2928360352(QListWidgetItem * item)*/ {
  QListWidgetItem * item = *(QListWidgetItem **)this_;
  (void) ((QListWidget*)this_)->removeItemWidget(item);
   auto xptr = (void (QListWidget::*)(QListWidgetItem*) ) &QListWidget::removeItemWidget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QListWidgetD2Ev(void *this_)*/ {
  delete (QListWidget*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlistwidget
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(listwidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
